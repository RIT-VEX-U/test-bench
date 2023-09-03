#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

button& vex::controller::ButtonA = buttonA;
button& vex::controller::ButtonB = buttonB;
button& vex::controller::ButtonX = buttonX;

vex::motor motor1 = motor(PORT1);

vex::motor motor2 = motor(PORT2);

vex::motor motor3 = motor(PORT3);
