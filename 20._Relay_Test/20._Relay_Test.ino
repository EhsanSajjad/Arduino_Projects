int out=8;
void setup() {
  pinMode(out, OUTPUT);

}

void loop() {

  digitalWrite(out,HIGH);
  delay(3000);
  digitalWrite(out,LOW);
  delay(3000);

}
