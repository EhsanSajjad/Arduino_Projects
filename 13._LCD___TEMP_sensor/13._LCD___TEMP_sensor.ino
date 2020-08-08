 #include <LiquidCrystal.h>


//LiquidCrystal led(RS,E,D4,D5,D6,D7)
LiquidCrystal lcd(5,6,7,8,9,10); 
float value; 
float milivolt; 
int temp;

void setup() {
  lcd.begin(16,2);
  

}

void loop() { 
  value = analogRead(A2); 
  milivolt = (value*5000)/1024; 
  temp = milivolt/10; 
 
  lcd.setCursor(0,0); 
  lcd.print("Digital Thermometer"); 
  lcd.setCursor(0,1);
  lcd.print("Temp = ");
  lcd.print(value);  
 
  
}
