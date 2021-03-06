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

/*!
 * @brief Set IIC address by setting the hardware
 *
 * @param IIC Address setting
        addr = PCA_Address1 = 0x40, PCA_Address2 = 0x41,
               PCA_Address3 = 0x42, PCA_Address4 = 0x43,
               PCA_Address5 = 0x44, PCA_Address6 = 0x45,
               PCA_Address7 = 0x46, PCA_Address8 = 0x47,
               PCA_Address9 = 0x48, PCA_Address10 = 0x49, 
               PCA_Address11 = 0x4A, PCA_Address12 = 0x4B,
               PCA_Address13 = 0x4C, PCA_Address14 = 0x4D,
               PCA_Address15 = 0x4E, PCA_Address16 = 0x4F
 */
DFRobot_Stepper_Motor(eAddress i2caddr);

/*!
 * @brief To judge PCA9685 inited successfully
 *
 * @return true if PCA9685 init succeed
 * @return false if PCA9685 init failed
 */
bool begin();

/*!
 *@brief Motor rotates at a fixed speed
 *
 *@param index = PCA_M1,PCA_M2,PCA_M3,PCA_M4,PCA_M_ALL(All motors)
 *@param direction = PCA_CW(clockwise),PCA_CCW(counter-clockwise)
 *@param speed = 0~255(speed)
 */
void motorRun(eMotors index, eDir direction, int speed);

/*!
 * @brief Servo rotates to the position of a fixed degree
 * 
 * @param index =PCA_S0,PCA_S1,
                 PCA_S2,PCA_S3,
                 PCA_S4,PCA_S5,
                 PCA_S6,PCA_S7
 * @param degree = 0~180(degree)
 */
void servo(eServos index, int degree);

/*!
 * @brief Stepper motor rotates by an angle of a fixed step
 *
 * @param index = PCA_M1_M2,PCA_M3_M4(stepper motor interface)
 * @param direction = PCA_CW(clockwise),PCA_CCW(counter-clockwise)
 * @param step = 0~200
 */
void stepperDegree(eSteppers index, eDir direction, int step);

/*!
 * @brief Stepper motor rotates for fixed turns.
 *
 * @param index = PCA_M1_M2,PCA_M3_M4(stepper motor interface)
 * @param direction = PCA_CW(clockwise),PCA_CCW(counter-clockwise)
 * @param turn = 0~10
 */
void stepperTurn(eSteppers index, eDir direction, double turn);
void stepperTurn(eSteppers index, eDir direction, int turn);

/*!
 * @brief Stop motor running
 *
 * @param index = PCA_M1,PCA_M2,PCA_M3,PCA_M4,PCA_M_ALL(All motors)
 */
void motorStop(eMotors index);

/*!
 * @brief PCA9685 reset
 */
void reset();
```



## Compatibility

MCU                | Work Well | Work Wrong | Untested  | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino uno |       √      |             |            | 
RaspberryPi |       √      |             |            | 


## Credits

·author [luoyufeng yufeng.luo@dfrobot.com]
