/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Dana5                                            */
/*    Created:      Sun Aug 23 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller          master                    
// Motor[0 - 9]        motor         1 - 10   

#include "vex.h"
#include "hardware.h"

using namespace vex;

void toggleMotor(motor& Motor, bool& reverse) {
  // Motor direction (reverse if reverse is true, forward if false)
  directionType dir = reverse ? directionType::rev : directionType::fwd;

  // TODO: add output to controller for motor toggle

  if (Motor.power() != 0) {
    Motor.stop();
    task::sleep(100);
  } else {
    // TODO: allow adjustment of speed (maybe thru joysticks?)
    Motor.setVelocity(50, velocityUnits::rpm);
    Motor.spin(dir);
    task::sleep(100);
  }
}

void killMotors() {
  // Stop all motors (note 10 is hardcoded here, change this if more motors added)
  for (int i = 0; i < 10; i++) {
    Hardware::motors[i].stop();
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while (true) {
    // Check if user is requesting reverse spin
    bool reverse = Hardware::master.ButtonL1.pressing();

    // Individual motor controls
    // TODO: do something bigger brained than 1000 if statements
    if (Hardware::master.ButtonA.pressing()) { // 1
      toggleMotor(Hardware::motors[0], reverse);
    } else if (Hardware::master.ButtonX.pressing()) { // 2
      toggleMotor(Hardware::motors[1], reverse);
    } else if (Hardware::master.ButtonY.pressing()) { // 3
      toggleMotor(Hardware::motors[2], reverse);
    } else if (Hardware::master.ButtonB.pressing()) { // 4
      toggleMotor(Hardware::motors[3], reverse);
    } else if (Hardware::master.ButtonRight.pressing()) { // 5
      toggleMotor(Hardware::motors[4], reverse);
    } else if (Hardware::master.ButtonUp.pressing()) { // 6
      toggleMotor(Hardware::motors[5], reverse);
    } else if (Hardware::master.ButtonLeft.pressing()) { // 7
      toggleMotor(Hardware::motors[6], reverse);
    } else if (Hardware::master.ButtonDown.pressing()) { // 8
      toggleMotor(Hardware::motors[7], reverse);
    } else if (Hardware::master.ButtonR1.pressing()) { // 9
      toggleMotor(Hardware::motors[8], reverse);
    } else if (Hardware::master.ButtonR2.pressing()) { // 10
      toggleMotor(Hardware::motors[9], reverse);
    }

    // Stop all motors
    if (Hardware::master.ButtonL2.pressing()) {
      killMotors();
    }

    // Poll every 20ms
    task::sleep(20);
  }
}
