# ESEEBotLib
Library for educational robot kits--- simplifies the use of H-Bridges to be more compatible with simple direction commands.

Uses a DRV8833 motor H-Bridge to drive the motors off an Arduino. Default pinouts from the Arduino are:
|Arduino|H-bridge|
|--------------|-------------|
|Vin|VCC on H-Bridge|
|GND|GND|
|PWM 2, 3, 4, 5|In 1, 2, 3, 4|
