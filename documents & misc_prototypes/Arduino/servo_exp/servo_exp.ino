#include <Servo.h>

Servo myservo; 

void setup() {
  // put your setup code here, to run once:

  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
 myservo.write(180);
 delay(1000);
 myservo.write(90);
 delay(1000);
 myservo.write(60);
 delay(1000);
}