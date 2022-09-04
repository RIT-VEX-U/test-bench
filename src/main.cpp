/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Dana5                                            */
/*    Created:      Sun Aug 23 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "hardware.h"


using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while(ButtonA){
    motor1.spin(forward);
  }
  while(ButtonB){
    motor2.spin(forward);
  }
  while(ButtonX){
    motor3.spin(forward);
  }
  while(ButtonY){
    motor4.spin(forward);
  }
  while(ButtonRight){
    motor5.spin(forward);
  }
  while(ButtonUp){
    motor6.spin(forward);
  }
  while(ButtonLeft){
    motor7.spin(forward);
  }
  while(ButtonDown){
    motor8.spin(forward);
  }



}
