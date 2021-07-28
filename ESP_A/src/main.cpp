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
#include <Cien_a_ochenta.h>
#include <Ochenta_a_sesenta.h>
#include <Sesenta_a_cuarenta.h>
#include <Cuarenta_a_veinte.h>
#include <Veinte_a_cero.h>

//**************************************

//***Variables y constantes de comunicacion********

// Wi Fi
RedWifi* wifi = new RedWifi("CAPPONI","clau1963");

// Broker
const char* mqtt_server= "zc482089.en.emqx.cloud"; //Para broker local ompletar con ip de red
const int mqtt_port = 12176; //Para broker local cambiar puerto a 1883
const char* client_id = "Lucas"; //Completar con cualquier nombre
const char* client_user = "vehiculo123";
const char* client_pass = "emqxd123";
const char *topic_sub_contacto = "esp/contacto";
const char *topic_pub_velocidad = "app/velocidad";
const char *topic_pub_kilometraje = "app/kilometraje";

WiFiClient espClient;
PubSubClient client(espClient);

//Pines
int rele_contacto = 13;
int rele_posicion = 14;
int rele_luz_atras = 27;
int hall = 34;
int marcha_adelante = 32;
int marcha_atras = 33;
int sonido = 26;

//******Variables de velocimetro*****
volatile int encender = 0;
volatile float kilometraje = 0;

volatile float velocidad = 0.00;
volatile int cont = 0;
volatile int cont_vueltas = 0;
volatile int flag_aceleracion = 1;
volatile unsigned timeLap = 0;
volatile unsigned long startTimeLap = 0;
volatile unsigned long endTimeLap = 2000;

volatile int tiempo_ejecucion = 0;
volatile int tiempo_velocidad_ant = 0;

volatile int flag_marcha=0;
volatile int flag_neutro=0;

/***************
 *  Funcion de interrucion para obtener
 *  la velociad.
 * ***************/

void IRAM_ATTR isr_interruption(){
  cont++;
  cont_vueltas++;

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

  if(velocidad<10){
    velocidad=0;
  }
 
}

//******Aceleraciones*****
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



//******Velocidades constantes*****
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



//******Desaceleraciones*****
void sonidoDesaceleraVeinteCero(){
  for (int i = 0; i < 29060; ++i){
      dacWrite(sonido, constrain(fanSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoDesaceleraCuarentaVeinte(){
  for (int i = 0; i < 34943; ++i){
      dacWrite(sonido, constrain(chargerSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoDesaceleraSesentaCuarenta(){
  for (int i = 0; i < 35852; ++i){
      dacWrite(sonido, constrain(wastegateSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoDesaceleraOchentaSesenta(){
  for (int i = 0; i < 41958; ++i){
      dacWrite(sonido, constrain(turboSamples[i]*100/100+128,0,255));
      delayMicroseconds(38);
  }

}

void sonidoDesaceleraCienOchenta(){
  for (int i = 0; i < 36095; ++i){
      dacWrite(sonido, constrain(revDesSamples[i]*100/100+128,0,255));
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

void setup() {
  Serial.begin(115200);
  wifi->conectar();
  pinMode(rele_contacto, OUTPUT);
  digitalWrite(rele_contacto,HIGH);
  pinMode(rele_posicion, OUTPUT);
  digitalWrite(rele_posicion,HIGH);
  pinMode(rele_luz_atras, OUTPUT);
  
  pinMode(marcha_adelante, INPUT_PULLDOWN);
  pinMode(marcha_atras,INPUT_PULLDOWN);
  
  pinMode(hall,INPUT); 
  attachInterrupt(digitalPinToInterrupt(hall), isr_interruption, RISING);

  
  client.setServer(mqtt_server, mqtt_port);
  client.setCallback(callback);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  delay(10);
  tiempo_ejecucion = millis();


  if(digitalRead(marcha_atras)){
    digitalWrite(rele_luz_atras,HIGH);
    if(flag_marcha==0){
      Serial.println("Marcha atras");
      flag_marcha=1;
      flag_neutro=1;
    }

  } else if(digitalRead(marcha_adelante)){
    digitalWrite(rele_luz_atras,LOW);
    if(flag_marcha==1){
      Serial.println("Marcha adelante");
      flag_marcha=0;
      flag_neutro=1;
    }

  } else {
    digitalWrite(rele_luz_atras,LOW);
    if(flag_neutro==1){
      Serial.println("Neutro");
      flag_neutro=0;

    }
  }

  if (encender == 1){
    velocidad=0;
    sonidoEncendido();
    delay(100);
    encender = 2;
  }
  else if (encender == 2){
    if (velocidad == 0){
      if(flag_aceleracion>1){
        sonidoDesaceleraVeinteCero();
      }
      flag_aceleracion = 1;
      sonidoMarchaConstante();
    } else if(velocidad > 0 && velocidad<20){
      if(flag_aceleracion<2){
      sonidoAceleraCeroVeinte();
      }
      if(flag_aceleracion>2){
        sonidoDesaceleraCuarentaVeinte();
      }
      flag_aceleracion = 2;
      sonidoConstanteCeroVeinte();
      
    }else if (velocidad>=20 && velocidad<40){
      if(flag_aceleracion<3){
      sonidoAceleraVeinteCuarenta();
      }  
      if(flag_aceleracion>3){
        sonidoDesaceleraSesentaCuarenta();
      }  
      flag_aceleracion = 3;  
      sonidoConstanteVeinteCuarenta();

    }else if (velocidad>=40 && velocidad<60){
      if(flag_aceleracion<4){
      sonidoAceleraCuarentaSesenta();
      }
      if(flag_aceleracion>4){
        sonidoDesaceleraOchentaSesenta();
      } 
      flag_aceleracion = 4;
      sonidoConstanteCuarentaSesenta();

    }else if (velocidad>=60 && velocidad<80){
      if(flag_aceleracion<5){
      sonidoAceleraSesentaOchenta();      
      }
      if(flag_aceleracion>5){
        sonidoDesaceleraCienOchenta();
      }
      flag_aceleracion = 5;
      sonidoConstanteSesentaOchenta();

    }else if (velocidad>80){
      if(flag_aceleracion<6){
      sonidoAceleraOchentaCien(); 
      }
   
      flag_aceleracion = 6;
      sonidoConstanteOchentaCien();

    }
  } 
  delay(1);

  if(tiempo_ejecucion-tiempo_velocidad_ant > 1000){
		tiempo_velocidad_ant = tiempo_ejecucion;
    client.publish(topic_pub_velocidad,String(velocidad).c_str());
    Serial.println("velocidad:");
    Serial.println(velocidad);
	}

  kilometraje=PI*0.0007874*cont_vueltas;
  if(kilometraje >= 1){
    client.publish(topic_pub_kilometraje,String(velocidad).c_str());
    kilometraje=0;
  }
  
  client.loop();
  delay(10);


}
