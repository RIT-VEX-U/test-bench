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

int currentVel = 0;
const int MAX_VEL = 100;
const int MIN_VEL = 0;

void increaseVelocity() {
  currentVel += 25;
  if (currentVel > MAX_VEL) {
    currentVel = MAX_VEL;
  }

  m0.setVelocity(currentVel, percent);
  m1.setVelocity(currentVel, percent);
  m2.setVelocity(currentVel, percent);
  m3.setVelocity(currentVel, percent);
  m4.setVelocity(currentVel, percent);
  m5.setVelocity(currentVel, percent);
  m6.setVelocity(currentVel, percent);
  m7.setVelocity(currentVel, percent);
}

void decreaseVelocity() {
  currentVel -= 25;
  if (currentVel < MIN_VEL) {
    currentVel = MIN_VEL;
  }

  m0.setVelocity(currentVel, percent);
  m1.setVelocity(currentVel, percent);
  m2.setVelocity(currentVel, percent);
  m3.setVelocity(currentVel, percent);
  m4.setVelocity(currentVel, percent);
  m5.setVelocity(currentVel, percent);
  m6.setVelocity(currentVel, percent);
  m7.setVelocity(currentVel, percent);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true) {
    while(master.ButtonA.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonB.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonX.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonY.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonRight.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonUp.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonLeft.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }
    while(master.ButtonDown.pressing()) {
      m0.spin(directionType::fwd, 25, percent);
    }

    master.ButtonR2.pressed(increaseVelocity);
    master.ButtonL2.pressed(decreaseVelocity);
  }
}

