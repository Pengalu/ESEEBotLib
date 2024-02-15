// Nathan Shelburn (Pengalu), 2024. See license for usage permissions. Thank you!
// Power is supplied by the Vin pin from the aduino to the VCC pin on the bridge. The bridge can operate from about 2 to 10 volts.
// Ground to Arduino ground pin.

// The DriveMotor class is an interface to the H-Bridge to allow easier directional control.


// PWM default numbers.
/*
int motorIn1 = 2; // Motor 1
int motorIn2=3;
int motorIn3 = 4; // Motor 2
int motorIn4 = 5;
*/
#include "Arduino.h"
#include "DriveMotor.h"


// I/O
// In1/In2 controls Motor 1 while In3/In4 controls Motor 2
// In1/3 || In2/4 || Result
// LOW || LOW || None
// HIGH || LOW || Forward
// LOW || HIGH || Reverse
// HIGH || HIGH || NONE

// AS seen in the chart, each pin controls throttle in one direction. If throttle in both is given, they cancel. 

DriveMotor::DriveMotor(int pin1, int pin2) {
 
  pinMode(pin1,OUTPUT); // Set up pins for output to H-Bridge
  pinMode(pin2,OUTPUT);
 // pinMode(motorIn3,OUTPUT)
 // pinMode(motorIn4,OUTPUT)
  _pin1=pin1;
  _pin2=pin2;

}

// Drives the motor in a direction.
// Directions:
// 1 : Forward, 0 : Stop Driving, -1 : Reverse.
// Motors:

void DriveMotor::driveDirection (int direction){

  if(direction == 1){ // described in above chart
    digitalWrite(_pin1,HIGH);
    digitalWrite(_pin2,LOW);
  }
  else if (direction == -1){
    digitalWrite(_pin1,LOW);
    digitalWrite(_pin2,HIGH);
  }
  else if (direction == 0) {
    digitalWrite(_pin1,LOW);
    digitalWrite(_pin2,LOW);
  }

}


