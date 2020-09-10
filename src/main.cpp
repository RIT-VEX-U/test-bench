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
// master              controller                    
// motors[0 - 9]       motor         1 - 10   

#include "vex.h"
#include "hardware.h"
#include "screen.h"

using namespace vex;

void toggleMotor(motor& Motor, bool& reverse) {
  // Motor direction (reverse if reverse is true, forward if false)
  directionType dir = reverse ? directionType::rev : directionType::fwd;

  // TODO: add output to controller for motor toggle

  if (Motor.power() != 0) {
    Motor.stop();
  } else {
    // TODO: allow adjustment of speed (maybe thru joysticks?)
    Motor.setVelocity(50, percentUnits::pct);
    Motor.spin(dir);
  }

  // Wait 100ms to prevent toggling motors on and off repeatedly
  task::sleep(100);
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
  // Display instructions on brain
  displayBrain();

  while (true) {
    // Check if user is requesting reverse spin
    bool reverse = Hardware::master.ButtonL1.pressing();

    // Loop through all defined motor buttons, toggling
    // their corresponding motor if button is being pressed
    for (int i = 0; i < 10; i++) {
      if (Hardware::motorButtons[i].pressing()) {
        toggleMotor(Hardware::motors[i], reverse);
      }
    }
    
    // Stop all motors
    if (Hardware::master.ButtonL2.pressing()) {
      killMotors();
    }

    // Poll every 20ms
    task::sleep(20);
  }
}
