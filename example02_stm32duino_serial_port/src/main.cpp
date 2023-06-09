#include <Arduino.h>

int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT); 
  Serial.begin(115200);    
}

// the loop routine runs over and over again forever:
void loop() {
  Serial.println("hello Olivia");
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);               // wait for a second
}