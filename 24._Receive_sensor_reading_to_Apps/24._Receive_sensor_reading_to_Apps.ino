#include "dht.h"
#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
int trig=A1;
int echo=A2;
float distance;
float duration;


void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
  

}

void loop() {

  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;
  Serial.print("Distance    = ");
  Serial.print(distance);
  Serial.println(" cm");

  DHT.read11(dht_apin);
    
  Serial.print("Humidity    = ");
    Serial.print(DHT.humidity);
    Serial.println(" %");
  Serial.print("Temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println(" C");

 delay(2000);
  

}
