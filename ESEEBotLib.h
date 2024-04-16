#ifndef ESEEBotLib_h
#define ESEEBotLib_h
#include "Arduino.h"
class DriveMotor {

    public:
        DriveMotor(int pin1, int pin2);
        void driveDirection(int direction);
        void start();
    private:
        int _pin1;
        int _pin2;
};
class Drivetrain
{

    public:
        Drivetrain(DriveMotor *motor1, DriveMotor *motor2);
        void drive(int direction);
        void turn(int direction);

    private:
        DriveMotor *_motor1;
        DriveMotor *_motor2;
};
class Distance
{

    public:
        Distance(int trigPin, int echoPin);
        void start();
        double getDistance();

    private:
        int _trigPin;
        int _echoPin;
};
#endif
