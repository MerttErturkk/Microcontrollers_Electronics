#include <EEPROM.h>

void setup() {

Serial.begin(9600);
Serial.print("Size is:  ");
Serial.print(EEPROM.length());
}

void loop() {
  // put your main code here, to run repeatedly:

}
