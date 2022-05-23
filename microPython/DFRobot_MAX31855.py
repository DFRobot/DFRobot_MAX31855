'''!
  @file DFRobot_MAX31855.py
  @brief A digital K type high temperature sensor library
  @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
  @license     The MIT License (MIT)
  @author      PengKaixing(kaixing.peng@dfrobot.com)
  @version  V1.0.0
  @date  2022-04-01
  @url https://github.com/DFRobot/DFRobot_MAX31855
'''

class DFRobot_MAX31855:
  '''
    @brief A class to get sensor temperature
  '''
  def __init__(self,i2c):
    self.i2c = i2c
    
  def read_celsius(self):
    '''
      @brief A class to get sensor temperature
      @return Temperature value
    '''
    a,b,d = self.read_data()
    if(d&0x7):
      return None
    if(a&0x80):
      a = 0xff - a
      b = 0xff - b
      temp = -((((a << 8) | b) >> 2)+1)*0.25
      return temp
    temp = (((a << 8) | b) >> 2)*0.25
    return temp

  def read_data(self):
    '''
      @brief Read sensor data
      @return Sensor data
    '''
    i = 0
    a = self.i2c.readfrom_mem(16,0x00,1)[0]
    b = self.i2c.readfrom_mem(16,0x01,1)[0]
    d = self.i2c.readfrom_mem(16,0x03,1)[0]
    return a,b,d