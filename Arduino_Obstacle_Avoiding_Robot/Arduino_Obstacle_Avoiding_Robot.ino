#include <Servo.h>
#define trigPin  A0  
#define echoPin  A1  
#define MotorA_IN1  3    
#define MotorA_IN2  4  

#define MotorB_IN3  5  
#define MotorB_IN4  6   

#define MotorA_PWM  9   
#define MotorB_PWM  10    

Servo servo;

void setup()
  {
    Serial.begin(9600);
    servo.attach(11);
    servo.write(90);
  	pinMode(MotorA_IN1, OUTPUT);     
  	pinMode(MotorA_IN2, OUTPUT);    
  
  	pinMode(MotorB_IN3, OUTPUT);      
  	pinMode(MotorB_IN4, OUTPUT);    
  	
  	pinMode(MotorA_PWM, OUTPUT);       // Declare "MotorA_PWM" as "Output Pin".
  	pinMode(MotorB_PWM, OUTPUT);       // Declare "MotorB_PWM" as "Output Pin". 
  
    pinMode(trigPin, OUTPUT);          // Declare "trigPin" as "Output Pin". 
    pinMode(echoPin, INPUT);           // Declare "echoPin" as "Input Pin". 

  }



float search(void)
  {
    float duration = 0.00;                // Float type variable declaration 
    float CM = 0.00;
      
      
      digitalWrite(trigPin, LOW);        // Trig_pin output as OV (Logic Low-Level) 
      delayMicroseconds(2);              // Delay for 2 us
    
      //Send 10us High Pulse to Ultra-Sonic Sonar Sensor "trigPin" 
      digitalWrite(trigPin, HIGH);       // Trig_pin output as 5V (Logic High-Level)
      delayMicroseconds(10);             // Delay for 10 us 
    
      digitalWrite(trigPin, LOW);        // Trig_pin output as OV (Logic Low-Level)
  
    
    duration = pulseIn(echoPin, HIGH); // Start counting time, upto again "echoPin" back to Logical "High-Level" and puting the "time" into a variable called "duration" 
   
    CM = (duration / 58.82); //Convert distance into CM. 
    
   return CM;
  }


void RobotForward()
  {
	digitalWrite(MotorA_IN1, HIGH);
	digitalWrite(MotorA_IN2, LOW);
	digitalWrite(MotorB_IN3, HIGH);
	digitalWrite(MotorB_IN4, LOW);
  }

void RobotBackward()
  {
	digitalWrite(MotorA_IN1, LOW);
	digitalWrite(MotorA_IN2, HIGH);
	digitalWrite(MotorB_IN3, LOW);
	digitalWrite(MotorB_IN4, HIGH);
  }

void RobotLeft()
  {
	digitalWrite(MotorA_IN1, LOW);
	digitalWrite(MotorA_IN2, HIGH);
	digitalWrite(MotorB_IN3, HIGH);
	digitalWrite(MotorB_IN4, LOW);	
  }

void RobotRight()
  {
	digitalWrite(MotorA_IN1, HIGH);
	digitalWrite(MotorA_IN2, LOW);
	digitalWrite(MotorB_IN3, LOW);
	digitalWrite(MotorB_IN4, HIGH);	
  }

void RobotStop()
  {
	digitalWrite(MotorA_IN1, LOW);
	digitalWrite(MotorA_IN2, LOW);
	digitalWrite(MotorB_IN3, LOW);
	digitalWrite(MotorB_IN4, LOW);
  }
  
  
  


void loop()
  {
     float distance = 0.00;
     float RobotSpeed = 0.00;
     float RightDistance = 0.00;
     float LeftDistance = 0.00;
 
    
    // Measuring the distance in CM
    distance = search();
    
    
    if((distance <= 30)) // If obstracle found in 40 CM.
      {
        analogWrite(MotorA_PWM, 100); // Update speed in MOTORA Output Terminal
        analogWrite(MotorB_PWM, 100); // Update speed in MOTORB Output Terminal
    
        RobotStop(); //Robot Stop
        delay(400);
        
        servo.write(5);
        delay(1000);
        RightDistance = search();
        delay(1000);
        Serial.print("Right Distance = ");
        Serial.println(RightDistance);
        servo.write(90);
        delay(1000);
        servo.write(1800);
        delay(1000);
        LeftDistance = search();
        delay(1000);
        Serial.print("Left Distance = ");
        Serial.println(LeftDistance);
        servo.write(90);
        delay(1000);

          if(LeftDistance > RightDistance)
            {
              
              RobotLeft();
              delay(1000);            
                            
            }

            else 
            {
              RobotRight();
              delay(1000);              
            }
           
         RobotStop();
         delay(1000);
        
      
      }

  else if(distance>=30 && distance<=70)
  {
    analogWrite(MotorA_PWM, 180); // Update speed in MOTORA Output Terminal
    analogWrite(MotorB_PWM, 180); // Update speed in MOTORB Output Terminal
    RobotForward(); //Robot Move to Forward Direction
    
  }
   else
     {
       analogWrite(MotorA_PWM, 255); // Update speed in MOTORA Output Terminal
    analogWrite(MotorB_PWM, 255); // Update speed in MOTORB Output Terminal
        RobotForward(); //Robot Move to Forward Direction
     }
   
    
  }
  
  



