int MotorA_IN1=7;
int MotorA_IN2=8;
int MotorB_IN3=2;
int MotorB_IN4=3;
int MotorA_PWM=9;
int MotorB_PWM=10;
int speed=150;

void setup() {
 pinMode(MotorA_IN1, OUTPUT);
 pinMode(MotorA_IN2, OUTPUT);
 pinMode(MotorB_IN3, OUTPUT);
 pinMode(MotorB_IN4, OUTPUT);
 pinMode(MotorA_PWM, OUTPUT);
 pinMode(MotorB_PWM, OUTPUT);
}

void loop() {

  //Forward
  digitalWrite(MotorA_PWM, HIGH);
  digitalWrite(MotorB_PWM, HIGH);


  digitalWrite(MotorA_IN1, HIGH);
  digitalWrite(MotorA_IN2, LOW);
  digitalWrite(MotorB_IN3, HIGH);
  digitalWrite(MotorB_IN4, LOW);
  delay(3000);

  digitalWrite(MotorA_IN1, LOW);
  digitalWrite(MotorA_IN2, LOW);
  digitalWrite(MotorB_IN3, LOW);
  digitalWrite(MotorB_IN4, LOW);
  delay(2000);

  //Backward
  digitalWrite(MotorA_IN1, LOW);
  digitalWrite(MotorA_IN2, HIGH);
  digitalWrite(MotorB_IN3, LOW);
  digitalWrite(MotorB_IN4, HIGH);
  delay(3000);

  digitalWrite(MotorA_IN1, LOW);
  digitalWrite(MotorA_IN2, LOW);
  digitalWrite(MotorB_IN3, LOW);
  digitalWrite(MotorB_IN4, LOW);
  delay(2000);

}
