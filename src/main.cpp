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

//Buttons A and B work :)


#include "vex.h"
#include "hardware.h"

using namespace vex;
using namespace Hardware;

void changeVelocityUp(void){
  
}

void changeVelocityDown(void){
  bigGroup.setVelocity(bigGroup.velocity(percentUnits::pct)-25, percentUnits::pct);
}
 

int main() {
  vexcodeInit();



  master.ButtonR2.pressed(changeVelocityUp);
  master.ButtonL2.pressed(changeVelocityDown);


  while(1){
    

    if(master.ButtonA.pressing()){
      motor1.spin(forward);
    }
    if(!(master.ButtonA.pressing())){
      motor1.stop();
    }

    else if(master.ButtonB.pressing()){
      motor2.spin(forward);
    }

    else if(!(master.ButtonB.pressing())){
      motor2.stop();
    }

    else if(master.ButtonX.pressing()){
      motor3.spin(forward);
    }

    else if(master.ButtonY.pressing()){
      motor4.spin(forward);
    }

    else if(master.ButtonRight.pressing()){
      motor5.spin(forward);
    }

    else if(master.ButtonUp.pressing()){
      motor6.spin(forward);
    }

    else if(master.ButtonLeft.pressing()){
      motor7.spin(forward);
    }

    else if(master.ButtonDown.pressing()){
      motor8.spin(forward);
    }
  }
}
