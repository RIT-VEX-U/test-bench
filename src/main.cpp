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

  int velocity = 50;

  while (1) {
    if (Hardware::master.ButtonA.pressing()) {
      motor5.spin(fwd);
    } else {
      motor5.stop();
    }
    // if (Hardware::master.ButtonR2.pressing() && velocity <= 100){
    //   velocity += 25;
    //   motor1.spin(fwd, velocity, pct);
    // }
    // if (Hardware::master.ButtonL2.pressing() && velocity >= 0){
    //   velocity -= 25;
    //   motor1.spin(fwd, velocity, pct);
    // }
  }

  // Hardware::master.ButtonA.pressed([](){motor1.spin(fwd);});
  // Hardware::master.ButtonA.released([](){motor1.stop();});
  
  // Hardware::master.ButtonR2.pressed([](){motor1.setVelocity((motor1.velocity(pct) + 25), pct);});
  // Hardware::master.ButtonL2.pressed([](){motor1.setVelocity((motor1.velocity(pct) - 25), pct);});
}
