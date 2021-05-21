#include <Arduino.h>
#include <onlow.h>
#include <offlow.h>
#include <onhigh.h>
#include <1965FordMustangV8start.h>
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

void sonidoAceleraVelocidad(){
  for (int i = 0; i < 62335; ++i){
      dacWrite(26, constrain(acelera[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoConstanteVelocidad(){
  for (int i = 0; i < 19583; ++i){
      dacWrite(26, constrain(constante[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoDesaceleraVelocidad(){
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

  if (encender == 1){
    aperturaPuerta();
    delay(1000);
    sonidoEncendido();
    delay(100);
    sonidoBocina();
    delay(100);
    sonidoAceleraVelocidad();
   // marchaAtras();
  
    encender = encender + 1;
  }
  else if (encender == 2){
    sonidoAceleraVelocidad();
    sonidoConstanteVelocidad();
    sonidoConstanteVelocidad();
    sonidoConstanteVelocidad();
    sonidoDesaceleraVelocidad();
    sonidoConstanteVelocidad();
    sonidoConstanteVelocidad();
    sonidoConstanteVelocidad();    
  }

  if (bocina == 1) {
    sonidoBocina();
    delay(50);
    sonidoBocina();
    bocina = 0;
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



