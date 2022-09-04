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
void vexcodeInit(void) {
  // Nothing to initialize
  m0 = motor(0);
  m1 = motor(1);
  m2 = motor(2);
  m3 = motor(3);
  m4 = motor(4);
  m5 = motor(5);
  m6 = motor(6);
  m7 = motor(7);
}