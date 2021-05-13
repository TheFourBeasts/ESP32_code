#include <Arduino.h>
#include <1965FordMustangV8rev.h>
#include <1965FordMustangV8start.h>
#include <1965FordMustangV8idle.h>
#include <1965FordMustangV8knock.h>

// Sound
volatile boolean engineOn = false;                       // Signal for engine on / off
volatile boolean engineStart = false;                    // Active, if engine is starting up
volatile boolean engineRunning = false;                  // Active, if engine is running
volatile boolean engineStop = false;                     // Active, if engine is shutting down
volatile boolean jakeBrakeRequest = false;               // Active, if engine jake braking is requested
volatile boolean engineJakeBraking = false;              // Active, if engine is jake braking
volatile boolean wastegateTrigger = false;               // Trigger wastegate (blowoff) after rapid throttle drop
volatile boolean dieselKnockTrigger = false;             // Trigger Diesel ignition "knock"
volatile boolean dieselKnockTriggerFirst = false;        // The first  Diesel ignition "knock" per sequence
volatile boolean airBrakeTrigger = false;                // Trigger for air brake noise
volatile boolean parkingBrakeTrigger = false;            // Trigger for air parking brake noise
volatile boolean shiftingTrigger = false;                // Trigger for shifting noise
volatile boolean hornTrigger = false;                    // Trigger for horn on / off
volatile boolean sirenTrigger = false;                   // Trigger for siren  on / off
volatile boolean sound1trigger = false;                  // Trigger for sound1  on / off
volatile boolean couplingTrigger = false;                // Trigger for trailer coupling  sound
volatile boolean uncouplingTrigger = false;              // Trigger for trailer uncoupling  sound
volatile boolean indicatorSoundOn = false;               // active, if indicator bulb is on

// Sound latches
volatile boolean hornLatch = false;                      // Horn latch bit
volatile boolean sirenLatch = false;                     // Siren latch bit

// Sound volumes
volatile uint16_t throttleDependentVolume = 0;           // engine volume according to throttle position
volatile uint16_t throttleDependentRevVolume = 0;        // engine rev volume according to throttle position
volatile uint16_t rpmDependentJakeBrakeVolume = 0;       // Engine rpm dependent jake brake volume
volatile uint16_t throttleDependentKnockVolume = 0;      // engine Diesel knock volume according to throttle position
volatile uint16_t throttleDependentTurboVolume = 0;      // turbo volume according to rpm
volatile uint16_t throttleDependentFanVolume = 0;        // cooling fan volume according to rpm
volatile uint16_t throttleDependentChargerVolume = 0;    // cooling fan volume according to rpm
volatile uint16_t throttleDependentWastegateVolume = 0;  // wastegate volume according to rpm
volatile int16_t masterVolume = 100;                     // Master volume percentage
volatile uint8_t dacOffset = 128;  // 128, but needs to be ramped up slowly to prevent popping noise, if switched on

// Throttle
int16_t currentThrottle = 0;                             // 0 - 500 (Throttle trigger input)
int16_t currentThrottleFaded = 0;                        // faded throttle for volume calculations etc.

// Engine
const int16_t maxRpm = 500;                              // always 500
const int16_t minRpm = 0;                                // always 0
int32_t currentRpm = 0;                                  // 0 - 500 (signed required!)
volatile uint8_t engineState = 0;                        // 0 = off, 1 = starting, 2 = running, 3 = stopping
int16_t engineLoad = 0;                                  // 0 - 500
volatile uint16_t engineSampleRate = 0;                  // Engine sample rate
int32_t speedLimit = maxRpm;                             // The speed limit, depending on selected virtual gear

// Clutch
boolean clutchDisengaged = true;                         // Active while clutch is disengaged

// Transmission
uint8_t selectedGear = 1;                                // The currently used gear of our shifting gearbox
uint8_t selectedAutomaticGear = 1;                       // The currently used gear of our automatic gearbox
boolean gearUpShiftingInProgress;                        // Active while shifting upwards
boolean gearDownShiftingInProgress;                      // Active while shifting downwards
boolean gearUpShiftingPulse;                             // Active, if shifting upwards begins
boolean gearDownShiftingPulse;                           // Active, if shifting downwards begins
volatile boolean neutralGear = false;                    // Transmission in neutral

