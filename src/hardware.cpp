#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

//Instantiate 8 motors from ports 1 through 8. All except motor 4 and motor 5 have 18:1 cartridges. 4 and 5 have 36:1 cartridges.
motor Hardware::motor1(PORT1, gearSetting::ratio18_1), Hardware::motor2(PORT2, gearSetting::ratio18_1), Hardware::motor3(PORT3, gearSetting::ratio18_1), 
Hardware::motor4(PORT4, gearSetting::ratio36_1), Hardware::motor5(PORT5, gearSetting::ratio36_1), Hardware::motor6(PORT6, gearSetting::ratio18_1),
Hardware::motor7(PORT7, gearSetting::ratio18_1), Hardware::motor8(PORT8, gearSetting::ratio18_1);
