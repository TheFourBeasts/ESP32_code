#include <Arduino.h>
#include <PubSubClient.h>
#include <WiFi.h>
#include <RedWifi.h>
#include <Contacto_marcha.h>
#include <Marcha.h>
#include <Cero_a_veinte.h>
#include <Cero_a_veinte_const.h>
#include <Veinte_a_cuarenta.h>
#include <Veinte_a_cuarenta_const.h>
#include <Cuarenta_a_sesenta.h>
#include <Cuarenta_a_sesenta_const.h>
#include <Sesenta_a_ochenta.h>
#include <Sesenta_a_ochenta_const.h>
#include <Ochenta_a_cien.h>
#include <Ochenta_a_cien_const.h>
#include <Cien_o_mas.h>
#include <Cien_o_mas_const.h>

//**************************************

//***Variables y constantes de comunicacion********
// Wi Fi
const char* ssid ="CAPPONI";
const char* password = "clau1963";
// Broker
const char* mqtt_server= "zc482089.en.emqx.cloud";
const int mqtt_port = 12176;
const char* client_id = "Lucas"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";
const char *topic_sub_contacto = "esp/contacto";
const char *topic_pub_velocidad = "app/velocidad";
const char *topic_pub_adelante = "app/marcha/adelante";
const char *topic_pub_neutro = "app/marcha/neutro";
const char *topic_pub_atras= "app/marcha/atras";

//Pines
int rele_contacto = 13;
int rele_posicion = 14;
int rele_luz_atras = 21;
int hall = 34;
int marcha_adelante = 25;
int marcha_atras = 33;
int sonido = 26;

WiFiClient espClient;
PubSubClient client(espClient);

volatile int auxiliar = 0;
volatile int auxiliar2 = 0;
volatile int encender = 0;

//******Variables de velocimetro*****
//_CalculateLastLapTime cllt;
volatile float velocidad = 0.00;
volatile float velocidad_ant = 0.00;
volatile int cont = 0;
volatile int flag_aceleracion = 1;
volatile unsigned timeLap = 490;
volatile unsigned long startTimeLap = 0;
volatile unsigned long endTimeLap = 2000;

volatile int tiempo_ejecucion = 0;
volatile int tiempo_velocidad_ant = 0;




/***************
 *  Funcion de interrucion para obtener
 *  la velociad.
 * ***************/

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


void sonidoEncendido(){
  for (int i = 0; i < 52479; ++i){
    dacWrite(sonido, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); 
  }
}

void sonidoMarchaConstante(){
  for (int i = 0; i < 30207; ++i){
    dacWrite(sonido, constrain(marchaSamples[i]*100/100+128,0,255));
    delayMicroseconds(38);
  }
}

