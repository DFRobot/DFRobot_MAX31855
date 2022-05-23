/*!
 * @file DFRobot_MAX31855.cpp
 * @brief A digital K type high temperature sensor library
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author      PengKaixing(kaixing.peng@dfrobot.com)
 * @version  V1.0.0
 * @date  2022-04-01
 * @url https://github.com/DFRobot/DFRobot_MAX31855
 */

#include <DFRobot_MAX31855.h>

DFRobot_MAX31855::DFRobot_MAX31855(TwoWire *pWire, uint8_t I2C_addr)
{
  _pWire = pWire;
  _I2C_addr = I2C_addr;
}

void DFRobot_MAX31855::begin(void)
{
  _pWire->begin();
}

float DFRobot_MAX31855::readCelsius(void)
{
  unsigned char rxbuf[4] = {0};
  readData(0x00, rxbuf,4);
  if(rxbuf[3]&0x7){
    return NAN;
  }
  if(rxbuf[0]&0x80){
    rxbuf[0] = 0xff - rxbuf[0];
    rxbuf[1] = 0xff - rxbuf[1];
    float temp =  -((((rxbuf[0] << 8)|(rxbuf[1] & 0xfc)) >> 2) + 1) * 0.25;
    return temp;
  }
  float temp =(((rxbuf[0] << 8 )| (rxbuf[1] & 0xfc)) >> 2)*0.25;
  return temp;
}

int16_t DFRobot_MAX31855::readData(uint8_t Reg, uint8_t *Data, uint8_t len)
{
  int i = 0;
  _pWire->beginTransmission(this->_I2C_addr);
  _pWire->write(Reg);
  if (_pWire->endTransmission() != 0)
  {
    return -1;
  }
  _pWire->requestFrom((uint8_t)this->_I2C_addr, (uint8_t)len);
  while (_pWire->available())
  {
    Data[i++] = _pWire->read();
  }
  return len;
}
