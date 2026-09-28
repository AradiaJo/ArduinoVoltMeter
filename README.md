# ArduinoVoltMeter

## Overview
Code to upload to an Arduino, to allow you to measure the voltage between a positive and negative terminal

## Setup

1) Connect A0 - Voltage Source +
2) Connect GND - Voltage Source  - 
3) Upload sketch to arduino
4) Open serial monitor 9600 baud
5) Connect + & - to the source, and view voltage readings in serial monitor

## Notes
- reading * (5.0/1023.0), converts the input into an aproximate voltage assuming 5V
- This is not a calibrated multimeter reading, but used in a pinch when repairing some headphones at home
- Reads on a 5s delay
- DO NOT EXCEED THE ARDUINOS PERMITTED ANALOGUE INPUT VOLTAGE
