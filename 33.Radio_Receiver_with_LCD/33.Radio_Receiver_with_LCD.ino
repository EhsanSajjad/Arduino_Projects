#include <LiquidCrystal.h>
//Include Libraries
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//create an RF24 object
RF24 radio(3, 2);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = "00001";

//LiquidCrystal led(RS,E,D4,D5,D6,D7)
LiquidCrystal lcd(5,6,7,8,9,10);

void setup() {
  while (!Serial);
    Serial.begin(9600);
  
  radio.begin();
  
  //set the address
  radio.openReadingPipe(0, address);
  
  //Set module as receiver
  
  radio.startListening();
  
  lcd.begin(16,2);
  

}

void loop() {
 
  //Read the data if available in buffer
  if (radio.available())
  {
    char text[32] = {0};
    radio.read(&text, sizeof(text));
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(text);
  //lcd.setCursor(0,1);
  //lcd.print("");
  }
  
  
  
  

}
