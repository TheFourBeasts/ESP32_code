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
const int sensor_acompanante = 34;

// Variable asociadas a la baliza
volatile int estado_baliza = 0;
volatile int estado = 0;
volatile int tiempo = 0;
volatile int tiempo_baliza_ant = 0;
WiFiClient espClient;
PubSubClient client(espClient);
String topico_publicacion="";
String mensaje_publicacion="";

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
	pinMode(luz_giro_derecho, OUTPUT);
    pinMode(luz_giro_izquierdo, OUTPUT);
	pinMode(interior, OUTPUT);
	pinMode(puertas, INPUT);
}

void loop(){
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


	client.loop();
}