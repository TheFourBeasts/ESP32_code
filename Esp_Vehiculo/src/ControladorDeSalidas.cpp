#include "ControladorDeSalidas.h"
#include <regex.h>

ControladorDeSalidas::ControladorDeSalidas(){
    posicion=12;
    baja=14;
    alta=27;
    interior=18;
    reflector=25;
    contacto=13;
    puertas=33;

    pinMode(posicion, OUTPUT);
    pinMode(baja, OUTPUT);
    pinMode(alta, OUTPUT);
    pinMode(interior, OUTPUT);
    pinMode(reflector, OUTPUT);
    pinMode(contacto, OUTPUT);
    pinMode(puertas, OUTPUT);

    //Desactivo relé
    digitalWrite(contacto,HIGH);
}

void ControladorDeSalidas::encender_apagar(String mensaje, int pin){
    if(mensaje.equals("true")){
        digitalWrite(pin,HIGH);
    } else {
        digitalWrite(pin,LOW);
    }
}

void ControladorDeSalidas::controlar_luces(String topico, String mensaje){
    Serial.println(topico);
    if(topico.equals("esp/luces/posicion")){
        encender_apagar(mensaje, posicion);

    } else if (topico.equals("esp/luces/baja")){
        encender_apagar(mensaje, baja);

    } else if (topico.equals("esp/luces/alta")){
        encender_apagar(mensaje, alta);

    } else if (topico.equals("esp/luces/interior")){
        encender_apagar(mensaje, interior);

    } else if (topico.equals("esp/luces/reflector")){
        encender_apagar(mensaje, reflector);
    }         
}

void ControladorDeSalidas::encender_apagar_rele(String mensaje, int pin){
    if(mensaje.equals("true")){
        digitalWrite(pin,LOW);
    } else {
        digitalWrite(pin,HIGH);
    }
}

void ControladorDeSalidas::controlar(char* topico, String mensaje){
    String topic = String(topico);

    if(topic.substring(0,9).equals("esp/luces")){
        controlar_luces(topic,mensaje);

    } else if (topic.equals("esp/contacto")){
        encender_apagar_rele(mensaje, contacto);
        encender_apagar(mensaje, posicion);

    } else if (topic.equals("esp/puertas")){
        encender_apagar_rele(mensaje, puertas);
    }
}