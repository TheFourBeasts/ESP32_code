#include "ControladorGeneral.h"
#include <regex.h>

ControladorGeneral::ControladorGeneral(){
    giro_derecho=22;
    giro_izquierdo=23;
    giro_der_encendido=0;
    giro_izq_encendido=0;
    baliza_encendida=0;
    bocina_encendida=0;
    estado_vehiculo=0;
    estado_alarma=0;
    baja=14;
    alta=27;
    reflector=13;
 
    pinMode(giro_derecho, INPUT_PULLDOWN);
    pinMode(giro_izquierdo, INPUT_PULLDOWN);
    pinMode(baja, OUTPUT);
    pinMode(alta, OUTPUT);
    pinMode(reflector, OUTPUT);
    pinMode(contacto, OUTPUT);
}

void ControladorGeneral::encenderBocina(String mensaje){
  
  if(mensaje.equals("true")){
        bocina_encendida=1;
    } else {
        bocina_encendida=0;
    }
}

void ControladorGeneral::encenderVehiculo(String mensaje){
  
  if(mensaje.equals("true")){
        estado_vehiculo=1;
    } else {
        estado_vehiculo=0;
    }
}

void ControladorGeneral::abrir_puertas(String mensaje){
  
  if(mensaje.equals("true")){
        estado_alarma=1;
    } else {
        estado_alarma=0;
    }
}

void ControladorGeneral::encender_apagar(String mensaje, int pin){
    if(mensaje.equals("true")){
        digitalWrite(pin,HIGH);
    } else {
        digitalWrite(pin,LOW);
    }
}

void ControladorGeneral::encender_giro_der(String* topico, String* mensaje){
    *topico="app/giroDerecho";
    *mensaje="1";
    giro_der_encendido=1;
    giro_izq_encendido=0;
    //baliza_encendida=0;
}

void ControladorGeneral::apagar_giro_der(String* topico, String* mensaje){
    *topico="app/giroDerecho";
    *mensaje="0";
    giro_der_encendido=0;
}

void ControladorGeneral::encender_giro_izq(String* topico, String* mensaje){
    *topico="app/giroIzquierdo";
    *mensaje="1";
    giro_izq_encendido=1;
    giro_der_encendido=0;
    //baliza_encendida=0;

}

void ControladorGeneral::apagar_giro_izq(String* topico, String* mensaje){
    *topico="app/giroIzquierdo";
    *mensaje="0";
    giro_izq_encendido=0;

}

void ControladorGeneral::encender_apagar_baliza(String mensaje){

        if(mensaje.equals("true")){
            baliza_encendida=1;
            //giro_der_encendido=0;
            //giro_izq_encendido=0; 
        } else {
            baliza_encendida=0;
        }
}

void ControladorGeneral::controlar_luces(String topico, String mensaje){
        if (topico.equals("esp/luces/baja")){
            encender_apagar(mensaje, baja);

        } else if (topico.equals("esp/luces/alta")){
            encender_apagar(mensaje, alta);

        } else if (topico.equals("esp/luces/reflector")){
            encender_apagar(mensaje, reflector);

        } else if (topico.equals("esp/luces/baliza")){
            encender_apagar_baliza(mensaje); 
        }      
    }

    void ControladorGeneral::encender_apagar_rele(String mensaje, int pin){
        if(mensaje.equals("true")){
            digitalWrite(pin,LOW);
        } else {
            digitalWrite(pin,HIGH);
        }
    }

void ControladorGeneral::controlar_salida(char* topico, String mensaje){
    String topic = String(topico);

    if(topic.substring(0,9).equals("esp/luces")){
        controlar_luces(topic,mensaje);

    } else if (topic.equals("esp/contacto")){
        encenderVehiculo(mensaje);

    } else if (topic.equals("esp/bocina")){
        encenderBocina(mensaje);
    } 
     else if (topic.equals("esp/alarma")){
        abrir_puertas(mensaje);
    }
}

void ControladorGeneral::controlar_entrada(String* topico, String* mensaje){
    //Envío mensaje al broker solo si cambiaron de estado
    if(digitalRead(giro_derecho) && !giro_der_encendido){
        encender_giro_der(topico,mensaje);    

    } else if(!digitalRead(giro_derecho) && giro_der_encendido) {
        apagar_giro_der(topico,mensaje);

    } 
    if(digitalRead(giro_izquierdo) && !giro_izq_encendido){
        encender_giro_izq(topico,mensaje);   

    } else if(!digitalRead(giro_izquierdo) && giro_izq_encendido){
        apagar_giro_izq(topico,mensaje);  
    }

}

int ControladorGeneral::getBaliza(){
    return baliza_encendida;
}

int ControladorGeneral::getGiroDerecho(){
    return giro_der_encendido;
}

int ControladorGeneral::getGiroIzquierdo(){
    return giro_izq_encendido;
}

int ControladorGeneral::getBocina(){
    return bocina_encendida;
}

int ControladorGeneral::getEstadoVehiculo(){
    return estado_vehiculo;
}

int ControladorGeneral::getEstadoAlarma(){
    return estado_alarma;
}