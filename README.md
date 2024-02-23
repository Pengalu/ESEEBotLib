# ESEEBotLib
Library for educational robot kits--- simplifies the use of H-Bridges to be more compatible with simple direction commands.

This development envo is designed to be used with VSCode in conjunction with Arduino IDE. Write classes on VSCode in raw C++, write sketches / .ino files in Arduino IDE.
Please, deploy code from Arduino IDE. The VSCode environment has to be configured individually for each board.


Uses a DRV8833 motor H-Bridge to drive the motors off an Arduino. Default pinouts from the Arduino are:
|Arduino|H-bridge|
|--------------|-------------|
|Vin|VCC on H-Bridge|
|GND|GND|
|PWM 2, 3, 4, 5|In 1, 2, 3, 4|
