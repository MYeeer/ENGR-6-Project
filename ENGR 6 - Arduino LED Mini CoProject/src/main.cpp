#include <Arduino.h>

// Sets the Variable ledPin to digital pin 6 on the Arduino Board
// This is not necessary makes connected element to the pin known
// Global variable so it can be used within any function
const int ledPin = 6;

// Anything within this function runs once
void setup() {
  // Sets the ledPin (Pin 6) to OUTPUT a signal
  pinMode(ledPin, OUTPUT);
}

// Anything within this function, will loop over and over again while the arduino is powered
void loop() {
  // Voltage (5 V) is sent to ledPin
  digitalWrite(ledPin, HIGH);
  // In units of Milliseconds, Delays the next line of code for 1.5 seconds
  delay(1500);
  // Voltage is no longer sent to ledPin
  digitalWrite(ledPin, LOW);
  // Another 1.5 second delay before looping back to the first line in the loop
  delay(1500);
}