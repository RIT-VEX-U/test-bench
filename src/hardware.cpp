#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

motor Hardware::motor1(PORT1);
motor Hardware::motor2(PORT2, true);
motor Hardware::motor3(PORT3);
motor Hardware::motor4(PORT4);
motor Hardware::motor5(PORT5);
motor Hardware::motor6(PORT6);
motor Hardware::motor7(PORT7);
motor Hardware::motor8(PORT8);