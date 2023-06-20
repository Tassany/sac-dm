#include "AccelSensor.h"

AccelSensor::AccelSensor()
{
}

void AccelSensor::getEvent()
{

   mpu.getAcceleration(&ax, &ay, &az);
}
void AccelSensor::setConfig()
{

  Wire.begin();
  mpu.initialize();

  delay(100);
}


