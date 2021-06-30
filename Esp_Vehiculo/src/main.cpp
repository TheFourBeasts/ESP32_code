#include <Arduino.h>
#include <WiFi.h>
#include <RedWifi.h>
#include <ControladorDeSalidas.h>
#include <ControladorDeEntradas.h>
#include <ControladorGeneral.h>
#include <PubSubClient.h>
#include <CarHorn.h>

RedWifi* wifi = new RedWifi("Fibertel WiFi NUMERO 2","00416040571");
ControladorGeneral* controladorGeneral = new ControladorGeneral();
ControladorDeEntradas* controladorDeEntradas = new ControladorDeEntradas();

//Credenciales para el broker
const char* mqtt_server= "zc482089.en.emqx.cloud";
const int mqtt_port = 12176;
const char* client_id = "Lucas"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";

// Pines relacionados a las luces
// Pines salida
const int luz_giro_derecho = 32;
const int luz_giro_izquierdo = 33;
const int interior = 18;
const int bocina=26;
// Pines entrada
const int puertas = 21;
const int cinturon_conductor = 25;
const int cinturon_acompanante = 26;
const int sensor_acompanante = 35;

// Variable asociadas a la baliza
volatile int estado_baliza = 0;
volatile int estado = 0;
volatile int tiempo = 0;
volatile int tiempo_baliza_ant = 0;
volatile int tiempo_bateria_ant = 0;
volatile int estado_bat = 100;
WiFiClient espClient;
PubSubClient client(espClient);
String topico_publicacion="";
String mensaje_publicacion="";




/******************
 * Variables Medidor Carga de Bateria                 *
 ******************/
uint16_t entrada;// =9.0;
int analogInput = 34; //Definimos el pin analógico ADC1(chanel6) para la lectura del voltaje
float vout = 0.0;     //Definimos la variable Vout, tension quesale del divisor resistivo
float vin = 0.0;      //Definimos la variable Vin, tension que sale del divisor resistivo
float R1 = 36000.0;   //  R1 (100K) Valor de la resistencia R1 del divisor de tensión
float R2 = 10000.0;   //  R2 (10K) Valor de la resistencia R2 del divisor de tención
//int value = 0;        //Definimos la variable
int value = 3240;        //Definimos la variable para hacer simulacion
int contFor;
uint16_t rafagaMuestras = 0;
//int estado_bat = 0;

unsigned long initTime = 0;
unsigned long finalTime = 0;
unsigned long timeFunction = 0;
/***************/

/****************
 * Calcula pordentaje de carga de la Bateria
 ****************/ 
   void calcula_Porcentaje_de_carga(){
      if(value<2830){
         estado_bat = 0;
      }
      if(value>3230){
         estado_bat = 100;
      }
      if((value > 2830)&&(value < 3230)){ 
         estado_bat = (value-2830)/4;   
      }
   }


/*******************
 * Funcion que calcula la carga de la Bateria          *
 *******************/

void IRAM_ATTR isr_calculaCargaBateria()
{   rafagaMuestras=0;
   for (contFor = 0; contFor < 20; contFor++)
   {
      entrada=analogRead(analogInput);
      rafagaMuestras = rafagaMuestras + entrada;
   }
   value = rafagaMuestras / 20;
   vout = entrada*(3.3/4096);   // Cálculo para obtener el Vout
   vin = ((vout/R2 )*(R1 + R2)); // Cálculo para obtener Vin del divisor de tensión
   calcula_Porcentaje_de_carga();  
}


