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

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  // Turn on a motor while a button is pressed, and stop it if the button is not pressed.
  while(true)
  {
    //A turns on 1
    if(master.ButtonA.pressing())
      motor1.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor1.stop();

    //B turns on 2
    if(master.ButtonB.pressing())
      motor2.spin(forward, motorSpeed, velocityUnits::pct);
    else 
      motor2.stop();
    
    //X turns on 3
    if(master.ButtonX.pressing())
      motor3.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor3.stop();

    //Y turns on 4
    if(master.ButtonY.pressing())
      motor4.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor4.stop();

    //Right turns on 5
    if(master.ButtonRight.pressing())
      motor5.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor5.stop();

    //Up turns on 6
    if(master.ButtonUp.pressing())
      motor6.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor6.stop();

    //Left turns on 7
    if(master.ButtonLeft.pressing())
      motor7.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor7.stop();

    //Down turns on 8
    if(master.ButtonDown.pressing())
      motor8.spin(forward, motorSpeed, velocityUnits::pct);
    else
      motor8.stop();
    


    master.ButtonR2.pressed(
      []()
      {
        motorSpeed += 25;
      }
    );
  }

}
