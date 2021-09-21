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

directionType getDirection(int32_t percent) {
  if (percent >= 0) {
    return directionType::fwd;
  }
  return directionType::rev;
}

void axischange() {
  controller C = Hardware::master;

  int32_t leftVal = -C.Axis3.position();
  int32_t rightVal = C.Axis2.position();

  directionType leftDir = getDirection(leftVal);
  directionType rightDir = getDirection(rightVal);

  leftVal = abs(leftVal);
  rightVal = abs(rightVal); 

  LeftDrive.spin(leftDir, leftVal, percentUnits::pct);
  RightDrive.spin(rightDir, rightVal, percentUnits::pct);
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  controller Controller = Hardware::master;

  Controller.Axis2.changed(&axischange);
  Controller.Axis3.changed(&axischange);
}



