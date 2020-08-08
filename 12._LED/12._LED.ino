#include <LiquidCrystal.h>


//LiquidCrystal led(RS,E,D4,D5,D6,D7)
LiquidCrystal lcd(5,6,7,8,9,10);

void setup() {
  lcd.begin(16,2);
  

}

void loop() {

  lcd.setCursor(0,0);
  lcd.print("I love yo");
  lcd.setCursor(3,1);
  lcd.print("");
  
  
  

}
