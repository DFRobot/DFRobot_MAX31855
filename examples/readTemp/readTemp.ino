/*!
 * @file readTemp.ino
 * @brief Get probe temperature
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author      PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-04-01
 * @url https://github.com/DFRobot/DFRobot_MAX31855
 */

#include <DFRobot_MAX31855.h>
#include <Wire.h>
DFRobot_MAX31855 max31855(&Wire, 0x10);

void setup()
{
  /*Set baudrate*/
  Serial.begin(9600);
  max31855.begin();
}

void loop()
{
  int stat;
  /*Read Celsius*/
  float temp = max31855.readCelsius();
  Serial.print("Temperature:");
  Serial.print(temp);
  Serial.println(" C");
  delay(1000);
}