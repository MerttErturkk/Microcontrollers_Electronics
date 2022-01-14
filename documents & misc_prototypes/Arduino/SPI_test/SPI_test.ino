#include <SPI.h>

void setup() {
  // put your setup code here, to run once:
SPI.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(10,LOW);
SPI.transfer(0x74);
digitalWrite(10,HIGH);
delay(50);
}
