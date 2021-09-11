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

competition Competition = competition();

motor motor1 = motor(PORT1);
motor motor2 = motor(PORT2);
motor motor3 = motor(PORT3);
motor motor4 = motor(PORT4);
motor motor5 = motor(PORT5);
motor motor6 = motor(PORT6);
motor motor7 = motor(PORT7);
motor motor8 = motor(PORT8);

int velocity_pct = 50;

controller controller1 = controller();

void decrease_velocity()
{
  if(velocity_pct >= 25)
  {
    velocity_pct -= 25;
  }
}

void increase_velocity()
{
  if(velocity_pct <= 75)
  {
    velocity_pct += 25;
  }
}

void check_buttons()
{
  if(controller1.ButtonA.pressing())
  {
    motor1.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor1.stop();
  }

  if(controller1.ButtonB.pressing())
  {
    motor2.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor2.stop();
  }

  if(controller1.ButtonX.pressing())
  {
    motor3.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor3.stop();
  }

  if(controller1.ButtonY.pressing())
  {
    motor4.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor4.stop();
  }

  if(controller1.ButtonRight.pressing())
  {
    motor5.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor5.stop();
  }

  if(controller1.ButtonUp.pressing())
  {
    motor6.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor6.stop();
  }

  if(controller1.ButtonLeft.pressing())
  {
    motor7.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor7.stop();
  }

  if(controller1.ButtonDown.pressing())
  {
    motor8.spin(directionType::fwd, velocity_pct, velocityUnits::pct);
  }
  else
  {
    motor8.stop();
  }
}

int main() {

  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  controller1.ButtonL2.pressed(decrease_velocity);
  controller1.ButtonR2.pressed(increase_velocity);

  while(true)
  {
    check_buttons();
  }
}
