int n;
void setup() {
  for (n=0; n<=4; n++)
  {
    pinMode(n, OUTPUT);
  }

}

void loop() {
  for (n=0;n<=4; n++)
  {
    digitalWrite(n, HIGH);
    delay(50);
    digitalWrite(n, LOW);
    delay(18);
  }
 

}
