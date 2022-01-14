#include <LiquidCrystal.h>

LiquidCrystal mylcd(12,11,5,4,3,2);

void setup() {
  mylcd.beign(16,2);
  lcd.print("Elapsed ");
}

void loop() {
  lcd.setCursor(8,0);
  lcd.print(millis()/1000., 3);
}
