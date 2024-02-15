// Nathan Shelburn (Pengalu), 2024. See license for usage permissions. Thank you!
// The Drivetrain class is an interface for driving two DriveMotors. It allows for turning and driving with single functions.


#include "Arduino.h"
#include "DriveMotor.h"
#include "Drivetrain.h"


Drivetrain::Drivetrain(int pin1,int pin2,int pin3,int pin4){
  DriveMotor motor1 = DriveMotor(pin1,pin2);
  DriveMotor motor2 = DriveMotor(pin3,pin4);
  _motor1=motor1;
  _motor2=motor2;

}