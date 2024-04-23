#include <ESEEBotLib.h>

int pin1=2;
int pin2=3;
DriveMotor motor = DriveMotor(pin1,pin2);
DriveMotor motor2 = DriveMotor(5,6);

void setup(){

  motor.start();
  motor2.start();
  motor.driveDirection(1);
}
void loop(){


}
