#include <Arduino.h>
#include <1965FordMustangV8rev.h>
#include <1965FordMustangV8start.h>
#include <1965FordMustangV8idle.h>
#include <1965FordMustangV8knock.h>

int encender = 0;

void setup() {
}

void loop() { 

  if (encender == 0){
    for (int i = 0; i < 155393; ++i){
      dacWrite(26, constrain(startSamples[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
    for (int i = 0; i < 2957; ++i){
      dacWrite(26, constrain(revSamples[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }  
    encender = encender + 1;
  }
  for (int i = 0; i < 2945; ++i){
      dacWrite(26, constrain(samples[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}



