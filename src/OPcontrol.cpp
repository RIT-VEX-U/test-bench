#include "vex.h"

void opControl(void){
  int lftAxis;
  int rgtAxis;
  
  while(true){

   Brain.Screen.printAt(20,20, "First VEX U code"); 
   Brain.Screen.printAt(40,20, "Catty Degrees %d" , getCattyDist());

   lftAxis = Controller.Axis3.value();
   rgtAxis = Controller.Axis2.value();

   leftMotors.spin(fwd, lftAxis * (12/100),volt);
   rightMotors.spin(fwd, rgtAxis * (12/100),volt);


   if(Controller.ButtonL1.pressing()){
    catty.spin(fwd,10,pct);
   }
   else{
    catty.stop(coast);
   }
  }
}