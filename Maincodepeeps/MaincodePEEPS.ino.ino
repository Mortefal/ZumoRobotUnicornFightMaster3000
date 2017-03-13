#include <PLab_ZumoMotors.h>
#include <Pushbutton.h>
#include <QTRSensors.h>
#include <ZumoBuzzer.h>
#include <ZumoMotors.h>
#include <ZumoReflectanceSensorArray.h>

//Variables and Libraries

ZumoReflectanceSensorArray reflectanceSensors;
ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON);

const int trigPin = 0;
const int echoPin = 1;


void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
  reflectanceSensors.init();
  button.waitForButton();

  // Code for the ultrasoundsensor
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
