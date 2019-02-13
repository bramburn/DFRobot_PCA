# PCA9685


PCA9685 is a chip based on I2C bus communication.<br>
This library can help you to control motor, servo and stepper motor by PCA9685.<br>
The library is designed for DFR0587 Gravity: I2C DC Motor/Stepper Motor Driver.<br>
Please provide external power for the motor drive plate.<br>

## PCA9685 Library for Arduino
---------------------------------------------------------
Provide an Arduino library for the PCA9685 modules.

## Table of Contents

* [Summary](#summary)
* [Feature](#feature)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [Credits](#credits)
<snippet>
<content>

## Summary
This library can help you to control motor, servo and stepper motor by PCA9685.<br>

## Feature
1. External power supply is needed.
2. Support I2C bus communication.
3. Short-circuit A0, A1, A2, A3 to change I2C address.
4. External power supply voltage: 5V~12V.

## Installation

Download the library ZIP file and unzip it to the Arduino folder of the library.<br>

## Methods

```C++

#include "Stepper_Motor.h"

/* 
 * @brief To judge which address is being used 
 *
 * @return true if PCA8591 init succeed
 * @return false if PCA8591 init failed
 */
bool begin();

/* 
 * @brief Set IIC adress by setting the hardware
 *
 * @param addr = Address1 = 0x40, Address2 = 0x41,
                 Address3 = 0x42, Address4 = 0x43,
                 Address5 = 0x44, Address6 = 0x45,
                 Address7 = 0x46, Address8 = 0x47,
                 Address9 = 0x48, Address10 = 0x49, 
                 Address11 = 0x4A, Address12 = 0x4B,
                 Address13 = 0x4C, Address14 = 0x4D,
                 Address15 = 0x4E, Address16 = 0x4F
 */
void setI2cAddr(uint16_t addr);

/*
 *@brief Motor rotates at a fixed speed;
 *
 *@param index = M1,M2,M3,M4;
 *@param direction = CW(clockwise),CCW(counter-clockwise);
 *@param speed = 0~255(speed);
 */
void motorRun(eMotors index, eDir direction, int speed);

/* 
 * @brief Servo rotates to the position of a fixed degree.
 * 
 * @param index =S0,S1,S2,S3,S4,S5,S6,S7;
 * @param degree = 0~180(degree);
 */
void servo(eServos index, int degree);

/*
 * @brief Stepper motor rotates by an angle of a fixed degree.
 *
 * @param index = M1_M2,M3_M4(stepper motor interface);
 * @param direction = CW(clockwise),CCW(counter-clockwise);
 * @param degree = 0~360;
 */
void stepperDegree42(eSteppers index, eDir direction, int degree);

/*
 * @brief Stepper motor rotates for fixed turns. 
 *
 * @param index = M1_M2,M3_M4(stepper motor interface);
 * @param direction = CW(clockwise),CCW(counter-clockwise);
 * @param turn = 0~10;
 */
void stepperTurn42(eSteppers index, eDir direction, double turn);
void stepperTurn42(eSteppers index, eDir direction, int turn);

/*
 * @brief motor stop rotating.
 *
 * @param index = M1,M2,M3,M4
 */
void motorStop(eMotors index);


```



## Compatibility

MCU                | Work Well | Work Wrong | Untested  | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino uno |       √      |             |            | 
RaspberryPi |       √      |             |            | 


## Credits

·author [luoyufeng yufeng.luo@dfrobot.com]
