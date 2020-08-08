#include <Servo.h>

Servo servo;

void setup() 
{
  servo.attach(10);
}

void loop() 
{
  servo.write(0);
  delay(10);
  servo.write(90);
  delay(10);
  servo.write(180);
  delay(10);
  for(int i=180; i>0; i=i-10)
  {
    servo.write(i);
    delay(100);
  }
 }
