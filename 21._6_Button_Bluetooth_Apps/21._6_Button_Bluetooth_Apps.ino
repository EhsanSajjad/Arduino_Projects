int button1=4;
int button2=5;
int button3=6;
int button4=7;
int button5=8;
int button6=9;
char input;

void setup() {
  Serial.begin(9600);
  pinMode(button1,OUTPUT);
  pinMode(button2,OUTPUT);
  pinMode(button3,OUTPUT);
  pinMode(button4,OUTPUT);
  pinMode(button5,OUTPUT);
  pinMode(button6,OUTPUT);
}

void loop() {
  if(Serial.available()!=0)
  {
    input=Serial.read(); 
  }
  if(input=='1') { digitalWrite(button1, HIGH); }
  if(input=='a') { digitalWrite(button1, LOW); }
  if(input=='2') { digitalWrite(button2, HIGH); }
  if(input=='b') { digitalWrite(button2, LOW); }
  if(input=='3') { digitalWrite(button3, HIGH); }
  if(input=='c') { digitalWrite(button3, LOW); }
  if(input=='4') { digitalWrite(button4, HIGH); }
  if(input=='d') { digitalWrite(button4, LOW); }
  if(input=='5') { digitalWrite(button5, HIGH); }
  if(input=='e') { digitalWrite(button5, LOW); }
  if(input=='6') { digitalWrite(button6, HIGH); }
  if(input=='f') { digitalWrite(button6, LOW); }
  

  

}
