#include <Arduino.h>
#include <onlow.h>
#include <offlow.h>
#include <onhigh.h>
#include <JeepGrandCherokeeTrackhawkStart.h>
#include <CarHorn.h>
#include <door.h>
#include <TruckReversingBeep.h>
#include "soc/rtc_wdt.h"
#include <WiFi.h>
#include "PubSubClient.h"
#include "FreeRTOS.h"
#include <RedWifi.h>
#include <ControladorDeSalidas.h>
#include <ControladorDeEntradas.h>

//******Variables de Sonido*****
volatile int encender = 0;
volatile int bocina = 0;

//******Variables de velocimetro*****
//_CalculateLastLapTime cllt;
volatile float velocidad = 10.00;
volatile float velocidad_ant = 10.00;
volatile int cont = 0;
volatile unsigned timeLap = 490;
volatile unsigned long startTimeLap = 0;
volatile unsigned long endTimeLap = 2000;

uint32_t inputPin = 36;

//**************************************

//***Variables y constantes de comunicacion********
// Wi Fi
const char* ssid ="Fibertel WiFi NUMERO 2";
const char* password = "00416040571";
// Broker
const char* mqtt_server= "zc482089.en.emqx.cloud";
const int mqtt_port = 12176;
const char* client_id = "Luciano"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";
const char *root_topic_subscribe = "esp/contacto";
const char *root_topic_subscribe_2 = "esp/velocidad";
const char *root_topic_subscribe_3 = "esp/bocina";
//const char *root_topic_subscribe = "esp/velocidad";
//const char *root_topic_publish = "esp/test";

WiFiClient espClient;
PubSubClient client(espClient);
ControladorDeSalidas* controladorDeSalidas = new ControladorDeSalidas();
ControladorDeEntradas* controladorDeEntradas = new ControladorDeEntradas();

TaskHandle_t TareaWiFi;
//*****************************************************

/****************************************************
 *  Funcion de interrucion para obtener la velociad.
 * **************************************************/

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
  for (int i = 0; i < 62447; ++i){
    dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoAceleraVelocidad(){
  for (int i = 0; i < 19583/*62335*/; ++i){
      dacWrite(26, constrain(acelera[i]*75/100+128,0,255));
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
      dacWrite(26, constrain(revSamples[i]*50/100+128,0,255));
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

void callback(char* topic, byte* payload, unsigned int length) {
	String incoming = "";
	Serial.print("Mensaje recibido desde -> ");
	Serial.print(topic);
	Serial.println("");
	for (int i = 0; i < length; i++) {
		incoming += (char)payload[i];
	}
	incoming.trim();
	Serial.println("Mensaje -> " + incoming);

	if (String(topic).equals("esp/contacto")) {    
		if(incoming.equals("true")){
		  encender = 1;
		}
		else if(incoming.equals("false")){
		  encender = 0;
		}
	}
  if (String(topic).equals("esp/velocidad")) {    
		velocidad = incoming.toFloat();
	}
  if (String(topic).equals("esp/bocina")) {    
		if(incoming.equals("true")){
		  bocina = 1;
		}
		else if(incoming.equals("false")){
		  bocina = 0;
		}
	}
}

void reconnect() {
	while (!client.connected()) {
		Serial.print("Intentando conexión Mqtt...");
		// Intentamos conectar
		if (client.connect(client_id, client_user,client_pass) ){
			Serial.println("Conectado!");
			// Nos suscribimos
			if(client.subscribe(root_topic_subscribe)){
				Serial.print("Suscripcion ok -> ");
        Serial.println(root_topic_subscribe);
			}else{
				Serial.print("fallo Suscripciión -> ");
        Serial.println(root_topic_subscribe);
			}
      if(client.subscribe(root_topic_subscribe_2)){
				Serial.print("Suscripcion ok -> ");
        Serial.println(root_topic_subscribe_2);
			}else{
				Serial.print("fallo Suscripciión -> ");
        Serial.println(root_topic_subscribe_2);
			}
      if(client.subscribe(root_topic_subscribe_3)){
				Serial.print("Suscripcion ok -> ");
        Serial.println(root_topic_subscribe_3);
			}else{
				Serial.print("fallo Suscripciión -> ");
        Serial.println(root_topic_subscribe_3);
			}
		} else {
			Serial.print("falló :( con error -> ");
			Serial.print(client.state());
			Serial.println(" Intentamos de nuevo en 5 segundos");
			delay(5000);
		}
	}
}

void setup_wifi(){
	delay(10);
	// Nos conectamos a nuestra red Wifi
	Serial.println();
	Serial.print("Conectando a ssid: ");
	Serial.println(ssid);

	WiFi.begin(ssid, password);

	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print(".");
	}

	Serial.println("");
	Serial.println("Conectado a red WiFi!");
	Serial.println("Dirección IP: ");
	Serial.println(WiFi.localIP());
}
void setup() {
  Serial.begin(115200);
  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
  //encender = 1;
}


void loop() { 
  if (!client.connected()) {
    	reconnect();
  }

  if (encender == 1){
    //marchaAtras();
    //delay(1000);
    //aperturaPuerta();
    //delay(1000);
    sonidoEncendido();
    delay(100);
    //sonidoBocina();
    //delay(100);
   // marchaAtras();
  
    encender = encender + 1;
  }
  else if (encender == 2){
    if(velocidad == velocidad_ant && bocina == 0){
      sonidoConstanteVelocidad();
    } else if (velocidad >= velocidad_ant && bocina == 0){
      sonidoAceleraVelocidad();
      sonidoAceleraVelocidad();
      velocidad_ant = velocidad;
    } else if (velocidad <= velocidad_ant && bocina == 0){
      sonidoDesaceleraVelocidad();
      sonidoDesaceleraVelocidad();
      velocidad_ant = velocidad;
    } 
      
  }
  if(bocina == 1){
    sonidoBocina();
  }

  client.loop();

  
}



