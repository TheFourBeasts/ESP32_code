#include <Arduino.h>
#include <onlow.h>
#include <offlow.h>
#include <onhigh.h>
#include <1965FordMustangV8start.h>
#include <1965FordMustangV8knock.h>
#include <CarHorn.h>
#include <door.h>
#include <TruckReversingBeep.h>
#include "soc/rtc_wdt.h"
#include "Arduino.h"
#include <WiFi.h>
#include "PubSubClient.h"
#include "FreeRTOS.h"

//******Variables de Sonido*****

volatile int encender = 0;
volatile int bocina = 0;

//******Variables de velocimetro*****

//_CalculateLastLapTime cllt;
volatile float velocidad = 0.00;
volatile float velocidad_ant = 0.00;
volatile int cont = 0;
volatile unsigned timeLap = 490;
volatile unsigned long startTimeLap = 0;
volatile unsigned long endTimeLap = 2000;

uint32_t inputPin = 36;

//**************************************

//***Variables y constantes de comunicacion********
const char *ssid = "WiFi-Arnet-nf4d";
const char *password = "UFYMAUAWKS";
const char *mqtt_server = "node02.myqtthub.com";
const int mqtt_port = 1883;
const char *client_id = "lucas.capponi@gmail.com";
const char *client_user = "lucas_vehiculo";
const char *client_pass = "vehiculo";
const char *root_topic_subscribe = "esp/contacto";
//const char *root_topic_publish = "esp/test";

WiFiClient espClient;
PubSubClient client(espClient);

TaskHandle_t TareaWiFi;
//*****************************************************

/*******************************************
 *  Funcion de interrucion para obtener
 *  la velociad.
 * *****************************************/

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
  for (int i = 0; i < 19583/*62335*/; ++i){
      dacWrite(26, constrain(acelera[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoDesaceleraVelocidad(){
  for (int i = 0; i < 19583; ++i){
      dacWrite(26, constrain(constante[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoConstanteVelocidad(){
  for (int i = 0; i < 19583/*37375*/; ++i){
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

void callback(char *topic, byte *payload, unsigned int length) {
  String incoming = "";
  Serial.print("Mensaje recibido desde -> ");
  Serial.print(topic);
  Serial.println("");
  for (int i = 0; i < length; i++)
  {
    incoming += (char)payload[i];
  }
  incoming.trim();
  Serial.println("Mensaje -> " + incoming);
}

void reconnect() {
    while (!client.connected()) {
        Serial.print("Intentando conexión Mqtt...");
        // Intentamos conectar
        if (client.connect(client_id, client_user,client_pass) ){
            Serial.println("Conectado!");
            // Nos suscribimos
            if(client.subscribe(root_topic_subscribe)){
                Serial.println("Suscripcion ok");
            }else{
                Serial.println("fallo Suscripción");
            }
        } else {
            Serial.print("falló :( con error -> ");
            Serial.print(client.state());
            Serial.println(" Intentamos de nuevo en 5 segundos");
            delay(5000);
        }
    }
}

void setup_wifi(void* pvParameters) {
  // Nos conectamos a nuestra red Wifi
  Serial.println();
  Serial.print("Conectando a ssid: ");
  Serial.println(ssid);
  Serial.println(xPortGetCoreID());
  WiFi.mode(WIFI_STA);
  Serial.println(WiFi.status());
  WiFi.begin(ssid, password);
}

void setup() {
  Serial.begin(115200);
  encender = 1;
}


void loop() { 

  if (encender == 1){
    aperturaPuerta();
    delay(1000);
    sonidoEncendido();
    delay(100);
    sonidoBocina();
    delay(100);
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



