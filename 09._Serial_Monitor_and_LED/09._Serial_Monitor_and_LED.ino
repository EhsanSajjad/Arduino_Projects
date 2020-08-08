int sensor;
int ledy=12;
int ledg=8;
int ledr=7;
int bug=4;
void setup() {
  Serial.begin(9600);
  pinMode(ledy, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledr, OUTPUT);
  pinMode(bug, OUTPUT);
  

}

void loop() {

 sensor=analogRead(A0);
 Serial.println(sensor);
 delay(500);

 if ( sensor<=10)
 {
  digitalWrite(ledy, LOW);
  digitalWrite(ledg, LOW);
  digitalWrite(ledr, LOW);
  digitalWrite(bug, LOW);
 }

 else if (sensor>10 && sensor<=200)
 {
  digitalWrite(ledy, HIGH);
  digitalWrite(ledg, LOW);
  digitalWrite(ledr, LOW);
  digitalWrite(bug, LOW);
 }

 else if (sensor>200 && sensor<=500)
 {
  digitalWrite(ledy, HIGH);
  digitalWrite(ledg, HIGH);
  digitalWrite(ledr, LOW);
  digitalWrite(bug, LOW);
 }

 else if(sensor>500 && sensor<=800)
 {
  digitalWrite(ledy, HIGH);
  digitalWrite(ledg, HIGH);
  digitalWrite(ledr, HIGH);
  digitalWrite(bug, LOW);
 }

 else if (sensor>800)
 {
  digitalWrite(ledy, HIGH);
  digitalWrite(ledg, HIGH);
  digitalWrite(ledr, HIGH);
  digitalWrite(bug, HIGH);
 }
 

}
