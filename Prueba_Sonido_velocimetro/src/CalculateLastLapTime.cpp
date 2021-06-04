#include "CalculateLastLapTime.h"

/*
volatile float velocidad = 0.00;
volatile int cont = 0;
volatile unsigned timeLap = 490;
volatile unsigned long startTimeLap = 0;
volatile unsigned long endTimeLap = 2000;
*/

//void IRAM_ATTR isr_interruption(){
 /* cont++;
  if(cont == 1){
    startTimeLap = millis();
  }else if(cont == 2){
    //endTimeLap = millis();
    timeLap = millis() - startTimeLap;
    cont = 0;
  }
 
  if(timeLap != 0){
  velocidad = ((PI*0.0007874)*(3600000/timeLap));
  }
*/

//} 

 _CalculateLastLapTime CalculateLastLapTime;