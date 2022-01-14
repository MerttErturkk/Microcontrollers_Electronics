#include <Wire.h>

//#define ADDR 0x1D //SDO=1 else (0x53) if SDO = GND (DataSheet page 18)
#define ADDR 0x53 //SDO=1 else (0x53) if SDO = GND 
#define POWER_CTL 0x2D
#define DATA_FORMAT 0x31
#define DATA_X0 0x32

unsigned long time1;
byte values[6] ;
char output[512];

void setup() {
  Wire.begin();
  Serial.begin(9600);

  Wire.beginTransmission(ADDR);
  Wire.write(POWER_CTL);
  Wire.write(0);
  Wire.endTransmission();

  Wire.beginTransmission(ADDR);
  Wire.write(POWER_CTL);
  Wire.write(16);
  Wire.endTransmission();

  Wire.beginTransmission(ADDR);
  Wire.write(POWER_CTL);
  Wire.write(8);
  Wire.endTransmission();

  Wire.beginTransmission(ADDR);
  Wire.write(DATA_FORMAT);
  Wire.write(0x00); // Set range to +/-2 g
  Wire.endTransmission();

  time1=millis();
  Serial.println("Initiate...");
}

void loop() {
  if ((millis()-time1)< 5000)
  {
    int x, y, z;
  
    Wire.beginTransmission(ADDR);
    Wire.write(DATA_X0);
    Wire.endTransmission();

    Wire.beginTransmission(ADDR);
    Wire.requestFrom(ADDR, 6);

    int i = 0;
    while (Wire.available()) 
    {
      values[i] = Wire.read();
      i++;
    }
    Wire.endTransmission();
    x = (((int)values[1]) << 8) | values[0];
    y = (((int)values[3]) << 8) | values[2];
    z = (((int)values[5]) << 8) | values[4];
  
    sprintf(output, "%d %d %d", x, y, z);
    Serial.println(output);
    delay(20);
  }
}
