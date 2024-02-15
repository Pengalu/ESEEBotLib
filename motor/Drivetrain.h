
#ifndef Drivetrain_h
#define Drivetrain_h
#include "DriveMotor.h"
#include "Arduino.h"
class Drivetrain {

    public:
        Drivetrain(int pin1, int pin2, int pin3, int pin4);
        void drive(int direction);
        void turn(int direction);
    private:
        DriveMotor *_motor1;
        DriveMotor *_motor2;
};
#endif