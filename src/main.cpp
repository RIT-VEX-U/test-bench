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

  while (1) {
    if (Hardware::master.ButtonA.pressing()) 
      motor1.spin(forward);
    else {
      motor1.stop();
    }
  }

  if (motor1.velocity(pct) >= 0 && motor1.velocity(pct) <= 100) {
    Hardware::master.ButtonR2.pressed([](){motor1.setVelocity((motor1.velocity(pct) + 0.25), pct);});
    Hardware::master.ButtonL2.pressed([](){motor1.setVelocity((motor1.velocity(pct) - 0.25), pct);});
  }

  // Hardware::master.ButtonA.pressing([](){motor1.spin(forward);});
  // Hardware::master.ButtonA.released([](){motor1.stop();});

}
