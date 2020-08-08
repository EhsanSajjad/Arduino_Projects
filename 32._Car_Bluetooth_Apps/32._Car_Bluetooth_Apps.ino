int MotorA_IN1=7;
int MotorA_IN2=8;
int MotorB_IN3=2;
int MotorB_IN4=3;
int MotorA_PWM=9;
int MotorB_PWM=10;
int speed=150;
char input;
int buzzer=12;

void setup() {
  Serial.begin(9600);
 pinMode(MotorA_IN1, OUTPUT);
 pinMode(MotorA_IN2, OUTPUT);
 pinMode(MotorB_IN3, OUTPUT);
 pinMode(MotorB_IN4, OUTPUT);
 pinMode(MotorA_PWM, OUTPUT);
 pinMode(MotorB_PWM, OUTPUT);
 pinMode(buzzer, OUTPUT);
}

void loop() {

 

   if(Serial.available()!=0)
  {
    input=Serial.read(); 
  }

  if(input=='f'){
     analogWrite(MotorA_PWM, 255);
     analogWrite(MotorB_PWM, 255);
     
     digitalWrite(MotorA_IN1, HIGH);
     digitalWrite(MotorA_IN2, LOW);
     digitalWrite(MotorB_IN3, HIGH);
     digitalWrite(MotorB_IN4, LOW);
     delay(50);
     if (input=='h'){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
      
     }
     
  }
  
  if(input=='b'){
    analogWrite(MotorA_PWM, 150);
    analogWrite(MotorB_PWM, 150);
  
    digitalWrite(MotorA_IN1, LOW);
    digitalWrite(MotorA_IN2, HIGH);
    digitalWrite(MotorB_IN3, LOW);
    digitalWrite(MotorB_IN4, HIGH);
    delay(30);
    if (input=='h'){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
     }
    }
  
  if(input=='l'){
     analogWrite(MotorA_PWM, 150);
     analogWrite(MotorB_PWM, 80);
     digitalWrite(MotorA_IN1, HIGH);
     digitalWrite(MotorA_IN2, LOW);
     digitalWrite(MotorB_IN3, LOW);
     digitalWrite(MotorB_IN4, LOW);
     delay(30);
     if (input=='h'){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
     }
     
  }


   if(input=='r'){
     analogWrite(MotorA_PWM, 80);
     analogWrite(MotorB_PWM, 150);
     digitalWrite(MotorA_IN1, LOW);
     digitalWrite(MotorA_IN2, LOW);
     digitalWrite(MotorB_IN3, HIGH);
     digitalWrite(MotorB_IN4, LOW);
     delay(30);
     if (input=='h'){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
     }
     
  }

  if (input=='s' || input=='1' || input=='2' || input=='3' || input=='4' || input=='5' ){
     analogWrite(MotorA_PWM, 0);
     analogWrite(MotorB_PWM, 0);
     digitalWrite(MotorA_IN1, LOW);
     digitalWrite(MotorA_IN2, LOW);
     digitalWrite(MotorB_IN3, LOW);
     digitalWrite(MotorB_IN4, LOW);
     if (input=='h'){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
     }
  }
     
     digitalWrite(MotorA_IN1, LOW);
     digitalWrite(MotorA_IN2, LOW);
     digitalWrite(MotorB_IN3, LOW);
     digitalWrite(MotorB_IN4, LOW);
     if (input=='h'){
      digitalWrite(buzzer,HIGH);
      delay(200);
      digitalWrite(buzzer,LOW);
     }
}
