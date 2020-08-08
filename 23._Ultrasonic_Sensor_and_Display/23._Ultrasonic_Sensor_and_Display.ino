#include <LiquidCrystal.h>
int trig=8;
int echo=9;
int buzzer=12;
float duration;
float distance;

//LiquidCrystal led(RS,E,D4,D5,D6,D7)
LiquidCrystal lcd(2,3,4,5,6,7);
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  lcd.begin(16,2);
  
  
}

void loop() {
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;

  lcd.setCursor(0,0);
  lcd.print("Distance : ");
  lcd.print(distance);
  lcd.print("cm");


  if (distance<20){
    digitalWrite(buzzer, HIGH);
    lcd.setCursor(0,1);
    lcd.print("Obstacles in Range");
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
    digitalWrite(buzzer, HIGH);
    delay(600);
    digitalWrite(buzzer, LOW);
    delay(100);
    
  }
  else{
    digitalWrite(buzzer, LOW);
    
  }
  delay(500);
  lcd.clear();
  
  

}
