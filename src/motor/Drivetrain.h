
#ifndef Drivetrain_h
#define Drivetrain_h
#include "DriveMotor.h"
#include "Arduino.h"
class Drivetrain {

    public:
        Drivetrain(DriveMotor* motor1, DriveMotor* motor2);
        void drive(int direction);
        void turn(int direction);
    private:
        DriveMotor* _motor1;
        DriveMotor* _motor2;
};
#endif