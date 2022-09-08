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
using namespace Hardware;

double mvelocity = 1.0;

void speed_up(){
  if(mvelocity < 1.0){
    mvelocity += 0.25;
  }
}
void slow_down(){
  if(mvelocity > 0){
    mvelocity -= 0.25;
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  main_controller.ButtonR2.pressed(speed_up);
  main_controller.ButtonR2.pressed(slow_down);
  while(true){

    if(main_controller.ButtonA.pressing()){
      motora.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonB.pressing()){
      motorb.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonX.pressing()){
      motorx.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonY.pressing()){
      motory.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonRight.pressing()){
      motorr.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonLeft.pressing()){
      motorl.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonUp.pressing()){
      motoru.spin(forward, 0.5, pct);
    }
    if(main_controller.ButtonDown.pressing()){
      motord.spin(forward, 0.5, pct);
    }
  }
}
