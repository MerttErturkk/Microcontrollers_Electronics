#include <ADXL345.h>
#include <Wire.h>

ADXL345 accelerometer;
unsigned long START;
void setup(void)
{
  Serial.begin(9600);
  Serial.println("Initialize ADXL345");
  if (!accelerometer.begin())
  {
    Serial.println("Could not find a valid ADXL345 sensor, check wiring!");
    delay(500);
  }
  accelerometer.clearSettings();
  START = millis();
}

void loop(void)
{
  // Read raw values
  if (millis() - START < 10000)
  {
    Vector raw = accelerometer.readRaw();

    Serial.print((int) raw.XAxis);
    Serial.print(", ");
    Serial.print((int) raw.YAxis);
    Serial.print(", ");
    Serial.println((int) raw.ZAxis);
    delay(100);
  }
}
