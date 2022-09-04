#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

extern vex::controller master;
extern vex::motor motor1(1);
extern vex::motor motor2(2);
extern vex::motor motor3(3);
extern vex::motor motor4(4);
extern vex::motor motor5(5);
extern vex::motor motor6(6);
extern vex::motor motor7(7);
extern vex::motor motor8(8);

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}