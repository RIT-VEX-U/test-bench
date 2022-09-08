#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller main_controller;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
  A Button : Motor 1
  B Button : Motor 2
  X Button : Motor 3
  Y Button : Motor 4
  Right Button : Motor 5
  Up Button : Motor 6
  Left Button : Motor 7
  Down Button : Motor 8
 */

motor motora(PORT1), motorb(PORT2), motorx(PORT3), motory(PORT4), motorr(PORT5), motorl(PORT6), motoru(PORT7), motord(PORT8);
void vexcodeInit(void) {
  // motor motora;
  // mo
}