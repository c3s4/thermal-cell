// we start with a basic sketch just to drive a relay
// it is needed to try upload on nodemcu board and test if it works
// as intended

#include <ESP8266WiFi.h>
#include "wificonfig.h"

#define RELAY_PIN 15
#define DHT_PIN 16

#define DHTPIN 2

void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println("Setting up...");
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();

  Serial.print("Connected, IP address: ");
  Serial.println(WiFi.localIP());
  // setup wireless settings (we'll use ESP touch protocol ASAP)

  // setup output pin to be digital to drive the realy
  pinMode(RELAY_PIN, OUTPUT);

  // setup DHT sensors

  
}


void loop() {

  digitalWrite(15, HIGH);
  Serial.print("1");
  delay(1000);
  Serial.print("0");
  digitalWrite(15, LOW);
  delay(1000);
  // when connected just switch the relay
  // then wait for 1 sec
  // then switch back
}