// ESC
volatile boolean escIsBraking = false;                   // ESC is in a braking state
volatile boolean escIsDriving = false;                   // ESC is in a driving state
volatile boolean escInReverse = false;                   // ESC is driving or braking backwards
int8_t driveState = 0;                                   // for ESC state machine
int16_t escPulseMax;                                     // ESC calibration variables
int16_t escPulseMin;
int16_t escPulseMaxNeutral;
int16_t escPulseMinNeutral;
uint16_t currentSpeed = 0;                               // 0 - 500 (current ESC power)

// Sampling intervals for interrupt timer (adjusted according to your sound file sampling rate)
uint32_t maxSampleInterval = 4000000 / sampleRate;
uint32_t minSampleInterval = 4000000 / sampleRate * 100;

// Interrupt timer for variable sample rate playback (engine sound)
volatile uint32_t variableTimerTicks = maxSampleInterval;

// Interrupt timer for fixed sample rate playback (horn etc., playing in parallel with engine sound)
volatile uint32_t fixedTimerTicks = maxSampleInterval;

int aux = 0;
static uint32_t attenuatorMillis;
static uint32_t curEngineSample;              // Index of currently loaded engine sample
static uint32_t curRevSample;                 // Index of currently loaded engine rev sample
static uint32_t curTurboSample;               // Index of currently loaded turbo sample
static uint32_t curFanSample;                 // Index of currently loaded fan sample
static uint32_t curChargerSample;             // Index of currently loaded charger sample
static uint32_t curStartSample;               // Index of currently loaded start sample
static uint32_t curJakeBrakeSample;           // Index of currently loaded jake brake sample
static uint32_t lastDieselKnockSample;        // Index of last Diesel knock sample
static uint16_t attenuator;                   // Used for volume adjustment during engine switch off
static uint16_t speedPercentage;              // slows the engine down during shutdown
static int32_t a, a1, a2, a3, b, c, d, e;     // Input signals for mixer: a = engine, b = additional sound, c = turbo sound, d = fan sound, e = supercharger sound
uint8_t a1Multi;                              // Volume multipliers

void engineMassSimulation() {

  static int32_t  targetRpm = 0;        // The engine RPM target
  static int32_t  lastThrottle;
  uint16_t converterSlip;
  static unsigned long throtMillis;
  static unsigned long printMillis;
  static unsigned long wastegateMillis;
  uint8_t timeBase;

  timeBase = 2;


  if (millis() - throtMillis > timeBase) { // Every 2 or 6ms
    throtMillis = millis();

    if (currentThrottle > 500) currentThrottle = 500;

    // Virtual clutch **********************************************************************************
    if (gearUpShiftingInProgress || gearDownShiftingInProgress || neutralGear || currentRpm < 200) {
      clutchDisengaged = true;
    }
    else {
      clutchDisengaged = false;
    }


    // Transmissions ***********************************************************************************

    // automatic transmission ----
    
      // Torque converter slip calculation
      if (selectedAutomaticGear < 2) converterSlip = engineLoad * 2; // more slip in first and reverse gear
      else converterSlip = engineLoad;

      targetRpm = currentSpeed / 10 + converterSlip; // Compute engine RPM
    

    // Engine RPM **************************************************************************************

    if (escIsBraking) targetRpm = 0; // keep engine @idle rpm, if braking at very low speed
    if (targetRpm > 500) targetRpm = 500;


    // Accelerate engine
    if (targetRpm > (currentRpm) && (currentRpm) < maxRpm && engineState == 2 && engineRunning) {
      if (!airBrakeTrigger) { // No acceleration, if brake release noise still playing
         if (currentRpm > maxRpm) currentRpm = maxRpm;
      }
    }

    // Decelerate engine
    if (targetRpm < currentRpm) {
      currentRpm -= 1;
      if (currentRpm < minRpm) currentRpm = minRpm;
    }


    // Speed (sample rate) output
    engineSampleRate = map(currentRpm, minRpm, maxRpm, maxSampleInterval, minSampleInterval); // Idle
  }

  // Prevent Wastegate from being triggered while downshifting
  if (gearDownShiftingInProgress) wastegateMillis = millis();

  // Trigger Wastegate, if throttle rapidly dropped
  if (lastThrottle - currentThrottle > 70 && !escIsBraking && millis() - wastegateMillis > 1000) {
    wastegateMillis = millis();
    wastegateTrigger = true;
  }
  lastThrottle = currentThrottle;
}

void setup() {
}