void sonidoAceleraCeroVeinte(){
  for (int i = 0; i < 44543; ++i){
      dacWrite(sonido, constrain(ceroVeinteSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoAceleraVeinteCuarenta(){
  for(int i = 0; i < 31487; ++i){
      dacWrite(sonido, constrain(veinteCuarentaSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }

}

void sonidoAceleraCuarentaSesenta(){
  for (int i = 0; i < 26367; ++i){
      dacWrite(sonido, constrain(cuarentaSesentaSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }

}

void sonidoAceleraSesentaOchenta(){
  for (int i = 0; i < 33279; ++i){
      dacWrite(sonido, constrain(sesentaOchentaSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }

}

void sonidoAceleraOchentaCien(){
  for (int i = 0; i < 23807; ++i){
      dacWrite(sonido, constrain(ochentaCienSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }
}

void sonidoAceleraCienMas(){
  for (int i = 0; i < 37631; ++i){
      dacWrite(sonido, constrain(cienMasSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }
}

//Velocidades constantes
void sonidoConstanteCeroVeinte(){
  for (int i = 0; i < 22783; ++i){
      dacWrite(sonido, constrain(ceroVeinteConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoConstanteVeinteCuarenta(){
  for (int i = 0; i < 22271; ++i){
      dacWrite(sonido, constrain(veinteCuarentaConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoConstanteCuarentaSesenta(){
  for (int i = 0; i < 22271; ++i){
      dacWrite(sonido, constrain(cuarentaSesentaConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }

}

void sonidoConstanteSesentaOchenta(){
  for (int i = 0; i < 20223; ++i){
      dacWrite(sonido, constrain(sesentaOchentaConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }

}

void sonidoConstanteOchentaCien(){
  for (int i = 0; i < 22271; ++i){
      dacWrite(sonido, constrain(ochentaCienConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
  }
}

void sonidoConstanteCienMas(){
  for (int i = 0; i < 22527; ++i){
      dacWrite(sonido, constrain(cienMasConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); 
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

	if (String(topic).equals(topic_sub_contacto)) {    
		if(incoming.equals("true")){
		  encender = 1;
      digitalWrite(rele_contacto,LOW);
      digitalWrite(rele_posicion,LOW);
		}
		else if(incoming.equals("false")){
		  encender = 0;
      digitalWrite(rele_contacto,HIGH);
      digitalWrite(rele_posicion,HIGH);
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
			if(client.subscribe(topic_sub_contacto)){
				Serial.print("Suscripcion ok -> ");
        Serial.println(topic_sub_contacto);
			}else{
				Serial.print("fallo Suscripciión -> ");
        Serial.println(topic_sub_contacto);
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

  pinMode(rele_contacto, OUTPUT);
  digitalWrite(rele_contacto,HIGH);
  pinMode(rele_posicion, OUTPUT);
  digitalWrite(rele_posicion,HIGH);
  pinMode(rele_luz_atras, OUTPUT);
  digitalWrite(rele_luz_atras,HIGH);
  pinMode(hall,INPUT);
  pinMode(marcha_adelante, INPUT_PULLDOWN);
  pinMode(marcha_atras,INPUT_PULLDOWN);
    
  attachInterrupt(digitalPinToInterrupt(hall), isr_interruption, RISING);

  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  delay(10);
  tiempo_ejecucion = millis();


  if(digitalRead(marcha_adelante)){
    if (client.connected()){
    	client.publish(topic_pub_adelante,"true");
      client.publish(topic_pub_atras,"true");
      client.publish(topic_pub_neutro,"false");
	  }
  } else if(digitalRead(marcha_atras)){
    digitalWrite(rele_luz_atras, LOW);
    if (client.connected()){
    	client.publish(topic_pub_atras,"true");
      client.publish(topic_pub_neutro,"false");
      client.publish(topic_pub_adelante,"false");
	  }

  } else {
    if (client.connected()){
    	client.publish(topic_pub_neutro,"false");
      client.publish(topic_pub_adelante,"false");
      client.publish(topic_pub_atras,"false");
	  }
  }

  if (encender == 1){
    sonidoEncendido();
    delay(100);
    encender = 2;
  }
  else if (encender == 2){
    if (velocidad == 0){
      sonidoMarchaConstante();
    } else if(velocidad > 0 && velocidad<20){
      if(flag_aceleracion==1){
      sonidoAceleraCeroVeinte();
      flag_aceleracion = 2;
      }
      sonidoConstanteCeroVeinte();
      
    }else if (velocidad>=20 && velocidad<40){
      if(flag_aceleracion==2){
      sonidoAceleraVeinteCuarenta();
      flag_aceleracion = 3;
      }      
      sonidoConstanteVeinteCuarenta();

    }else if (velocidad>=40 && velocidad<60){
      if(flag_aceleracion==3){
      sonidoAceleraCuarentaSesenta();
      flag_aceleracion = 4;
      } 
      sonidoConstanteCuarentaSesenta();

    }else if (velocidad>=60 && velocidad<80){
      if(flag_aceleracion==4){
      sonidoAceleraSesentaOchenta();      
      flag_aceleracion = 5;
      } 
      sonidoConstanteSesentaOchenta();

    }else if (velocidad>=80 && velocidad<100){
      if(flag_aceleracion==5){
      sonidoAceleraOchentaCien(); 
      flag_aceleracion = 6;
      } 
      sonidoConstanteOchentaCien();

    }else if (velocidad>=100){
      if(flag_aceleracion==6){
      sonidoAceleraCienMas();
      flag_aceleracion = 7;
      } 
      sonidoConstanteCienMas();
    }
  } 
  delay(1);
  if(tiempo_ejecucion-tiempo_velocidad_ant > 1000){
		tiempo_velocidad_ant = tiempo_ejecucion;

		client.publish(topic_pub_velocidad,String(velocidad).c_str());
	}
  client.loop();


}
