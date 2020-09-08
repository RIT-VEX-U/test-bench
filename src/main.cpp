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

// power multiplier
double mult = 100.0;

void inc_mult() {
  if(mult < 100) {
    mult += 25.0;
  }
}

void dec_mult() {
  if(mult > 25) {
    mult -= 25.0;
  }
}



int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  void (*inc_mult_ptr)();
  inc_mult_ptr = &inc_mult;

  void (*dec_mult_ptr)();
  dec_mult_ptr = &dec_mult;

  Hardware::master.ButtonR2.pressed(inc_mult_ptr);
  Hardware::master.ButtonL2.pressed(dec_mult_ptr);

  while(true) {
    if(Hardware::master.ButtonA.pressing()) {
      Hardware::motor1.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor1.spin(directionType::fwd, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonB.pressing()) {
      Hardware::motor2.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor2.spin(directionType::rev, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonX.pressing()) {
      Hardware::motor3.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor3.spin(directionType::fwd, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonY.pressing()) {
      Hardware::motor4.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor4.spin(directionType::fwd, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonRight.pressing()) {
      Hardware::motor5.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor5.spin(directionType::fwd, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonUp.pressing()) {
      Hardware::motor6.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor6.spin(directionType::fwd, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonLeft.pressing()) {
      Hardware::motor7.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor7.spin(directionType::fwd, 0, velocityUnits::pct);
    }

    if(Hardware::master.ButtonDown.pressing()) {
      Hardware::motor8.spin(directionType::fwd, mult, velocityUnits::pct);
    }
    else {
      Hardware::motor8.spin(directionType::fwd, 0, velocityUnits::pct);
    }
  }
}
