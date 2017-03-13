#include <PLab_ZumoMotors.h>
#include <Pushbutton.h>
#include <QTRSensors.h>
#include <ZumoBuzzer.h>
#include <ZumoMotors.h>
#include <ZumoReflectanceSensorArray.h>
#include <Servo.h>

//Variables and Libraries
Servo myservo;
ZumoReflectanceSensorArray reflectanceSensors;
ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);

const int trigPin = 0;
const int echoPin = 1;
int pos = 0;


void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  myservo.attach(6); //Servo pin
  
  reflectanceSensors.init();
  button.waitForButton();
 
}

void loop() {
  // put your main code here, to run repeatedly:
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration, distance;
  
  Serial.println(distance + "cm");
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
}
void servoloop(){
  for (pos = 0; pos <= 180; pos +=1){
    myservo.write(pos);
    delay(15);
  }
  for (pos = 180; pos >= 0; pos -=0){
    myservo.write(pos);
    delay(15);
  }
    
}

