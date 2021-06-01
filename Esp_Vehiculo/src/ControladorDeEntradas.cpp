#include "ControladorDeEntradas.h"

ControladorDeEntradas::ControladorDeEntradas(){
    giro_derecho=22;
    giro_izquierdo=23;
    baliza=35;
    giro_der_encendido=0;
    giro_izq_encendido=0;
    baliza_encendida=0;


    pinMode(giro_derecho, INPUT);
    pinMode(giro_izquierdo, INPUT);
    pinMode(baliza, INPUT);
}

void ControladorDeEntradas::encender_giro_der(String* topico, String* mensaje){
    *topico="app/giroDerecho";
    *mensaje="on";
    giro_der_encendido=1;
    giro_izq_encendido=0;
    baliza_encendida=0;
}

void ControladorDeEntradas::apagar_giro_der(String* topico, String* mensaje){
    *topico="app/giroDerecho";
    *mensaje="off";
    giro_der_encendido=0;
}

void ControladorDeEntradas::encender_giro_izq(String* topico, String* mensaje){
    *topico="app/giroIzquierdo";
        *mensaje="on";
        giro_izq_encendido=1;
        giro_der_encendido=0;
        baliza_encendida=0;

}

void ControladorDeEntradas::apagar_giro_izq(String* topico, String* mensaje){
     *topico="app/giroIzquierdo";
        *mensaje="off";
        giro_izq_encendido=0;

}

void ControladorDeEntradas::encender_baliza(String* topico, String* mensaje){
     *topico="app/baliza";
        *mensaje="on";
        baliza_encendida=1;
        giro_der_encendido=0;
        giro_izq_encendido=0; 

}
void ControladorDeEntradas::apagar_baliza(String* topico, String* mensaje){
     *topico="app/baliza";
        *mensaje="off";
        baliza_encendida=0; 

}

void ControladorDeEntradas::controlar(String* topico, String* mensaje){
    //Envío mensaje al broker solo si cambiaron de estado
    if(digitalRead(giro_derecho) && !giro_der_encendido){
        encender_giro_der(topico,mensaje);    

    } else if(!digitalRead(giro_derecho) && giro_der_encendido) {
        apagar_giro_der(topico,mensaje);

    } else if(digitalRead(giro_izquierdo) && !giro_izq_encendido){
        encender_giro_izq(topico,mensaje);   

    } else if(!digitalRead(giro_izquierdo) && giro_izq_encendido){
        apagar_giro_izq(topico,mensaje);
       
    } else if(digitalRead(baliza) && !baliza_encendida){
        encender_baliza(topico,mensaje); 
          
    } else if(!digitalRead(baliza) && baliza_encendida) {
        apagar_baliza(topico,mensaje);             
    }
}