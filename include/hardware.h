#ifndef _HARDWARE_
#define _HARDWARE_

#include "vex.h"

using namespace vex;

namespace Hardware {
  extern brain v5_brain;
  extern controller master;

  // Motors along with their corresponding buttons
  extern motor motors[];
  extern controller::button motorButtons[];
  extern bool motorRunning[];
  // Used to prevent chattering where motors will toggle on and off
  // rapidly if button is held down
  extern bool motorButtonsDebounce[];
}

#endif
