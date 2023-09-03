#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

motor FrntLft = motor(PORT1);
motor FrntRgt = motor(PORT2);
motor BackLft = motor(PORT3);
motor BackRgt = motor(PORT4);

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}