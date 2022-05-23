/*!
 * @file DFRobot_MAX31855.h
 * @brief A digital K type high temperature sensor library
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author      PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-04-01
 * @url https://github.com/DFRobot/DFRobot_MAX31855
 */

#ifndef _DFRobot_MAX31855_H_ 
#define _DFRobot_MAX31855_H_

#include <Arduino.h>
#include <Wire.h>

class DFRobot_MAX31855
{
public:
  DFRobot_MAX31855(TwoWire *pWire = &Wire, uint8_t I2C_addr = 0x10);
  /**
   * @fn begin
   * @brief Sensor initialization
   */
  void begin(void);

  /**
   * @fn readCelsius
   * @brief Read temperature data of probe
   * @return float Temperature value
   */
  float readCelsius(void);
private:
  TwoWire *_pWire;
  uint8_t _I2C_addr;
  int16_t readData(uint8_t Reg, uint8_t *Data, uint8_t len);
};

#endif