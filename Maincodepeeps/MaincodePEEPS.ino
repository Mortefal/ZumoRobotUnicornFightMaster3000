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


void setup() {
  
  reflectanceSensors.init();
  button.waitForButton();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
