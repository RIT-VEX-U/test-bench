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


/*
Zoe Rizzo
test bench program for 2022 vexu
09/05/2022
*/


#include "vex.h"
#include "hardware.h"


using namespace vex;


double motorVelocity = 1.0; //standard motor velocity 

void increase(){
  //increase all motors velocity by 25%
  motorVelocity += 0.25; 
}

void decrease(){
  //decrease all motors velocity by 25%
  motorVelocity -= 0.25;
}

void analog_input(){
  if(motor1.velocity(pct) > 0){
    motor1.stop();
  }
  else{
    motor1.spin(forward, motorVelocity, pct);
  }
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  control.Screen.print("current motor velocity: ", motorVelocity); //print motorvelocity to controller

  control.ButtonR2.pressed(increase); //increase motor velocity by 25%
  control.ButtonL2.pressed(decrease); //decrease motor velocity by 25%

  analog_sensor.changed(analog_input); //start or stop motor 1 

  while(control.ButtonA.pressing()){
    motor1.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonB.pressing()){
    motor2.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonX.pressing()){
    motor3.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonY.pressing()){
    motor4.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonRight.pressing()){
    motor5.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonUp.pressing()){
    motor6.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonLeft.pressing()){
    motor7.spin(forward, motorVelocity, pct);
  }
  while(control.ButtonDown.pressing()){
    motor8.spin(forward, motorVelocity, pct);
  }


}
