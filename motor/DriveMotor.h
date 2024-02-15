#ifndef DriveMotor_h
#define DriveMotor_h
#include "Arduino.h"
class DriveMotor {

    public:
        DriveMotor(int pin1, int pin2);
        void driveDirection(int direction);
    private:
        int _pin1;
        int _pin2;
};
#endif
