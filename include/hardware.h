#ifndef _HARDWARE_
#define _HARDWARE_

#include "vex.h"

using namespace vex;

namespace Hardware {
  extern brain v5_brain;
  extern controller master;

}
extern const vex::controller::button& BA;
extern const vex::controller::button& BB;
extern const vex::controller::button& BX;
extern vex::motor motor1;
extern vex::motor motor2;
extern vex::motor motor3;
#endif