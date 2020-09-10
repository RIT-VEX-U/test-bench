#include "screen.h"

void displayBrain() {
  brain::lcd s = Hardware::v5_brain.Screen;

  s.clearScreen();
  s.setCursor(1,1);

  s.print("Testbench Controls:");
  s.newLine();

  // Output motor controls
  // size: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
  s.print("Motor  1: A              Reverse motor 1: L1 + A");
  s.newLine();
  s.print("Motor  2: X              Stop all motors: L2");
  s.newLine();
  s.print("Motor  3: Y");
  s.newLine();
  s.print("Motor  4: B");
  s.newLine();
  s.print("Motor  5: RIGHT");
  s.newLine();
  s.print("Motor  6: UP");
  s.newLine();
  s.print("Motor  7: LEFT");
  s.newLine();
  s.print("Motor  8: DOWN");
  s.newLine();
  s.print("Motor  9: R1");
  s.newLine();
  s.print("Motor 10: R2");
  s.newLine();
}
