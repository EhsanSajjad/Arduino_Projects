#include <Servo.h>

Servo servo;

void setup() 
{
  servo.attach(10);
  //servo.attach(10);
  //servo.attach(10);
  //servo.attach(10);
}

void loop() 
{
  //servo.write(0);
 // servo.write(30);
  for(int i=140; i>40; i=i-10)
  {
    delay(10);
    servo.write(i);
    delay(30);
    //servo.write(0);
    for(int j=0; j<i; j=j-10)
    {
      delay(10);
    servo.write(i);
    delay(30);
    }
  }
  delay(300);
  
  for(int i=40; i<140; i=i+10)
  {
    delay(10);
    servo.write(i);
    delay(30);
  }
  delay(300);
 }
