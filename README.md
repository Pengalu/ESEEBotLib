# ESEEBotLib
Library for educational robot kits--- simplifies the use of H-Bridges to be more compatible with simple direction commands.

This development envo is designed to be used with VSCode in conjunction with Arduino IDE. Write classes on VSCode in raw C++, write sketches / .ino files in Arduino IDE.

## Installation

Drag and drop the repo into your Arduino IDE's library folder. If you can't find it, make a folder titled "libraries" in your Arduino IDE sketchbook directory. 
Import with `#include <ESEEBotLib.h>` Sketches should be written in Arduino IDE. The VSCode environment is intended only for developing the library itself.

## Hardware (WIP)

Uses a DRV8833 motor H-Bridge to drive the motors off an Arduino. Default pinouts from the Arduino are:
|Arduino|H-bridge|
|--------------|-------------|
|Vin|VCC on H-Bridge|
|GND|GND|
|PWM 2, 3, 4, 5|In 1, 2, 3, 4|
