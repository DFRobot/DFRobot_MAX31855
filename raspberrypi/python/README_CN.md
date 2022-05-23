# DFRobot_MAX31855

- [English Version](./README.md)

PT100适用于400℃以下高温的大部分测量，但通常家用天然气炉的火焰芯温度可达到800℃以上，而陶瓷酒窖或大功率电炉的温度甚至可超过1000℃。 在这些超高温的情况下，需要K型热电偶。  

![正反面svg效果图](../../resources/images/DFR0558.png)

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

要使用这个库，首先将库下载到Raspberry Pi，然后打开例程文件夹。要执行一个例程read_temp.py，请在命令行中输入python read_temp.py。

## 方法

```python

  '''
    @brief 读取探头温度数据
    @return 温度值
  '''
  def read_celsius(self):

  '''
    @brief 从寄存器中读取数据
    @param reg 寄存器地址
    @param length 读出数据长度
  '''  
  def read_data(self, reg ,length):

```

## 兼容性

主板               | 通过  | 未通过   | 未测试   | 备注
| ------------ | :--: | :----: | :----: | :--: |
| RaspberryPi2 |      |        |   √    |      |
| RaspberryPi3 |      |        |   √    |      |
| RaspberryPi4 |  √   |        |        |      |

* Python Version

| Python  | Pass | Miss | No Test | Note |
| ------- | :--: | :----: | :----: | ---- |
| Python2 |  √   |        |        |      |
| Python3 |  √   |        |        |      |

## 历史

- 2022/4/1 - 1.0.0 版本

## 创作者

Written by PengKaixing(kaixing.peng@dfrobot.com), 2021. (Welcome to our [website](https://www.dfrobot.com/))