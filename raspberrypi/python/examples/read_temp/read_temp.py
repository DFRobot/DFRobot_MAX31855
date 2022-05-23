# -*- coding: utf-8 -*-
'''!
  @file read_temp.py
  @brief Get probe temperature
  @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
  @license     The MIT License (MIT)
  @author      PengKaixing(kaixing.peng@dfrobot.com)
  @version  V1.0.0
  @date  2022-04-01
  @url https://github.com/DFRobot/DFRobot_MAX31855
'''
import sys
import os
import time

sys.path.append(os.path.dirname(os.path.dirname(os.path.dirname(os.path.realpath(__file__)))))
from DFRobot_MAX31855 import *

I2C_1       = 0x01
I2C_ADDRESS = 0x10
#Create MAX31855 object
max31855 = DFRobot_MAX31855(I2C_1 ,I2C_ADDRESS)  

def loop():  
  while True:
    #Read celsius
    temp = max31855.read_celsius()                 
    print("Temperature:%s C" %temp)
    time.sleep(1)
    
if __name__ == "__main__":
  loop()