int led=10;
int i; 

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
 for(i=0; i<=255; i++)
 {
  analogWrite(led, i);
  delay (60);
 }

  for(i=255; i>0; i--)
 {
  analogWrite(led, i);
  delay (60);
 }
 

}
