#include <Arduino.h>
#include <onlow.h>
#include <offlow.h>
#include <onhigh.h>
#include <JeepGrandCherokeeTrackhawkStart.h>
#include <CarHorn.h>
#include <door.h>
#include <TruckReversingBeep.h>
#include <WiFi.h>
#include "PubSubClient.h"
#include <RedWifi.h>
#include "soc/rtc_wdt.h"
#include "FreeRTOS.h"
//#include "CalculateLastLapTime.h"
#define contacto 14
#define sonido 26
//#define reflector 19
#define CONFIG_FREERTOS_UNICORE 0

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

uint32_t inputPin = 34;

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
const char *root_topic_subscribe_3 = "esp/bocina";

volatile int auxiliar = 0;
volatile int auxiliar2 = 0;

WiFiClient espClient;
PubSubClient client(espClient);

TaskHandle_t TareaWiFi;

/*******************************************
 *  Funcion de interrucion para obtener
 *  la velociad.
 * *****************************************/
void IRAM_ATTR isr_interruption(){
  cont++;

  if(cont == 1){
    startTimeLap = millis();
  }else if(cont == 2){
    endTimeLap = millis();
    timeLap = endTimeLap - startTimeLap;
    startTimeLap = endTimeLap;
    cont = 1;
  }
 
  if(timeLap != 0){
  velocidad = ((PI*0.0007874)*(3600000/timeLap));
  }
 
}

void sonidoMarchaAtras(){
  for (int i = 0; i < 22049; ++i){
    dacWrite(sonido, constrain(reversingSamples[i]*5/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoEncendido(){
  for (int i = 0; i < 62447; ++i){
    dacWrite(sonido, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoAceleraVelocidad(){
  for (int i = 0; i < 19583/*62335*/; ++i){
      dacWrite(sonido, constrain(acelera[i]*75/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoDesaceleraVelocidad(){
  for (int i = 0; i < 19583; ++i){
      dacWrite(sonido, constrain(constante[i]*128/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoConstanteVelocidad(){
  for (int i = 0; i < 19583/*37375*/; ++i){
      dacWrite(sonido, constrain(revSamples[i]*50/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

/*void aperturaPuerta(){
  for (int i = 0; i < 42484; ++i){
    dacWrite(sonido, constrain(sound1Samples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}*/

void sonidoBocina(){
  for (int i = 0; i < 13513; ++i){
      dacWrite(sonido, constrain(hornSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void simulacionVelocimetro(){
  int i = 0;
  while(i>2){
    digitalWrite(34,HIGH);
    digitalWrite(34,LOW);
    i = i+1;
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
      digitalWrite(contacto, HIGH);
		}
		else if(incoming.equals("false")){
		  encender = 0;
      digitalWrite(contacto, LOW);
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
  //setCpuFrequencyMhz(40);

  pinMode(34, INPUT);
  attachInterrupt(digitalPinToInterrupt(34), isr_interruption, RISING);
   
  pinMode(contacto,OUTPUT);
  //pinMode(reflector,OUTPUT);
}


void loop() { 
  if (!client.connected()) {
    	reconnect();
  }
  /*if (auxiliar == 0){
    startTimeLap = millis();
    auxiliar = auxiliar + 1; 
  } else if(auxiliar == 10){
    endTimeLap = millis();
    timeLap = endTimeLap - startTimeLap;
    startTimeLap = endTimeLap;
    auxiliar = 1;
    auxiliar2 = auxiliar;
  } else {
    auxiliar = auxiliar + 1; 
  }*/
  
  delay(10);
  

  if (encender == 1){
    sonidoEncendido();
    delay(100);
  
    encender = encender + 1;
  }
  else if (encender == 2){
    ///////////////// Logica de velocimetro ///////////////////
    /*cont++;
    if(cont == 1){
      startTimeLap = millis();
    }else if(cont == 2){
      endTimeLap = millis();
      timeLap = endTimeLap - startTimeLap;
      startTimeLap = endTimeLap;
      cont = 1;
    }
    if(timeLap != 0){
      velocidad = ((PI*0.0007874)*(3600000/timeLap));
    }*/
    Serial.print("startTimeLap  ");  Serial.println(startTimeLap);
    Serial.print("TimeLap  ");  Serial.println(timeLap);
    Serial.print("endTimeLap  ");  Serial.println(endTimeLap);
    Serial.print(velocidad);Serial.println(" Km/h ");
    ///////////////////////////////////////////////////////
    if(velocidad == velocidad_ant && bocina == 0){
      sonidoConstanteVelocidad();
    } else if (velocidad >= velocidad_ant && bocina == 0){
      sonidoAceleraVelocidad();
      velocidad_ant = velocidad;
    } else if (velocidad <= velocidad_ant && bocina == 0){
      sonidoDesaceleraVelocidad();
      velocidad_ant = velocidad;
    }
      
  }
  if(bocina == 1){
    sonidoBocina();
  }

  client.loop();

  
}



