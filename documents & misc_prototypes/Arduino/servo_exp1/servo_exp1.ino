#include <Servo.h>


Servo servo1;
int pos;

void setup() {
  // put your setup code here, to run once:
servo1.attach(9);
servo1.write(90);// initial angle.
servo1.writeMicroseconds(560); //from 544 us to 2400 us
}


void loop() {
  // put your main code here, to run repeatedly:

}
