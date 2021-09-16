#ifndef _HARDWARE_
#define _HARDWARE_

#include "vex.h"

using namespace vex;

namespace Hardware {
  //Declare robot components
  extern brain v5_brain;
  extern controller master;
  extern motor motor1, motor2, motor3, motor4, motor5, motor6, motor7, motor8;

  extern double motorSpeed;
}

#endif