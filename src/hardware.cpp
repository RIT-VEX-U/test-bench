#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

vex::motor motor1 = vex::motor(PORT1);
vex::motor motor2 = vex::motor(PORT2);
vex::motor motor3 = vex::motor(PORT3);
vex::motor motor4 = vex::motor(PORT4);
vex::motor motor5 = vex::motor(PORT5);
vex::motor motor6 = vex::motor(PORT6);
vex::motor motor7 = vex::motor(PORT7);
vex::motor motor8 = vex::motor(PORT8);