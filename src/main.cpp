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

  while (1)
  {
    if (Hardware::master.ButtonA.pressing())
      motor1.spin(forward);
    if (Hardware::master.ButtonB.pressing())
      motor2.spin(forward);
    if (Hardware::master.ButtonX.pressing())
      motor3.spin(forward);
    if (Hardware::master.ButtonY.pressing())
      motor4.spin(forward);
    if (Hardware::master.ButtonRight.pressing())
      motor5.spin(forward);
    if (Hardware::master.ButtonLeft.pressing())
      motor6.spin(forward);
    if (Hardware::master.ButtonUp.pressing())
      motor7.spin(forward);
    if (Hardware::master.ButtonDown.pressing())
      motor8.spin(forward);
  }

}
