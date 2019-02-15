
/*!
   file stepper_test.ino
   DFR0587 Gravity: I2C DC Motor/Stepper Motor Driver
   Connect this module to Arduino board via I2C bus, and plug in external power supply.
   Connect this module to Arduino board via I2C, and plug in external power supply.
   This demo can be used to control stepper motor.
   The module has 16 I2C addresses, these addresses are:
   PCA_Address1  0x40   A3 = 0  A2 = 0 A1 = 0  A0 = 0
   PCA_Address2  0x41   A3 = 0  A2 = 0 A1 = 0  A0 = 1
   PCA_Address3  0x42   A3 = 0  A2 = 0 A1 = 1  A0 = 0
   PCA_Address4  0x43   A3 = 0  A2 = 0 A1 = 1  A0 = 1
   PCA_Address5  0x44   A3 = 0  A2 = 1 A1 = 0  A0 = 0
   PCA_Address6  0x45   A3 = 0  A2 = 1 A1 = 0  A0 = 1
   PCA_Address7  0x46   A3 = 0  A2 = 1 A1 = 1  A0 = 0
   PCA_Address8  0x47   A3 = 0  A2 = 1 A1 = 1  A0 = 1
   PCA_Address9  0x48   A3 = 1  A2 = 0 A1 = 0  A0 = 0
   PCA_Address10  0x49   A3 = 1  A2 = 0 A1 = 0  A0 = 1
   PCA_Address11  0x4A   A3 = 1  A2 = 0 A1 = 1  A0 = 0
   PCA_Address12  0x4B   A3 = 1  A2 = 0 A1 = 1  A0 = 1
   PCA_Address13  0x4C   A3 = 1  A2 = 1 A1 = 0  A0 = 0
   PCA_Address14  0x4D   A3 = 1  A2 = 1 A1 = 0  A0 = 1
   PCA_Address15  0x4E   A3 = 1  A2 = 1 A1 = 1  A0 = 0
   PCA_Address16  0x4F   A3 = 1  A2 = 1 A1 = 1  A0 = 1
  
   Copyright    [DFRobot](http://www.dfrobot.com), 2018
   Copyright    GNU Lesser General Public License
   version  V0.1
   date  2019-2-11
*/

#include <DFRobot_Stepper_Motor.h>

DFRobot_Stepper_Motor motor(PCA_Address16);

void setup() {
    Serial.begin(115200);
    Wire.begin();
    while(!motor.begin()){                //Begin return True if succeed, otherwise return False
        delay(2000);
        Serial.println("PCA9685 init failed");
    }
}

void loop() {
    motor.stepperDegree(PCA_M1_M2,  PCA_CW,  360);
    delay(2000);
    motor.stepperTurn(PCA_M1_M2,  PCA_CCW,  10);
    delay(2000);
    //motor.reset();
}
