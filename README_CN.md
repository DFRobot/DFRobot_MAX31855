# DFRobot_MAX31855

- [English Version](./README.md)

PT100适用于400℃以下高温的大部分测量，但通常家用天然气炉的火焰芯温度可达到800℃以上，而陶瓷酒窖或大功率电炉的温度甚至可超过1000℃。 在这些超高温的情况下，需要K型热电偶。  

![正反面svg效果图](./resources/images/DFR0558.png)

## 产品链接(https://www.dfrobot.com.cn/goods-1994.html)

    SKU：DFR0558

## 目录

* [概述](#概述)
* [库安装](#库安装)
* [方法](#方法)
* [兼容性](#兼容性y)
* [历史](#历史)
* [创作者](#创作者)

## 概述

一个获取探针温度的库

## 库安装

使用此库前，请首先下载库文件，将其粘贴到\Arduino\libraries目录中，然后打开examples文件夹并在该文件夹中运行演示。

## 方法

```C++

  /**
   * @fn begin
   * @brief 传感器的初始化
   */
  void begin(void);

  /**
   * @fn readCelsius
   * @brief 读取探头温度数据
   * @return float 温度值
   */
  float readCelsius(void);

```

## 兼容性

主板               | 通过  | 未通过   | 未测试   | 备注
------------------ | :----------: | :----------: | :---------: | -----
FireBeetle-ESP32  |      √       |             |            | 
FireBeetle-ESP8266|      √       |              |             | 
Mega2560  |      √       |             |            | 
Arduino uno |       √      |             |            | 
Leonardo  |      √       |              |             | 
Micro：bit  |      √       |              |             | 
M0  |      √       |              |             | 

## 历史

- 2022/4/1 - 1.0.0 版本

## 创作者

Written by PengKaixing(kaixing.peng@dfrobot.com), 2021. (Welcome to our [website](https://www.dfrobot.com/))