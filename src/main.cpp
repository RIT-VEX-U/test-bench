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

void driverControl() {
  while (1) {
    if(Controller.ButtonA.pressing()) {
      Motor1.spin(forward);
    } else {
      Motor1.stop();
    }

    if(Controller.ButtonB.pressing()) {
      Motor2.spin(forward);
    } else {
      Motor2.stop();
    }

    if(Controller.ButtonX.pressing()) {
      Motor3.spin(forward);
    } else {
      Motor3.stop();
    }

    if(Controller.ButtonY.pressing()) {
      Motor4.spin(forward);
    } else {
      Motor4.stop();
    }

    if(Controller.ButtonRight.pressing()) {
      Motor5.spin(forward);
    } else {
      Motor5.stop();
    }

    if(Controller.ButtonUp.pressing()) {
      Motor6.spin(forward);
    } else {
      Motor6.stop();
    }

    if(Controller.ButtonLeft.pressing()) {
      Motor7.spin(forward);
    } else {
      Motor7.stop();
    }

    if(Controller.ButtonDown.pressing()) {
      Motor8.spin(forward);
    } else {
      Motor8.stop();
    }

  }
  vex::sleep(1000);
}

int main() {

  driverControl();

  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

}
