#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>
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
/*
Mis pines:
    posicion=14;
    baja=25;
    alta=26;
    interior=18;
    reflector=32;
    contacto=27;
    puertas=33;

*/
/*
int hall = 34;
int cont=0;
int startTimeLap=0;
int endTimeLap=0;
int timeLap=0;
float velocidad;
*/

volatile int encender = 0;
volatile int bocina = 0;
volatile int volumen = 0;

//******Variables de velocimetro*****
//_CalculateLastLapTime cllt;
volatile float velocidad = 0.00;
volatile float velocidad_ant = 0.00;
volatile int cont = 0;
volatile int flag_aceleracion = 1;
volatile unsigned timeLap = 490;
volatile unsigned long startTimeLap = 0;
volatile unsigned long endTimeLap = 2000;

uint32_t inputPin = 36;

//**************************************

//***Variables y constantes de comunicacion********
// Wi Fi
const char* ssid = "CAPPONI";
const char* password = "clau1963";
// Broker
const char* mqtt_server= "zc482089.en.emqx.cloud";
const int mqtt_port = 12176;
const char* client_id = "Lucas123"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";
const char *root_topic_subscribe = "esp/contacto";
const char *root_topic_subscribe_2 = "esp/velocidad";
const char *root_topic_subscribe_3 = "esp/bocina";
//const char *root_topic_subscribe = "esp/velocidad";
//const char *root_topic_publish = "esp/test";

WiFiClient espClient;
PubSubClient client(espClient);

/***************
 *  Funcion de interrucion para obtener
 *  la velociad.
 * ***************/
/*
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
*/

void sonidoEncendido(){
  for (int i = 0; i < 52479; ++i){
    dacWrite(26, constrain(startSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoMarchaConstante(){
  for (int i = 0; i < 30207; ++i){
    dacWrite(26, constrain(marchaSamples[i]*100/100+128,0,255));
    delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoAceleraCeroVeinte(){
  for (int i = 0; i < 44543; ++i){
      dacWrite(26, constrain(ceroVeinteSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoAceleraVeinteCuarenta(){
  for(int i = 0; i < 31487; ++i){
      dacWrite(26, constrain(veinteCuarentaSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoAceleraCuarentaSesenta(){
  for (int i = 0; i < 26367; ++i){
      dacWrite(26, constrain(cuarentaSesentaSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoAceleraSesentaOchenta(){
  for (int i = 0; i < 33279; ++i){
      dacWrite(26, constrain(sesentaOchentaSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoAceleraOchentaCien(){
  for (int i = 0; i < 23807; ++i){
      dacWrite(26, constrain(ochentaCienSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoAceleraCienMas(){
  for (int i = 0; i < 37631; ++i){
      dacWrite(26, constrain(cienMasSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

//Velocidades constantes
void sonidoConstanteCeroVeinte(){
  for (int i = 0; i < 22783; ++i){
      dacWrite(26, constrain(ceroVeinteConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoConstanteVeinteCuarenta(){
  for (int i = 0; i < 22271; ++i){
      dacWrite(26, constrain(veinteCuarentaConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoConstanteCuarentaSesenta(){
  for (int i = 0; i < 22271; ++i){
      dacWrite(26, constrain(cuarentaSesentaConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoConstanteSesentaOchenta(){
  for (int i = 0; i < 20223; ++i){
      dacWrite(26, constrain(sesentaOchentaConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }

}

void sonidoConstanteOchentaCien(){
  for (int i = 0; i < 22271; ++i){
      dacWrite(26, constrain(ochentaCienConstSamples[i]*100/100+128,0,255));
      delayMicroseconds(38); // ((1/22050)*1000000) - 7
  }
}

void sonidoConstanteCienMas(){
  for (int i = 0; i < 22527; ++i){
      dacWrite(26, constrain(cienMasConstSamples[i]*100/100+128,0,255));
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
  //pinMode(hall,INPUT); 
  //attachInterrupt(digitalPinToInterrupt(hall), isr_interruption, RISING);
  setup_wifi();
  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
  

  

}

void loop() {
	Serial.println(velocidad);
	delay(10);
  if (!client.connected()) {
    reconnect();
  }

  if (encender == 1){
    sonidoEncendido();
    delay(100);
    cont = 0;
    velocidad = 0;
    velocidad_ant = 0;
    encender = 2;
  }
  else if (encender == 2){
    if (cont==3){
      velocidad = velocidad + 5;
      cont = 0;
    } 
    Serial.println(velocidad);

    if (velocidad == 0){
      sonidoMarchaConstante();
    } else if(velocidad > 0 && velocidad<20){
      Serial.println("Entro de 0 a 20");
      if(flag_aceleracion==1){
      sonidoAceleraCeroVeinte();
      flag_aceleracion = 2;
      }
      sonidoConstanteCeroVeinte();
      
    }else if (velocidad>=20 && velocidad<40){
      Serial.println("Entro de 20 a 40");
      if(flag_aceleracion==2){
      sonidoAceleraVeinteCuarenta();
      flag_aceleracion = 3;
      }      
      sonidoConstanteVeinteCuarenta();

    }else if (velocidad>=40 && velocidad<60){
      Serial.println("Entro de 40 a 60");
      if(flag_aceleracion==3){
      sonidoAceleraCuarentaSesenta();
      flag_aceleracion = 4;
      } 
      sonidoConstanteCuarentaSesenta();

    }else if (velocidad>=60 && velocidad<80){
      Serial.println("Entro de 60 a 80");
      if(flag_aceleracion==4){
      sonidoAceleraSesentaOchenta();      
      flag_aceleracion = 5;
      } 
      sonidoConstanteSesentaOchenta();

    }else if (velocidad>=80 && velocidad<100){
      Serial.println("Entro de 80 a 100");
      if(flag_aceleracion==5){
      sonidoAceleraOchentaCien(); 
      flag_aceleracion = 6;
      } 
      sonidoConstanteOchentaCien();

    }else if (velocidad>=100){
      Serial.println("Entro 100 o mas");
      if(flag_aceleracion==6){
      sonidoAceleraCienMas();
      flag_aceleracion = 7;
      } 
      sonidoConstanteCienMas();
    }
      
  cont = cont + 1;
  } 
  delay(1);
  client.loop();


}