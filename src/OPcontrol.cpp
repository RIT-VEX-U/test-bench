#include "vex.h"

void opControl(void){
  int lftAxis;
  int rgtAxis;
  
  while(true){
   
   lftAxis = Controller.Axis3.value();
   rgtAxis = Controller.Axis2.value();

   leftMotors.spin(fwd, lftAxis * (12/100),volt);
   rightMotors.spin(fwd, rgtAxis * (12/100),volt);
  }
}