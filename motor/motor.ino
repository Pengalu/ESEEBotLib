// Nathan Shelburn (Pengalu), 2024. See license for usage permissions. Thank you!
// Power is supplied by the Vin pin from the aduino to the VCC pin on the bridge. The bridge can operate from about 2 to 10 volts.
// Ground to Arduino ground pin.


// PWM default numbers.
int motorIn1 = 2; // Motor 1
int motorIn2=3;
int motorIn3 = 4; // Motor 2
int motorIn4 = 5;

// I/O
// In1/In2 controls Motor 1 while In3/In4 controls Motor 2
// In1/3 || In2/4 || Result
// LOW || LOW || None
// HIGH || LOW || Forward
// LOW || HIGH || Reverse
// HIGH || HIGH || NONE

// AS seen in the chart, each pin controls throttle in one direction. If throttle in both is given, they cancel. 

void setup() {
 
  pinMode(motorIn1,OUTPUT) // Set up pins for output to H-Bridge
  pinMode(motorIn2,OUTPUT)
  pinMode(motorIn3,OUTPUT)
  pinMode(motorIn4,OUTPUT)
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
