// Nathan Shelburn (Pengalu), 2024. See license for usage permissions. Thank you!
// The Distance class is an interface for an HC-SR04 Sensor

#include "Arduino.h"
#include "ESEEBotLib.h"

float duration, distance;  

Distance::Distance(int trigPin, int echoPin){
  _trigPin=trigPin;
  _echoPin=echoPin;
}
void Distance::start(){

    pinMode(_trigPin,OUTPUT);
    pinMode(_echoPin, INPUT);
    digitalWrite(_trigPin, LOW);
  
}

double Distance::getDistance(){


  digitalWrite(_trigPin, HIGH); //triggers an ultrasonic burst
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  long duration = pulseIn(_echoPin, HIGH); // convert the length of time echo pin is high into a long
  //time*speed = distanec
  double distance = (duration * 0.343)/2; //(distance = duration in miroseonds / speed of sound by cm/microsecond) / 2 (because time travelling both directions)
  return(distance);

}