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

from machine import Pin,I2C
import DFRobot_MAX31855
import time 

i2c = I2C(scl=Pin(22), sda=Pin(21), freq=10000)

max31855 = DFRobot_MAX31855.DFRobot_MAX31855(i2c)

while True: 
  #Read Celsius
  temp = max31855.read_celsius()   
  print("Temperature:%s C" %temp)
  time.sleep(1)
