#include <Servo.h>

Servo servo;
int trig=A0;
int echo=A1;
float distance;
float duration;


void setup() {
  servo.attach(10);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);
  
}

void loop() {
  
  for(int i=30; i<=150; i=i+10)
  {
    servo.write(i);
    delay(5);

    digitalWrite(trig, LOW);
    delay(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
  
    duration=pulseIn(echo, HIGH);
    distance=(duration*.034)/2;
    Serial.print("The Distance is = ");
    Serial.print(distance);
    Serial.println("cm");
    delay(50);
  
  }

  for(int i=150; i>=30; i=i-10)
  {
    servo.write(i);
    delay(5);
    
    digitalWrite(trig, LOW);
    delay(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    duration=pulseIn(echo, HIGH);
    distance=(duration*.034)/2;
    Serial.print("The Distance is = ");
    Serial.print(distance);
    Serial.println("cm");
    delay(50);

  }


}
