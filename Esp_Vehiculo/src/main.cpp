#include <Arduino.h>
#include <WiFi.h>
#include <RedWifi.h>
#include <ControladorGeneral.h>
#include <PubSubClient.h>
#include <Bocina.h>

RedWifi* wifi = new RedWifi("nombre_red","contraseña");
ControladorGeneral* controladorGeneral = new ControladorGeneral();

//Credenciales para el broker
const char* mqtt_server= "zc482089.en.emqx.cloud";
const int mqtt_port = 12176;
const char* client_id = "Pepe"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";

// Pines relacionados a las luces
// Pines salida
const int luz_giro_derecho = 32;
const int luz_giro_izquierdo = 33;
const int interior = 18;
const int bocina=26;
const int alarma = 25;
// Pines entrada
const int puertas = 21;
const int cinturon_conductor = 35;
const int cinturon_acompanante = 19;
const int sensor_peso_acompanante = 39;//12;//Definimos el pin analógico ADC1(chanel6) para la lectura del voltaje
const int sensor_peso_conductor = 36;
const int analogInput = 34; 			// Definimos el pin analógico ADC1(chanel6) para la lectura del voltaje

// Variable asociadas a la baliza
volatile int estado_baliza = 0;
volatile int estado = 0;
volatile int tiempo = 0;
volatile int tiempo_baliza_ant = 0;
volatile int tiempo_bateria_ant = 0;
volatile int estado_giro_derecho_ant = 0;
volatile int estado_giro_izquierdo_ant = 0;

// Variables relacionadas a los cinturones
volatile int tiempo_alerta_ant = 0;
volatile int estado_cinturon_conductor = 0;
volatile int estado_cinturon_acomp = 0;

WiFiClient espClient;
PubSubClient client(espClient);
String topico_publicacion="";
String mensaje_publicacion="";

/******************************************************
 * Variables Simulacion Sensor de Peso Conductor      *
 ******************************************************/
uint16_t entrada_Peso_Conductor;// =9.0;
int value_Peso_Conductor = 0;        //Definimos la variable
int cont_For_Peso_Conductor;
uint16_t rafaga_Muestras_Peso_Conductor = 0;
int estado_Peso_Conductor = 0;

/******************************************************
 * Variables Simulacion Sensor de Peso acompanante      *
 ******************************************************/
uint16_t entrada_Peso_acompanante;// =9.0;
int value_Peso_acompanante = 0;        //Definimos la variable
int cont_For_Peso_acompanante;
uint16_t rafaga_Muestras_Peso_acompanante = 0;
int estado_Peso_acompanante = 0;

/******************************************************
 * Variables Medidor Carga de Bateria                 *
 ******************************************************/
uint16_t entrada;// =9.0;
int value = 0;        //Definimos la variable
int contFor;
uint16_t rafagaMuestras = 0;
int estado_bat = 0;

unsigned long initTime = 0;
unsigned long finalTime = 0;
unsigned long timeFunction = 0;
/***************/

/********************************************
 * Calcula el Peso del Conductor
 ********************************************/ 
   void calcula_Peso_conductor(){
      
      value_Peso_Conductor = rafaga_Muestras_Peso_Conductor / 20; 

      if(value_Peso_Conductor<30){
         estado_Peso_Conductor = 0;
      }
      if(value_Peso_Conductor>4000){
         estado_Peso_Conductor = 200;
      }
      if((value_Peso_Conductor > 30)&&(value_Peso_Conductor < 4000)){ 
         estado_Peso_Conductor = ((value_Peso_Conductor*50)/1000);
      }
      rafaga_Muestras_Peso_Conductor=0;
   }

/********************************************
 * Calcula el Peso del acompanante
 ********************************************/ 
   void calcula_Peso_acompanante(){
      
      value_Peso_acompanante = rafaga_Muestras_Peso_acompanante / 20; 

      if(value_Peso_acompanante<30){
         estado_Peso_acompanante = 0;
      }
      if(value_Peso_acompanante>4000){
         estado_Peso_acompanante = 200;
      }
      if((value_Peso_acompanante > 30)&&(value_Peso_acompanante < 4000)){ 
         estado_Peso_acompanante = ((value_Peso_acompanante*50)/1000);
      }
      rafaga_Muestras_Peso_acompanante=0;
   }

/*********************************************************
 * Funcion Interupcion toma muestras del peso conductor  *
 *********************************************************/

