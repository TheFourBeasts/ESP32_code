#include "ControladorDeSalidas.h"

ControladorDeSalidas::ControladorDeSalidas(){
    posicion=14;
    baja=16;
    alta=17;
    interior=18;
    reflector=19;
    contacto=13;
    puertas=33;

    pinMode(posicion, OUTPUT);
    pinMode(baja, OUTPUT);
    pinMode(alta, OUTPUT);
    pinMode(interior, OUTPUT);
    pinMode(reflector, OUTPUT);
    pinMode(contacto, OUTPUT);
    pinMode(puertas, OUTPUT);
}

void ControladorDeSalidas::encender_apagar(String mensaje, int pin){
    if(mensaje.equals("on")){
        digitalWrite(pin,HIGH);
    } else {
        digitalWrite(pin,LOW);
    }
}

void ControladorDeSalidas::controlar_luces(String topico, String mensaje){
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

void ControladorDeSalidas::controlar_contacto(String mensaje){
    encender_apagar(mensaje,contacto);
}

void ControladorDeSalidas::controlar_puertas(String mensaje){
    encender_apagar(mensaje,puertas);
}

void ControladorDeSalidas::controlar(char* topico, String mensaje){
    String topic = String(topico);

    if(topic.equals("^esp/luces")){
        controlar_luces(topic,mensaje);

    } else if (topic.equals("^esp/contacto")){
        controlar_contacto(mensaje);

    } else if (topic.equals("^esp/puertas")){
        controlar_puertas(mensaje);
    }
}