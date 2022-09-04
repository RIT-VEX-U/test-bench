#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {}

motor motor1(PORT1);
  motor motor2(2);
  motor motor3(3);
  motor motor4(4);
  motor motor5(5);
  motor motor6(6);
  motor motor7(7);
  motor motor8(8);

  motor_group bigGroup {(motor1), motor2, motor3, motor4, motor5, motor6, motor7, motor8};