void IRAM_ATTR isr_Interrupcion_Peso_Conductor()
{   //rafaga_Muestras_Peso_Conductor=0;
   for (cont_For_Peso_Conductor = 0; cont_For_Peso_Conductor < 20; cont_For_Peso_Conductor++)
   {
      entrada_Peso_Conductor=analogRead(sensor_peso_conductor);
      rafaga_Muestras_Peso_Conductor = rafaga_Muestras_Peso_Conductor + entrada_Peso_Conductor;
   } 

   for (cont_For_Peso_acompanante = 0; cont_For_Peso_acompanante < 20; cont_For_Peso_acompanante++)
   {
      entrada_Peso_acompanante=analogRead(sensor_peso_acompanante);
      rafaga_Muestras_Peso_acompanante = rafaga_Muestras_Peso_acompanante + entrada_Peso_acompanante;
   } 
   //value_Peso_Conductor = rafaga_Muestras_Peso_Conductor / 20; 
   calcula_Peso_conductor();  
   calcula_Peso_acompanante();  
}


/********************************************
 * Calcula porcentaje de carga de la Bateria
 ********************************************/ 
   void calcula_Porcentaje_de_carga(){
      if(value<30){
         estado_bat = 0;
      }
      if(value>3230){
         estado_bat = 100;
      }
      if((value > 30)&&(value < 3230)){ 
         estado_bat = (value-30)/32;   
      }
   }


/***************************************************
 * Funcion que calcula la carga de la Bateria          *
 ***************************************************/

void IRAM_ATTR isr_calculaCargaBateria()
{   rafagaMuestras=0;
   for (contFor = 0; contFor < 20; contFor++)
   {
      entrada=analogRead(analogInput);
      rafagaMuestras = rafagaMuestras + entrada;
   }
   value = rafagaMuestras / 20;
   
   calcula_Porcentaje_de_carga();  
}

