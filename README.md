# LDR Sensor using Arduino UNO

## Overview

This project uses an LDR (Light Dependent Resistor) with Arduino UNO to detect ambient light intensity. Based on the detected light level, the Arduino identifies whether it is Day or Night and displays the result on the Serial Monitor.

## Components Used

* Arduino UNO
* LDR Sensor
* Breadboard
* Jumper Wires
* Resistor

## Working Principle

The LDR changes its resistance according to the amount of light falling on it. The Arduino reads the sensor value through an analog pin and compares it with a threshold value. If the light intensity is high, the Serial Monitor displays "Day"; otherwise, it displays "Night".

## Output

![Output Screenshot](output.jpg)

## Arduino Code

The Arduino code is available in `LDR_Sensor.ino`.

## Applications

* Automatic lighting systems
* Light intensity monitoring
* Smart home automation
* Day/Night detection systems
