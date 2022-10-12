//
// Created by Federico Moreno on 05/10/2022.
#include <Arduino.h>

bool ledstate =0;
void setup() {
    // initialize digital pin LED_BUILTIN as an output
    pinMode(2, INPUT_PULLUP);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);


}

// This loop function is for turning on and off the LED on the board with a button
void loop() {
    if (digitalRead(2)==LOW && ledstate==0) { // if the button is pressed and the LED is off
        ledstate=1; // set the LED state to on
        digitalWrite(7, !digitalRead(7)); // turn on the LED on the board
        digitalWrite(8, !digitalRead(8)); // turn on the LED on the board
    }
    else if (digitalRead(2)==HIGH && ledstate==1) { // if the button is not pressed and the LED is on
        ledstate=0; // set the LED state to off
        digitalWrite(7, LOW); // turn off the LED on the board
        digitalWrite(8, LOW);
    }

}