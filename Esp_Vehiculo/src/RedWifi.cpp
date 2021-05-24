#include "RedWifi.h"
#include <Arduino.h>
#include <WiFi.h>

RedWifi::RedWifi(const char* ssid, const char* password){
    _ssid = ssid;
    _password = password;
}

void RedWifi::conectar(){
	delay(10);
	// Nos conectamos a nuestra red Wifi
	Serial.println();
	Serial.print("Conectando a ssid: ");
	Serial.println(_ssid);

	WiFi.begin(_ssid, _password);

	while (WiFi.status() != WL_CONNECTED) {
		delay(500);
		Serial.print(".");
	}

	Serial.println("");
	Serial.println("Conectado a red WiFi!");
}
