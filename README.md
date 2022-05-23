# DFRobot_MAX31855

- [中文版](./README_CN.md)

PT100 is suitable for most of the measurement of high temperature below 400℃, but usually the flame core temperature of domestic natural gas stove can reach more than 800℃, and the temperature of ceramic cellar or high-power electric furnace can even exceed 1000℃. In these ultra-high temperature scenarios, type K thermocouple is needed.  

![正反面svg效果图](./resources/images/DFR0558.png)

## Product Link(https://www.dfrobot.com/product-1753.html)

    SKU：DFR0558

## Table of Contents

* [Summary](#summary)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

## Summary

A library to get probe temperature

## Installation

To use this library download the zip file, uncompress it to a folder named DFRobot_MAX31855.
Download the zip file first to use this library and uncompress it to a folder named DFRobot_MAX31855.

## Methods

```C++
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
```

## Compatibility

MCU                | Work Well | Work Wrong | Untested  | Remarks
------------------ | :----------: | :----------: | :---------: | -----
FireBeetle-ESP32  |      √       |             |            | 
FireBeetle-ESP8266|      √       |              |             | 
Mega2560  |      √       |             |            | 
Arduino uno |       √      |             |            | 
Leonardo  |      √       |              |             | 
Micro：bit  |      √       |              |             | 
M0  |      √       |              |             | 

## History

- 2022/4/1 - Version 1.0.0 released

## Credits

Written by PengKaixing(kaixing.peng@dfrobot.com), 2021. (Welcome to our [website](https://www.dfrobot.com/))