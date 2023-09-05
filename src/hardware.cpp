#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

const vex::controller::button& BA =Hardware::master.ButtonA;
const vex::controller::button& BB =Hardware::master.ButtonB;
const vex::controller::button& BX =Hardware::master.ButtonX;
const vex::controller::button& BY =Hardware::master.ButtonY;
const vex::controller::button& BR =Hardware::master.ButtonRight;
const vex::controller::button& BU =Hardware::master.ButtonUp;
const vex::controller::button& BL =Hardware::master.ButtonLeft;
const vex::controller::button& BD =Hardware::master.ButtonDown;
// const vex::controller::button& BD =Hardware::master.ButtonR2;
// const vex::controller::button& BD =Hardware::master.ButtonL2;



vex::motor motor1 = motor(PORT1);

vex::motor motor2 = motor(PORT2);

vex::motor motor3 = motor(PORT3);

vex::motor motor4 = motor(PORT4);

vex::motor motor5 = motor(PORT5);

vex::motor motor6 = motor(PORT6);

vex::motor motor7 = motor(PORT7);

vex::motor motor8 = motor(PORT8);