// Sonido correspondiente a la bocina
void sonarBocina(){
	for (int i = 0; i < 12311/*13513*/; ++i){
      dacWrite(bocina, constrain(hornSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void encender_apagar(String mensaje, int pin){
    if(mensaje.equals("true")){
        digitalWrite(pin,HIGH);
    } else {
        digitalWrite(pin,LOW);
    }

}

// Valida si el conductor o el acompanante tienen el cinturon puesto
void controlarCinturon(int peso_conductor, int peso_acompanante){

	// Si hay conductor y acompañante con tiempo de la ultima publicacion mayor a 1 min
	if(peso_conductor > 50 && peso_acompanante > 50){
		if(estado_cinturon_conductor == 1 && estado_cinturon_acomp == 1){
			client.publish("app/alerta","Conductor y Acompañante no tienen colocado el cinturon");
		} else if(estado_cinturon_conductor == 0 && estado_cinturon_acomp == 1){
			client.publish("app/alerta","Acompañante no tiene colocado el cinturon");
		}else if (estado_cinturon_conductor == 1 && estado_cinturon_acomp == 0){ 
			client.publish("app/alerta","Conductor no tiene colocado el cinturon");
		}
	// Si hay conductor y no hay acompañante con tiempo de la ultima publicacion mayor a 1 min
	} else if(peso_conductor > 50 && peso_acompanante <= 50 && estado_cinturon_conductor == 1){
		client.publish("app/alerta","Conductor no tiene colocado el cinturon");
	}
}

// Se apagan sus luces asociadas
void apagarLuces(){
	digitalWrite(luz_giro_derecho,LOW);
	digitalWrite(luz_giro_izquierdo,LOW);
	estado = 0;
}

void encenderBaliza(int estado_baliza,int tiempo, int estado_giro_der,int estado_giro_izq){

	// Valida si la baliza esta encendida y si el utimo cambio de estado fue hace mas de 500 ms
	if(estado_baliza == 1 && (tiempo-tiempo_baliza_ant) >= 500){
		tiempo_baliza_ant = tiempo;
		// Valida si la baliza estaba encendida o apagada para hacer el pestañeo de la luz
		if (estado == 0){
			digitalWrite(luz_giro_derecho,HIGH);
			digitalWrite(luz_giro_izquierdo,HIGH);
			estado = 1;
		} else {
			digitalWrite(luz_giro_derecho,LOW);
			digitalWrite(luz_giro_izquierdo,LOW);
			estado = 0;
		}
		estado_giro_izquierdo_ant = 0;
		estado_giro_derecho_ant = 0;
	// Si la baliza y los guiños estan apagados, se apagan sus luces asociadas
	} else if(((estado_baliza == 0 ) && estado_giro_izq == 0 && estado_giro_der == 0)){
		if(estado_giro_izquierdo_ant != estado_giro_izq || estado_giro_derecho_ant != estado_giro_der){
			client.publish("app/giroDerecho","0");
			client.publish("app/giroIzquierdo","0");
			estado_giro_izquierdo_ant = 0;
			estado_giro_derecho_ant = 0;
		}
		apagarLuces();
	} else if (estado_giro_der == 1 && estado_giro_izq == 0 && estado_baliza == 0 && estado_giro_derecho_ant != 1){
		encender_apagar("true", luz_giro_derecho);
		encender_apagar("false", luz_giro_izquierdo);
		client.publish("app/giroIzquierdo","0");
		client.publish("app/giroDerecho","1");
		estado_giro_derecho_ant = estado_giro_der;
		estado_giro_izquierdo_ant = 0;
	} else if (estado_giro_der == 0 && estado_giro_izq == 1 && estado_baliza == 0 && estado_giro_izquierdo_ant != 1){
		encender_apagar("true", luz_giro_izquierdo);
		encender_apagar("false", luz_giro_derecho);
		client.publish("app/giroDerecho","0");
		client.publish("app/giroIzquierdo","1");
		digitalWrite(luz_giro_derecho,LOW);
		estado_giro_derecho_ant = 0;
		estado_giro_izquierdo_ant = estado_giro_izq;
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
	pinMode(cinturon_conductor, INPUT_PULLDOWN);
	pinMode(cinturon_acompanante, INPUT_PULLDOWN);
	pinMode(sensor_peso_acompanante, INPUT);
	pinMode(sensor_peso_conductor, INPUT);
	pinMode(alarma, OUTPUT);
}

void loop(){
	// Verificacion de estado de la bateria
	isr_calculaCargaBateria();

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
	
	// Controlo el estado de las puertas
	if (controladorGeneral->getEstadoAlarma() == 0){
		digitalWrite(alarma,HIGH);
	} else{
		digitalWrite(alarma,LOW);
	}

	// Validacion de apertura de puertas
	volatile int estado_puertas = digitalRead(puertas);
	if(estado_puertas == 0){
		digitalWrite(interior,LOW);
	} else{
		digitalWrite(interior,HIGH);
	}

	// En caso de que el auto no este encendido no se controla si el conductor tiene o no el cinturon puesto
	if(controladorGeneral->getEstadoVehiculo() == 1){
		// Verificacion del asiento del conductor
		isr_Interrupcion_Peso_Conductor();

		// Verificacion del cinturon del conductor y del acompanante
		estado_cinturon_conductor = digitalRead(cinturon_conductor);
		estado_cinturon_acomp = digitalRead(cinturon_acompanante);

		if(tiempo - tiempo_alerta_ant > 30000){
			
			controlarCinturon(estado_Peso_Conductor,estado_Peso_acompanante);

			// Publico mensaje en caso de que arranque el auto y las puertas esten abiertas.
			if(estado_puertas == 1){
				client.publish("app/alerta","Puertas abiertas");
			}
			tiempo_alerta_ant = tiempo;
		}
		
	}else {
		estado_Peso_Conductor = 0;
		estado_Peso_acompanante = 0;
	}

	// Valido si se presiono la bocina
	if(controladorGeneral->getBocina() == 1){
		sonarBocina();
	} 

	// Envio el estado de la bateria cada 3 seg
	if(tiempo-tiempo_bateria_ant > 3000){

		tiempo_bateria_ant = tiempo;

		Serial.print("Carga de Bateria:   ");
		Serial.print(estado_bat);
		Serial.println(" %");
		Serial.print("Peso Conductor:     ");
		Serial.print(estado_Peso_Conductor);
		Serial.println(" Kg");
		Serial.print("Peso Acompanante:     ");
		Serial.print(estado_Peso_acompanante);
		Serial.println(" Kg");
		Serial.println(" ");

		// Armado del mensaje (pasaje de int a char*)
		char mensaje_publicacion[3];
		dtostrf(estado_bat, 3, 0, mensaje_publicacion);
		client.publish("esp/bateria",mensaje_publicacion);
	}


	client.loop();
}