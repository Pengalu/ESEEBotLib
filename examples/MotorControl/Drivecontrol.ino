#include <ESEEBotLib.h>

int pin1=2;
int pin2=3;
int pin3=4;
int pin4=5;

DriveMotor motor = DriveMotor(pin1,pin2);
DriveMotor motor2 = DriveMotor(pin3,pin4);



Drivetrain train = Drivetrain(&motor,&motor2); // make sure to pass as pointer
void setup(){

  motor.start();
  motor2.start();
  train.drive(1);
  delay(3000);
  train.turn(-1);
}
void loop(){


}
