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

// double const VELOCITY = 1.0;
vex directionType dir = fwd;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while (true) {
    if (buttonA.pressing()) {
      motor1.spin(dir);
    } else if (buttonB.pressing()) {
      motor2.spin(dir);
    } else if (buttonX.pressing()) {
      motor3.spin(dir);
    }
  }

}