#include <Arduino.h>
#include <onlow.h>
#include <1965FordMustangV8start.h>
#include <1965FordMustangV8idle.h>
#include <1965FordMustangV8knock.h>
#include <CarHorn.h>
#include <door.h>
#include <TruckReversingBeep.h>

int encender = 0;
int bocina = 0;

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

void sonidoEncendido(){
  for (int i = 0; i < 155393; ++i){
    dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoConstanteVelocidad(){
  for (int i = 0; i < 37375; ++i){
      dacWrite(26, constrain(revSamples[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void aperturaPuerta(){
  for (int i = 0; i < 42484; ++i){
    dacWrite(26, constrain(sound1Samples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoBocina(){
  for (int i = 0; i < 13513; ++i){
      dacWrite(26, constrain(hornSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void setup() {
}


void loop() { 

  if (encender == 0){
    aperturaPuerta();
    delay(1000);
    sonidoEncendido();
    delay(100);
    sonidoBocina();
    delay(100);
    sonidoConstanteVelocidad();
   // marchaAtras();
  
    encender = encender + 1;
  }
  /*for (int i = 65024; i < 114432; ++i){
    dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }*/
  /*for (int i = 102272; i < 115200; ++i){
    dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
  for(int i=0;i<3;++i){
    for (int i = 108800; i < 115328; ++i){
      dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
    }
  }*/  
  
}



