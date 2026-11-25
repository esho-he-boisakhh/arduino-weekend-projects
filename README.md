# arduino-weekend-projects
Just-for-fun weekend hardware experiments: going from a blinking LED to a car reverse sensor
# Arduino Traffic Light & Reverse Sensor Experiments

A small collection of beginner Arduino sketches built just for fun, progressing from a basic LED test to a reverse-parking style warning system.

## Projects Included

1. **blink** 
   * Basic hardware check to test LED wiring and board communication.
2. **traffic**
   * Simulates a standard Red, Yellow, and Green traffic light sequence using timed delays.
3. **traffic_with_beep**
   * Adds an active/passive buzzer to provide audio cues alongside the light changes.
4. **Sensor**
   * Combines the LEDs, buzzer, and an ultrasonic distance sensor to mimic a car's reversing alert system—changing lights and beeping faster as objects get closer.

## Hardware Used
* Arduino Board (uno)
* Red, Yellow, and Green LEDs + Resistors
* Buzzer
* Ultrasonic Sensor (HC-SR04)
* Breadboard & Jumper Wires

## How to Use
1. Clone or download this repository.
2. Open the desired `.ino` file in the **Arduino IDE**.
3. Check the pin definitions at the top of the code to match your breadboard wiring.
4. Upload to your board!
