#include "ControladorGeneral.h"
#include <regex.h>

ControladorGeneral::ControladorGeneral(){
    giro_derecho=22;
    giro_izquierdo=23;
    giro_der_encendido=0;
    giro_izq_encendido=0;
    baliza_encendida=0;
    bocina_encendida=0;
    posicion=12;
    baja=14;
    alta=27;
    //interior=18;
    reflector=13;
    //contacto=13;
 
    pinMode(giro_derecho, INPUT);
    pinMode(giro_izquierdo, INPUT);
    pinMode(posicion, OUTPUT);
    pinMode(baja, OUTPUT);
    pinMode(alta, OUTPUT);
    //pinMode(interior, OUTPUT);
    pinMode(reflector, OUTPUT);
    pinMode(contacto, OUTPUT);

    //Desactivo relé
    digitalWrite(contacto,HIGH);
}

void ControladorGeneral::encenderBocina(String mensaje){
  
  if(mensaje.equals("true")){
        bocina_encendida=1;
    } else {
        bocina_encendida=0;
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
            giro_der_encendido=0;
            giro_izq_encendido=0; 
        } else {
            baliza_encendida=0;
        }
}

void ControladorGeneral::controlar_luces(String topico, String mensaje){
        Serial.println(topico);
        //if(topico.equals("esp/luces/posicion")){
        //    encender_apagar(mensaje, posicion);
        //} else 
        if (topico.equals("esp/luces/baja")){
            encender_apagar(mensaje, baja);

        } else if (topico.equals("esp/luces/alta")){
            encender_apagar(mensaje, alta);

        //} else if (topico.equals("esp/luces/interior")){
        //    encender_apagar(mensaje, interior);

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
        encender_apagar_rele(mensaje, contacto);
        encender_apagar(mensaje, posicion);

    } else if (topic.equals("esp/bocina")){
        Serial.println(mensaje);
        encenderBocina(mensaje);
    } 
    // else if (topic.equals("esp/puertas")){
     //   encender_apagar_rele(mensaje, puertas);
    //}
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