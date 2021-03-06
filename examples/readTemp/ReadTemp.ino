 /*!
  * file ReadTemp.ino
  * 
  * Connect MAX31855 to arduino via I2C interface,then download this example
  * @n open serial monitor to check the temperature.
  *
  * Copyright   [DFRobot](http://www.dfrobot.com), 2016
  * Copyright   GNU Lesser General Public License
  *
  * version  V0.1
  * date  2018-3-6
  */
  
#include <DFRobot_MAX31855.h>
#include <Wire.h>
DFRobot_MAX31855 max31855;

void setup(){
  /*Set baudrate*/
  Serial.begin(9600);
}

void loop(){
  int stat;
  /*Detect I2C device*/
  stat = max31855.scan();
  if(!stat){
    Serial.println("No I2C devices!");
  }
  else{
    /*Read Celsius*/
    float temp = max31855.readCelsius();
    Serial.print("Temperature:");
    Serial.print(temp);
    Serial.println(" C");
  }
  delay(1000);
}