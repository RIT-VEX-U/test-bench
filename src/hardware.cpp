#include "hardware.h"

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

motor Hardware::motors[] = {motor(PORT1, ratio18_1, false), motor(PORT2, ratio18_1, false), motor(PORT3, ratio18_1, false),
                            motor(PORT4, ratio18_1, false), motor(PORT5, ratio18_1, false), motor(PORT6, ratio18_1, false),
                            motor(PORT7, ratio18_1, false), motor(PORT8, ratio18_1, false), motor(PORT9, ratio18_1, false),
                            motor(PORT10, ratio18_1, false)};

controller::button Hardware::motorButtons[] = {master.ButtonA, master.ButtonX, master.ButtonY, master.ButtonB,
                                               master.ButtonRight, master.ButtonUp, master.ButtonLeft, master.ButtonDown,
                                               master.ButtonR1, master.ButtonR2};

bool Hardware::motorRunning[10] = {};
bool Hardware::motorButtonsDebounce[10] = {};
