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
#include "hardware.cpp"

using namespace vex;

double speed=4.0;
int PCT=75;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  while(true){
    master.ButtonR2.pressed(speedUp);
    master.ButtonL2.pressed(speedDown);

    if(master.ButtonA.pressing()){
      m1.spin(forward,speed,pct);
    }else{
      m1.stop();
    }

    if(master.ButtonB.pressing()){
      m2.spin(forward,speed,pct);
    }else{
      m2.stop();
    }

    if(master.ButtonX.pressing()){
      m3.spin(forward,speed,pct);
    }else{
      m3.stop();
    }

    if(master.ButtonY.pressing()){
      m4.spin(forward,speed,pct);
    }else{
      m4.stop();
    }

    if(master.ButtonRight.pressing()){
      m5.spin(forward,speed,pct);
    }else{
      m5.stop();
    }

    if(master.ButtonUp.pressing()){
      m6.spin(forward,speed,pct);
    }else{
      m6.stop();
    }

    if(master.ButtonLeft.pressing()){
      m7.spin(forward,speed,pct);
    }else{
      m7.stop();
    }

    if(master.ButtonDown.pressing()){
      m8.spin(forward,speed,pct);
    }else{
      m8.stop();
    }

  }
}
void speedUp(){
  if(speed<=80)
    speed*=1.25;
  }

void speedDown(){
  if(speed>=.25)
    speed*=.75;
  }