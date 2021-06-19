#include <Arduino.h>
#include <WiFi.h>
#include <RedWifi.h>
#include <ControladorDeSalidas.h>
#include <ControladorDeEntradas.h>
#include <PubSubClient.h>

RedWifi* wifi = new RedWifi("Fibertel WiFi NUMERO 2","00416040571");
ControladorDeSalidas* controladorDeSalidas = new ControladorDeSalidas();
ControladorDeEntradas* controladorDeEntradas = new ControladorDeEntradas();

//Credenciales para el broker
const char* mqtt_server= "zc482089.en.emqx.cloud";
const int mqtt_port = 12176;
const char* client_id = "Lucas"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";
WiFiClient espClient;
PubSubClient client(espClient);
String topico_publicacion="";
String mensaje_publicacion="";

void callback(char* topic, byte* payload, unsigned int length) {
    //Convierto el mensaje de byte a String
	String incoming = "";
	for (int i = 0; i < length; i++) {
		incoming += (char)payload[i];
	}
	incoming.trim();

    controladorDeSalidas->controlar(topic,incoming);
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
}

void loop(){
	if(!client.connected()){
		reconnect();
	}

	controladorDeEntradas->controlar(&topico_publicacion,&mensaje_publicacion);
	if (client.connected() && !(mensaje_publicacion.equals(""))){
    	client.publish(topico_publicacion.c_str(),mensaje_publicacion.c_str());
	}
	mensaje_publicacion="";

	client.loop();
}