void sonarBocina(){
	for (int i = 0; i < 13513; ++i){
      dacWrite(bocina, constrain(hornSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void encenderBaliza(int estado_baliza,int tiempo, int estado_giro_der,int estado_giro_izq){
	if(estado_baliza == 1 && (tiempo-tiempo_baliza_ant) >= 500){
		tiempo_baliza_ant = tiempo;
		if (estado == 0){
			digitalWrite(luz_giro_derecho,HIGH);
			digitalWrite(luz_giro_izquierdo,HIGH);
			estado = 1;
		} else {
			digitalWrite(luz_giro_derecho,LOW);
			digitalWrite(luz_giro_izquierdo,LOW);
			estado = 0;
		}
	} else if(estado_baliza == 0 && estado_giro_der == 0 && estado_giro_izq == 0){
		digitalWrite(luz_giro_derecho,LOW);
		digitalWrite(luz_giro_izquierdo,LOW);
		estado = 0;
	}

}

void encender_apagar(String mensaje, int pin){
    if(mensaje.equals("true")){
        digitalWrite(pin,HIGH);
    } else {
        digitalWrite(pin,LOW);
    }

}

void callback(char* topic, byte* payload, unsigned int length) {
    //Convierto el mensaje de byte a String
	String incoming = "";
	for (int i = 0; i < length; i++) {
		incoming += (char)payload[i];
	}
	incoming.trim();

    controladorGeneral->controlar_salida(topic,incoming);
}

void reconnect() {
	while (!client.connected()) {
		Serial.print("Intentando conexión Mqtt...");
		// Intentamos conectar
		if (client.connect(client_id, client_user,client_pass) ){
			Serial.println("Conectado!");
			// Nos suscribimos a todos los topicos del esp
			if(client.subscribe("esp/#")){
				Serial.println("Suscripcion ok");
			}else{
				Serial.println("fallo Suscripciión");
			}
		} else {
			Serial.print("falló :( con error -> ");
			Serial.print(client.state());
			Serial.println(" Intentamos de nuevo en 5 segundos");
			delay(5000);
		}
	}
}

void setup() {
    Serial.begin(115200);
    wifi->conectar();
    client.setServer(mqtt_server, mqtt_port);
    client.setCallback(callback);
	
	pinMode(analogInput, INPUT);
	pinMode(luz_giro_derecho, OUTPUT);
    pinMode(luz_giro_izquierdo, OUTPUT);
	pinMode(interior, OUTPUT);
	pinMode(puertas, INPUT);
	pinMode(bocina, OUTPUT);
}

void loop(){

	calcula_Porcentaje_de_carga();

	if(!client.connected()){
		reconnect();
	}
	tiempo = millis();

	controladorGeneral->controlar_entrada(&topico_publicacion,&mensaje_publicacion);
	if (client.connected() && !(mensaje_publicacion.equals(""))){
    	client.publish(topico_publicacion.c_str(),mensaje_publicacion.c_str());
	}
	mensaje_publicacion="";
	int estado_bal = controladorGeneral->getBaliza();
	int estado_giro_der = controladorGeneral->getGiroDerecho();
	int estado_giro_izq = controladorGeneral->getGiroIzquierdo();
	encenderBaliza(estado_bal,tiempo,estado_giro_der,estado_giro_izq);
	if (estado_giro_der == 1 && estado_bal == 0){
		encender_apagar("true", luz_giro_derecho);
	} else if (estado_giro_izq == 1 && estado_bal == 0){
		encender_apagar("true", luz_giro_izquierdo);
	}

	// Validacion de apertura de puertas
	if(digitalRead(puertas) == 0){
		digitalWrite(interior,LOW);
	} else{
		digitalWrite(interior,HIGH);
	}

	if(controladorGeneral->getBocina() == 1){
		sonarBocina();
	} 

	// Envio el estado de la bateria cada 1 seg y medio
	if(tiempo-tiempo_bateria_ant > 1500){
		if (value > 2820){
			value = value-2;
		} else {
			value = 3230;
		}

		tiempo_bateria_ant = tiempo;

		// Armado del mensaje (pasaje de int a char*)
		char mensaje_publicacion[3];
		dtostrf(estado_bat, 3, 0, mensaje_publicacion);
		Serial.println(mensaje_publicacion);
		client.publish("esp/bateria",mensaje_publicacion);
	}


	client.loop();
}