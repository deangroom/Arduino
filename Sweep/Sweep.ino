// Include the library

// https://www.makerguides.com/how-to-control-a-360-degree-servo-motor-with-arduino/
#include <Servo.h>

// Create the servo object
Servo myservo;

int timer = 000;

// Setup section to run once
void setup() {
  myservo.attach(9); // attach the servo to our servo object
  myservo.write(0); // set servo location to top - zero
}

// Loop to keep the motor turning!
void loop() {
  // myservo.write(90); // stops the motor
  // myservo.write(45); // rotate the motor counterclockwise
  // myservo.write(180); // rotate the motor counterclockwise - 180 is top speed
  // myservo.write(98); // rotate the motor counterclockwise - min speed

}
