#include <ESEEBotLib.h>

int pin1=1;
int pin2=2;
DriveMotor motor = DriveMotor(pin1,pin2);

void setup(){

  motor.start();

}
void loop(){

  motor.driveDirection(1);
  delay(500);
  motor.driveDirection(-1);

}