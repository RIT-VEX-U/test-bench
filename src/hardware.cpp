#include "hardware.h"

using namespace Hardware;

brain Hardware::v5_brain;

controller Hardware::master(controllerType::primary);

motor Hardware::m1(0), Hardware::m2(1), Hardware::m3(2), Hardware::m4(3), Hardware::m5(4), Hardware::m6(5), Hardware::m7(6), Hardware::m8(7);