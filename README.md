# Simple-Distance-Monitor
In this project, I created a distance monitor that provides different outcomes depending on how far an object is from the sensor. The distance was then displayed live on a screen.

# Introduction
The goal for this project is to use breadboarding and coding skills to create a simple distance monitor. The monitor should give warnings if any object gets too close and display the distance on an LCD. As the object approaches the sensor, the LED goes from green to amber and then to red, and the buzzer goes from silent to rapid oscillations at 1kHz. Equipment included an Ultrasonic sensor, a potentiometer, a microcontroller, a potentiometer, LEDS, and an LCD screen. The assembly of this project taught the importance of patience when troubleshooting, which will be crucial for more advanced projects.

# Components:
The brain of this project was the Elegoo Uno microcontroller, which was used in coordination with the C/C++ based Arduino IDE to control the various components. 
The microcontroller was used to provide 5V to the breadboard, provide a common ground, and control the logic of the components.
I used an LCD  screen to display the distance of the object. The screen was used alongside a potentiometer, which was used to control the brightness. The "LiquidCrystal" library on the Arduino IDE was used to simplify the display.
The distance was calculated using an HC-SR04 Ultrasonic Sensor. This sensor measures the time it takes for the echo of a sound wave to return to the sensor. By using the speed of sound, we can calculate the distance. 
An active buzzer and 3 LED's were used for the distance warnings.

# Wiring Diagram:
[Wiring Diagram](Circuit_Diagram.pdf)

# Code:
[Code](Simple_Distance_Detector.ino)

# Demo Video:
[Watch the Demo on YouTube](https://www.youtube.com/shorts/oynMuxzbOHU)

# Usage:
Ensure you have all the necessary components and complete the circuit as shown above. It's extremely important to double-check wiring before you add power, especially to prevent a short circuit.
Power the microcontroller via USB from a Personal Computer or an external source.
Use the Arduino IDE to write the code above. Upload the code to the microcontroller.
Test by moving an object closer to the sensor.

# Common Issues
Loose wires will often cause issues, such as the LCD screen not displaying, and very dim LEDs.
Mixing up the Trigger and Echo pins on the Ultrasonic sensor may cause the sensor to return 0.
The display of the LCD may not be clear, which often requires the use of the potentiometer




