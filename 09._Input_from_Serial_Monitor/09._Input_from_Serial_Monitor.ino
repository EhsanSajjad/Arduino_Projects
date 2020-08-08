int ledred=12;
int ledyellow=8;
char input;
void setup() {
  Serial.begin(9600);
  pinMode(ledred, OUTPUT);
  pinMode(ledyellow, OUTPUT);
}

void loop() {

  if(Serial.available()!=0)
    {
    input=Serial.read();
    }
  if (input=='1')
  {
    digitalWrite(ledred, HIGH);
  }
  if (input=='2')
  {
    digitalWrite(ledred, LOW);
  }
  if (input=='3')
  {
    digitalWrite(ledyellow, HIGH);
  }
  if (input=='4')
  {
    digitalWrite(ledyellow, LOW);
  }


}
