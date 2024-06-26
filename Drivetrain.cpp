/*
  Drivetrain.cpp - Combines DriveMotors to produe turning and directional movement.
  Created by Nathan "Pengalu" Shelburn, February 22, 2024.
  See license for usage permissions. Thank you!
*/

// Nathan Shelburn (Pengalu), 2024. See license for usage permissions. Thank you!
// The Drivetrain class is an interface for driving two DriveMotors. It allows for turning and driving with single functions.

#include "Arduino.h"
#include "ESEEBotLib.h"


Drivetrain::Drivetrain(DriveMotor* motor1, DriveMotor* motor2){
  _motor1=motor1;
  _motor2=motor2;
  
}

void Drivetrain::drive(int direction){
  _motor1->driveDirection(direction);
  _motor2->driveDirection(direction);
}

void Drivetrain::turn(int direction){
  _motor1->driveDirection(direction);
  _motor2->driveDirection(-direction);
}
