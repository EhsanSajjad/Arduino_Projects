//Include Libraries
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//create an RF24 object
RF24 radio(3, 2);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = "00001";

void setup()
{
  radio.begin();
  
  //set the address
  radio.openWritingPipe(address);
  
  //Set module as transmitter
  radio.stopListening();
  Serial.begin(115200);
}
void loop()
{
  const char text[] = "1st Signal";
  radio.write(&text, sizeof(text));
  delay(1000);


  const char text2[] = "2nd Signal";
  radio.write(&text2, sizeof(text2));
  delay(1000);

  const char text3[] = "3rd Signal";
  radio.write(&text3, sizeof(text3));
  delay(1000);
  
}
