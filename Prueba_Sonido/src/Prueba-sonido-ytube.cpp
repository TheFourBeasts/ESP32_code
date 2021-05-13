#include <Arduino.h>
#include <1965FordMustangV8rev.h>
#include <1965FordMustangV8start.h>
#include <1965FordMustangV8idle.h>
#include <1965FordMustangV8knock.h>
#include <CarHorn.h>
#include <door.h>
#include <TruckReversingBeep.h>

int encender = 0;

void setup() {
}

void sonidoMarchaAtras(){
  for (int i = 0; i < 22049; ++i){
    dacWrite(26, constrain(reversingSamples[i]*5/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void marchaAtras(){
  for(int i=0;i<3;++i){
    sonidoMarchaAtras();
  }
}

void loop() { 

  if (encender == 0){
    for (int i = 0; i < 13513; ++i){
      dacWrite(26, constrain(hornSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
    delay(1000);
    for (int i = 0; i < 42484; ++i){
      dacWrite(26, constrain(sound1Samples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
    delay(1000);
    for (int i = 0; i < 155393; ++i){
      dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
    for (int i = 0; i < 2957; ++i){
      dacWrite(26, constrain(revSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }  
    delay(1000);
    marchaAtras();
    encender = encender + 1;
  }
  /*for (int i = 0; i < 2945; ++i){
      dacWrite(26, constrain(samples[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }*/
  
  
}



