#include "ControladorDeEntradas.h"

ControladorDeEntradas::ControladorDeEntradas(){
    giro_derecho=22;
    giro_izquierdo=23;
    baliza=35;

    pinMode(giro_derecho, INPUT);
    pinMode(giro_izquierdo, INPUT);
    pinMode(baliza, INPUT);
}

void ControladorDeEntradas::controlar(String* topico, String* mensaje){
    if(digitalRead(giro_derecho)){
        *topico="app/giroDerecho";
        *mensaje="on";
    } else {
        *topico="app/giroDerecho";
        *mensaje="off";
    }

    if(digitalRead(giro_izquierdo)){
        *topico="app/giroIzquierdo";
        *mensaje="on";
    } else {
        *topico="app/giroIzquierdo";
        *mensaje="off";
    }
    
    if(digitalRead(baliza)){
        *topico="app/baliza";
        *mensaje="on";
    } else {
        *topico="app/baliza";
        *mensaje="off";
    }
}