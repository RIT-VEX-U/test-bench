#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

motor Motor1 = motor(PORT1, ratio18_1, false);
motor Motor2 = motor(PORT2, ratio18_1, false);
motor Motor3 = motor(PORT6, ratio18_1, false);
motor Motor4 = motor(PORT7, ratio18_1, false);
motor_group LeftDrive = motor_group(Motor1, Motor3);
motor_group RightDrive = motor_group(Motor2, Motor4);


/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}