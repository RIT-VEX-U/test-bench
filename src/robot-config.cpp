#include "vex.h"
#include "robot-config.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */

// vex::controller master;
vex::motor robot_config::motor1(PORT1);
vex::motor robot_config::motor2(PORT2);
vex::motor robot_config::motor3(PORT3);
vex::motor robot_config::motor4(PORT4);
vex::motor robot_config::motor5(PORT5);
vex::motor robot_config::motor6(PORT6);
vex::motor robot_config::motor7(PORT7);
vex::motor robot_config::motor8(PORT8);

controller robot_config::master(controllerType::primary);

void vexcodeInit(void) {
  // Nothing to initialize
}