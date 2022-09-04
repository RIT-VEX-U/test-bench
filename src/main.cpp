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

void increase(){
  motor1.setVelocity(motor1.velocity(percent) + 25, percent);
  motor2.setVelocity(motor2.velocity(percent) + 25, percent);
  motor3.setVelocity(motor3.velocity(percent) + 25, percent);
  motor4.setVelocity(motor4.velocity(percent) + 25, percent);
  motor5.setVelocity(motor5.velocity(percent) + 25, percent);
  motor6.setVelocity(motor6.velocity(percent) + 25, percent);
  motor7.setVelocity(motor7.velocity(percent) + 25, percent);
  motor8.setVelocity(motor8.velocity(percent) + 25, percent);
}

void decrease(){
  motor1.setVelocity(motor1.velocity(percent) - 25, percent);
  motor2.setVelocity(motor2.velocity(percent) - 25, percent);
  motor3.setVelocity(motor3.velocity(percent) - 25, percent);
  motor4.setVelocity(motor4.velocity(percent) - 25, percent);
  motor5.setVelocity(motor5.velocity(percent) - 25, percent);
  motor6.setVelocity(motor6.velocity(percent) - 25, percent);
  motor7.setVelocity(motor7.velocity(percent) - 25, percent);
  motor8.setVelocity(motor8.velocity(percent) - 25, percent);
}



int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  control.ButtonR2.pressed(increase);
  control.ButtonL2.pressed(decrease);

  while(control.ButtonA.pressing()){
    motor1.spin(forward);
  }
  while(control.ButtonB.pressing()){
    motor2.spin(forward);
  }
  while(control.ButtonX.pressing()){
    motor3.spin(forward);
  }
  while(control.ButtonY.pressing()){
    motor4.spin(forward);
  }
  while(control.ButtonRight.pressing()){
    motor5.spin(forward);
  }
  while(control.ButtonUp.pressing()){
    motor6.spin(forward);
  }
  while(control.ButtonLeft.pressing()){
    motor7.spin(forward);
  }
  while(control.ButtonDown.pressing()){
    motor8.spin(forward);
  }


}
