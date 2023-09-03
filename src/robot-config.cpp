#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller Controller = new controller(primary);
motor Motor1 = new motor(PORT1);
motor Motor2 = new motor(PORT2);
motor Motor3 = new motor(PORT3);
motor Motor4 = new motor(PORT4);
motor Motor5 = new motor(PORT5);
motor Motor6 = new motor(PORT6);
motor Motor7 = new motor(PORT7);
motor Motor8 = new motor(PORT8);
/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void) {
  // Nothing to initialize
}