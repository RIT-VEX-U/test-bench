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
    Motor.setVelocity(100, percentUnits::pct);
    Motor.spin(dir);
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
  // Display instructions on brain
  displayBrain();

  while (true) {
    // Check if user is requesting reverse spin
    bool reverse = Hardware::master.ButtonL1.pressing();

    // Loop through all defined motor buttons, toggling
    // their corresponding motor if button is being pressed
    for (int i = 0; i < 10; i++) {
      if (Hardware::motorButtons[i].pressing()) {
        // Ensure button was depressed prior to this pressing
        if (!Hardware::motorButtonsDebounce[i]) {
          toggleMotor(Hardware::motors[i], reverse);
          // Set debounce flag to prevent rapid toggling
          Hardware::motorButtonsDebounce[i] = true;
        }
      } else {
        // Reset debounce flag
        Hardware::motorButtonsDebounce[i] = false;
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
