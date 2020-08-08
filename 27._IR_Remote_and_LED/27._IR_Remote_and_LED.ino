#include<IRremote.h>
int rpin=2;
IRrecv irrecv(rpin);
decode_results results;

int state1 = 0;
int state2 = 1;
int state3 = 1;
int state4 = 1;
int state5 = 1;  

int led1=4;
int led2=5;
int led3=6;
int led4=7;
int led5=8;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn ();
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)){
    Serial.println(results.value, HEX);
    irrecv.resume();

  if(results.value==0xFF30CF){
    digitalWrite(led1, state1);
    state1=!state1;
    Serial.println(state1);
  }

  if(results.value==0xFF18E7){
    digitalWrite(led2, state2);
    state2=!state2;
  }

  if(results.value==0xFF7A85){
    digitalWrite(led3, state3);
    state3=!state3;
  }

  if(results.value==0xFF10EF){
    digitalWrite(led4, state4);
    state4=!state4;
  }

  if(results.value==0xFF38C7){
    digitalWrite(led5, state5);
    state5=!state5;
  }


    
  }
  delay(10);
}
