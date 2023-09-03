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

  Hardware::master.ButtonA.pressed([](){motor1.spin(forward);});
  Hardware::master.ButtonA.released([](){motor1.stop();});
  Hardware::master.ButtonB.pressed([](){motor2.spin(forward);});
  Hardware::master.ButtonB.released([](){motor2.stop();});
  Hardware::master.ButtonX.pressed([](){motor3.spin(forward);});
  Hardware::master.ButtonX.released([](){motor3.stop();});
  Hardware::master.ButtonY.pressed([](){motor4.spin(forward);});
  Hardware::master.ButtonY.released([](){motor4.stop();});
  Hardware::master.ButtonRight.pressed([](){motor5.spin(forward);});
  Hardware::master.ButtonRight.released([](){motor5.stop();});
  Hardware::master.ButtonUp.pressed([](){motor6.spin(forward);});
  Hardware::master.ButtonUp.released([](){motor6.stop();});
  Hardware::master.ButtonLeft.pressed([](){motor7.spin(forward);});
  Hardware::master.ButtonLeft.released([](){motor7.stop();});
  Hardware::master.ButtonDown.pressed([](){motor8.spin(forward);});
  Hardware::master.ButtonDown.released([](){motor8.stop();});

  // Hardware::master.ButtonR2.pressed([](){motor1.setVelocity();});

}
