# -*- coding: utf-8 -*-
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
import time
import smbus
import os
import math
import RPi.GPIO as GPIO

class DFRobot_MAX31855:
  '''
    @brief A class to get sensor temperature
  '''
  def __init__(self,bus ,addr):
    self.__addr = addr
    self.i2cbus = smbus.SMBus(bus)
  
  def read_celsius(self):
    '''
      @brief Read temperature data of probe
      @return Temperature value
    '''
    rxbuf = self.read_data(0x00,4)
    if(rxbuf[3]&0x7):
      return -1
    if(rxbuf[0]&0x80):
      rxbuf[0] = 0xff - rxbuf[0]
      rxbuf[1] = 0xff - rxbuf[1]
      temp =  -((((rxbuf[0] << 8)|(rxbuf[1] & 0xfc)) >> 2) + 1) * 0.25
      return temp
    temp =(((rxbuf[0] << 8 )| (rxbuf[1] & 0xfc)) >> 2)*0.25
    return temp
  
  def read_data(self, reg ,length):
    '''
      @brief read the data from the register
      @param reg register address
      @param length read data length
    '''
    try:
      rslt = self.i2cbus.read_i2c_block_data(self.__addr ,reg , length)
      return rslt
    except:
      return -1