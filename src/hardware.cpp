#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

const vex::controller::button& BA =Hardware::master.ButtonA;
const vex::controller::button& BB =Hardware::master.ButtonB;
const vex::controller::button& BX =Hardware::master.ButtonX;

vex::motor motor1 = motor(PORT1);

vex::motor motor2 = motor(PORT2);

vex::motor motor3 = motor(PORT3);