void loop() { 
          
    if (aux == 0){
      for (int i = 0; i < 155393; ++i){
        dacWrite(26, constrain(startSamples[i]*128/100+128,0,255));
        //dacWrite(26, constrain(((1 * 8 / 10) + (2 / 2) + (3 / 5) + (4 / 5) + (6 / 5)) * 128 / 100 + 128, 0, 255));
        delayMicroseconds(38); // ((1/22050)*1000000) - 7
      }
      for (int i = 0; i < 2945; ++i){
        dacWrite(26, constrain(samples[i]*128/100+128,0,255));
        //dacWrite(26, constrain(((1 * 8 / 10) + (2 / 2) + (3 / 5) + (4 / 5) + (6 / 5)) * 128 / 100 + 128, 0, 255));
        delayMicroseconds(38); // ((1/22050)*1000000) - 7
      }
      /*for (int i = 0; i < 2957; ++i){
        dacWrite(26, constrain(revSamples[i]*128/100+128,0,255));
        //dacWrite(26, constrain(((1 * 8 / 10) + (2 / 2) + (3 / 5) + (4 / 5) + (6 / 5)) * 128 / 100 + 128, 0, 255));
        delayMicroseconds(38); // ((1/22050)*1000000) - 7
      }  */
      aux = aux + 1;
    }

          if (curEngineSample < sampleCount - 1) {
          a1 = (samples[curEngineSample] * throttleDependentVolume / 100 /** idleVolumePercentage*/ / 100); // Idle sound
          a3 = 0;
          curEngineSample ++;

          // Optional rev sound, recorded at medium rpm. Note, that it needs to represent the same number of ignition cycles as the
          // idle sound. For example 4 or 8 for a V8 engine. It also needs to have about the same length. In order to adjust the length
          // or "revSampleCount", change the "Rate" setting in Audacity until it is about the same.

          a2 = (revSamples[curRevSample] * throttleDependentRevVolume / 100 * 100 / 100); // Rev sound
          if (curRevSample < revSampleCount) curRevSample ++;


          // Trigger throttle dependent Diesel ignition "knock" sound (played in the fixed sample rate interrupt)
          if (curEngineSample - lastDieselKnockSample > (sampleCount /*/ dieselKnockInterval*/)) {
            dieselKnockTrigger = true;
            dieselKnockTriggerFirst = false;
            lastDieselKnockSample = curEngineSample;
          }
        }
        else {
          curEngineSample = 0;
          lastDieselKnockSample = 0;
          dieselKnockTrigger = true;
          dieselKnockTriggerFirst = true;
        }

      // Engine sound mixer ----

      // Mixing the idle and rev sounds together, according to engine rpm
      // Below the "revSwitchPoint" target, the idle volume precentage is 90%, then falling to 0% @ max. rpm.
      // The total of idle and rev volume percentage is always 100%
      a1Multi = 100; // 90 - 100% proportion
      if (currentRpm > 100) a1Multi = 0;

      a1 = a1 * a1Multi / 100; // Idle volume
      a2 = a2 * (100 - a1Multi) / 100; // Rev volume

      a = a1 + a2 + a3; // Idle and rev sounds mixed together

// DAC output (groups a, b, c mixed together) ************************************************************************

  dacWrite(26, constrain(((a * 8 / 10) + (b / 2) + (c / 5) + (d / 5) + (e / 5)) * masterVolume / 100 + dacOffset, 0, 255)); // Mix signals, add 128 offset, write

  /*if (aux == 0){
    for (int i = 0; i < 155393; ++i){
      dacWrite(25, constrain(startSamples[i]*128/100+128,0,255));
      //dacWrite(25, constrain(((1 * 8 / 10) + (2 / 2) + (3 / 5) + (4 / 5) + (6 / 5)) * 128 / 100 + 128, 0, 255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
    for (int i = 0; i < 2945; ++i){
      dacWrite(25, constrain(samples[i]*128/100+128,0,255));
      //dacWrite(25, constrain(((1 * 8 / 10) + (2 / 2) + (3 / 5) + (4 / 5) + (6 / 5)) * 128 / 100 + 128, 0, 255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
    for (int i = 0; i < 2957; ++i){
      dacWrite(25, constrain(revSamples[i]*128/100+128,0,255));
      //dacWrite(25, constrain(((1 * 8 / 10) + (2 / 2) + (3 / 5) + (4 / 5) + (6 / 5)) * 128 / 100 + 128, 0, 255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }  
    aux = aux + 1;
  }  */
  engineMassSimulation();
}



