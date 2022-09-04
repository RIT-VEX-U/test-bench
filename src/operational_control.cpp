/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Christopher Nokes                                         */
/*    Created:      9/4/2022                                                  */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----
#include "operational_control.h"
#include "vex.h"
#include "robot-config.h"

using namespace vex;
using namespace robot_config;

double currentVelocity = 1.0;

void operationalControl(){

  while(true){

    if(master.ButtonA.pressing()){
      motor1.spin(fwd, currentVelocity, pct);
    } else {
      motor1.stop();
    }

    if(master.ButtonB.pressing()){
      motor2.spin(fwd, currentVelocity, pct);
    } else {
      motor2.stop();
    }

    if(master.ButtonX.pressing()){
      motor3.spin(fwd, currentVelocity, pct);
    } else {
      motor3.stop();
    }

    if(master.ButtonY.pressing()){
      motor4.spin(fwd, currentVelocity, pct);
    } else {
      motor4.stop();
    }

    if(master.ButtonRight.pressing()){
      motor5.spin(fwd, currentVelocity, pct);
    } else {
      motor5.stop();
    }

    if(master.ButtonUp.pressing()){
      motor6.spin(fwd, currentVelocity, pct);
    } else {
      motor6.stop();
    }

    if(master.ButtonLeft.pressing()){
      motor7.spin(fwd, currentVelocity, pct);
    } else {
      motor7.stop();
    }

    if(master.ButtonDown.pressing()){
      motor8.spin(fwd, currentVelocity, pct);
    } else {
      motor8.stop();
    }

    master.ButtonR2.pressed([]() { currentVelocity += 0.25; });

    master.ButtonL2.pressed([]() { currentVelocity -= 0.25; });

  }


}
