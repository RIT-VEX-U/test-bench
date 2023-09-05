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

// double const VELOCITY = 1.0;
vex::directionType dir = fwd;
vex::timeUnits tUnits = sec;
vex::percentUnits pUnits = pct;


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  while (true) {
    while (BA.pressing()) {
      motor1.spin(dir, 1.0, pUnits);
    } 
    while (BB.pressing()) {
      motor2.spin(dir, 1.0, pUnits);
    } 
    while (BX.pressing()) {
      motor3.spin(dir, 1.0, pUnits);
    } 
    while (BY.pressing()) {
      motor4.spin(dir, 1.0, pUnits);
    }
    while (BR.pressing()) {
      motor5.spin(dir, 1.0, pUnits);
    } 
    while (BU.pressing()) {
      motor6.spin(dir, 1.0, pUnits);
    } 
    while (BL.pressing()) {
      motor7.spin(dir, 1.0, pUnits);
    } 
    while (BD.pressing()) {
      motor8.spin(dir, 1.0, pUnits);
    }
  }

}