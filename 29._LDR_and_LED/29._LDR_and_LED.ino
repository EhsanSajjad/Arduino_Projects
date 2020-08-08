#define LDRpin A0
int led1=4, led2=5, buz=6;// pin where we connected the LDR and the resistor

int LDRValue = 0;     // result of reading the analog pin

void setup() {
  Serial.begin(9600); // sets serial port for communication
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(buz,OUTPUT);
  digitalWrite(led1, LOW); 
    
  digitalWrite(led2, LOW);
  digitalWrite(buz, LOW);
}

void loop() {
  LDRValue = analogRead(LDRpin); // read the value from the LDR
  Serial.println(LDRValue);      // print the value to the serial port
  delay(100);                    // wait a little

   if (LDRValue>0 && LDRValue<199){
      digitalWrite(led1, LOW); 
      digitalWrite(led2, LOW);
      digitalWrite(buz, LOW);
   }


  if(LDRValue>200 && LDRValue<300){
     digitalWrite(led1, HIGH); 
     digitalWrite(led2, LOW);
     digitalWrite(buz, LOW);
  }
  
  if (LDRValue>301 && LDRValue<699){
     digitalWrite(led1, LOW); 
     digitalWrite(led2, HIGH);
     digitalWrite(buz, LOW);
  }
  if(LDRValue>700){
    digitalWrite(led1, LOW); 
    digitalWrite(led2, LOW);
    digitalWrite(buz, HIGH);
  }
}
