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
double velocity = 100.0;

void setMotor(motor M, double v) {
  M.spin(directionType::fwd, v, percentUnits::pct);
}

void increaseVelocity() {
  if (velocity+25.0 < 100.0) {
      velocity+=25.0;
  } else {
    velocity = 100.0;
  }
}

void decreaseVelocity() {
  if (velocity-25.0 > 0.0) {
      velocity-=25.0;
  } else {
    velocity = 0.0;
  }
}

void motor1go() {
  setMotor(Motor1, velocity);
}

void motor1stop() {
  setMotor(Motor1, 0.0);
}

void motor2go() {
  setMotor(Motor2, velocity);
}

void motor2stop() {
  setMotor(Motor2, 0.0);
}

void motor3go() {
  setMotor(Motor3, velocity);
}

void motor3stop() {
  setMotor(Motor3, 0.0);
}

void motor4go() {
  setMotor(Motor4, velocity);
}

void motor4stop() {
  setMotor(Motor4, 0.0);
}

void motor5go() {
  setMotor(Motor5, velocity);
}

void motor5stop() {
  setMotor(Motor5, 0.0);
}

void motor6go() {
  setMotor(Motor6, velocity);
}

void motor6stop() {
  setMotor(Motor6, 0.0);
}

void motor7go() {
  setMotor(Motor7, velocity);
}

void motor7stop() {
  setMotor(Motor7, 0.0);
}

void motor8go() {
  setMotor(Motor8, velocity);
}

void motor8stop() {
  setMotor(Motor8, 0.0);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  controller Controller = Hardware::master;

  Controller.ButtonA.pressed(&motor1go);
  Controller.ButtonA.released(&motor1stop);
  Controller.ButtonB.pressed(&motor2go);
  Controller.ButtonB.released(&motor2stop);
  Controller.ButtonX.pressed(&motor3go);
  Controller.ButtonX.released(&motor3stop);
  Controller.ButtonY.pressed(&motor4go);
  Controller.ButtonY.released(&motor4stop);
  Controller.ButtonRight.pressed(&motor5go);
  Controller.ButtonRight.released(&motor5stop);
  Controller.ButtonUp.pressed(&motor6go);
  Controller.ButtonUp.released(&motor6stop);
  Controller.ButtonLeft.pressed(&motor7go);
  Controller.ButtonLeft.released(&motor7stop);
  Controller.ButtonDown.pressed(&motor8go);
  Controller.ButtonDown.released(&motor8stop);  
  Controller.ButtonL2.pressed(&decreaseVelocity);
  Controller.ButtonR2.pressed(&increaseVelocity);
}



