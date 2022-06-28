/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/darwinwang/Documents/IoT/HelloWorld/src/HelloWorld.ino"
void setup();
void loop();
#line 1 "/Users/darwinwang/Documents/IoT/HelloWorld/src/HelloWorld.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D5, OUTPUT);
}


void loop() {
  digitalWrite(D5, HIGH);
  delay(500);
  digitalWrite(D5, LOW);
  delay(500);
}