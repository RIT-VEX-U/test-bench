/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Dana5                                            */
/*    Created:      Sun Aug 23 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "hardware.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  vex::motor motor_1 = motor(PORT1, vex::gearSetting::ratio18_1),
    motor_2 = motor(PORT2, vex::gearSetting::ratio18_1),
    motor_3 = motor(PORT3, vex::gearSetting::ratio18_1),
    motor_4 = motor(PORT4, vex::gearSetting::ratio18_1),
    motor_5 = motor(PORT5, vex::gearSetting::ratio18_1),
    motor_6 = motor(PORT6, vex::gearSetting::ratio18_1),
    motor_7 = motor(PORT7, vex::gearSetting::ratio18_1),
    motor_8 = motor(PORT8, vex::gearSetting::ratio18_1);
  
  vex::controller main_controller = controller();

  vex::motor *motors[8] = {
    &motor_1,
    &motor_2,
    &motor_3,
    &motor_4,
    &motor_5,
    &motor_6,
    &motor_7,
    &motor_8,
  };

  vex::controller::button buttons[8] = {
    main_controller.ButtonA,
    main_controller.ButtonB,
    main_controller.ButtonX,
    main_controller.ButtonY,
    main_controller.ButtonRight,
    main_controller.ButtonLeft,
    main_controller.ButtonUp,
    main_controller.ButtonDown,
  };

  int motor_percents[8] = {0, 0, 0, 0, 0, 0, 0, 0};
  int L2_pressed = 0;
  int R2_pressed = 0;

  while (1) {
    if (main_controller.ButtonL2.pressing() && L2_pressed == 0) {
      L2_pressed = 1;
      for (int i = 0; i < 8; i++) {
        if (buttons[i].pressing()) {
          motor_percents[i] -= 25;
          if (motor_percents[i] < 0) {
            motor_percents[i] = 0;
          }
          motors[i]->spin(fwd, motor_percents[i], pct);
        }
      }
    } 
    if (main_controller.ButtonR2.pressing() && R2_pressed == 0) {
      R2_pressed = 1;
      for (int i = 0; i < 8; i++) {
        if (buttons[i].pressing()) {
          motor_percents[i] += 25;
          if (motor_percents[i] > 100) {
            motor_percents[i] = 100;
          }
          motors[i]->spin(fwd, motor_percents[i], pct);
        }
      }
    }

    if (!main_controller.ButtonL2.pressing() && L2_pressed == 1) {
      L2_pressed = 0;
    }
    if (!main_controller.ButtonR2.pressing() && R2_pressed == 1) {
      R2_pressed = 0;
    }
  }
}
