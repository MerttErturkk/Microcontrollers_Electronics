#include <Wire.h>
#include <DFRobot_QMC5883.h>

DFRobot_QMC5883 compass;
unsigned long time1;


void setup()
{
  Serial.begin(9600);
  compass.begin();
  Serial.println("Initialize QMC5883");
  
  compass.setRange(QMC5883_RANGE_2GA);
  compass.setMeasurementMode(QMC5883_CONTINOUS); 
  compass.setDataRate(QMC5883_DATARATE_10HZ);
  compass.setSamples(QMC5883_SAMPLES_1);

  time1=millis();
}


void loop()
{
  Vector values;
 
  if ((millis()-time1)< 10000)
    { 
      values = compass.readNormalize();
      Serial.print((int)values.XAxis);
      Serial.print(",");
      Serial.print((int)values.YAxis);
      Serial.print(",");
      Serial.println((int)values.ZAxis);
    }
      
}
