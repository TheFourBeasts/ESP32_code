/**
 * 
 *
 * 
 * 
 */
#include "soc/rtc_wdt.h"
#include "Arduino.h"
#include <WiFi.h>
#include "PubSubClient.h"
#include "FreeRTOS.h"
//#include "CalculateLastLapTime.h"
#define contacto 14
#define reflector 19
#define CONFIG_FREERTOS_UNICORE 0

//******Variables de velocimetro*****

//_CalculateLastLapTime cllt;
volatile float velocidad = 0.00;
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
void IRAM_ATTR isr_interruption(){
  cont++;

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
 
}




void callback(char *topic, byte *payload, unsigned int length)
{
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

  /*if (String(topic).equals("esp/contacto"))
  {
    if (incoming.equals("on"))
    {
      digitalWrite(comtacto, HIGH);
    }
    else if (incoming.equals("off"))
    {
      digitalWrite(contacto, LOW);
    }
  }*/
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

void setup_wifi(void* pvParameters)
{
  
  // Nos conectamos a nuestra red Wifi
  Serial.println();
  Serial.print("Conectando a ssid: ");
  Serial.println(ssid);
  Serial.println(xPortGetCoreID());
  WiFi.mode(WIFI_STA);
  Serial.println(WiFi.status());
  WiFi.begin(ssid, password);
  /*Serial.println("Tratando de conectar");
  Serial.println("Todavia no entré al While(WiFi.status() != WL_CONNECTED)");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("Todavia no entré al While(WiFi.status() != WL_CONNECTED)");
    
    delay(100);
    Serial.print(".-");

  }

  Serial.println("");
  Serial.println("Conectado a red WiFi!");
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());*/
}


void setup()
{
  //CONFIG_FREERTOS_UNICORE 0;
  Serial.begin(115200);
  setCpuFrequencyMhz(40);

  pinMode(36, INPUT);
  attachInterrupt(digitalPinToInterrupt(36), isr_interruption, RISING);
   
  //setup_wifi();
  pinMode(contacto,OUTPUT);
  pinMode(reflector,OUTPUT);
 
/*
   xTaskCreatePinnedToCore(
     setup_wifi,
     "TareaWiFi",
     10000,_
     0,
     &TareaWiFi,
     0
   );
 //setup_wifi();

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.println("Ya entré al While(WiFi.status() != WL_CONNECTED)");

    delay(100);
    repetidor++;
    Serial.print(repetidor);
    Serial.print(".--");

  }

  Serial.println("");
  Serial.println("Conectado a red WiFi!");
  Serial.println("Dirección IP: ");
  Serial.println(WiFi.localIP());


  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);


  

  Serial.print("Setup corrre en el Nucleo. ");
  Serial.println(xPortGetCoreID());
*/


}



/* ***************************************************
 * Loop para el Core 1
 *
 ********************************************************/
void loop(){
   delay(500);

//setCpuFrequencyMhz(160);
  //Serial.println(F_CPU);

  digitalWrite(contacto, LOW);
  digitalWrite(reflector, LOW);

  //digitalWrite(contacto, HIGH);
  //digitalWrite(reflector, HIGH);

  

  //Serial.println(getCpuFrequencyMhz());
  /*
  if (!client.connected())
    {
      reconnect();
    }
  */


 //if (client.connected()){
  //  	client.publish("esp/velocidad",String(velocidad,2).c_str());
   //delay(300);
//}

	//client.loop();
  // wait for a second

  Serial.print("startTimeLap  ");  Serial.println(startTimeLap);
  Serial.print("TimeLap  ");  Serial.println(timeLap);
  Serial.print("endTimeLap  ");  Serial.println(endTimeLap);
    Serial.print(velocidad);Serial.println(" Km/h ");

  
  }

