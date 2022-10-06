//
// Created by Federico Moreno on 05/10/2022.
//
#include <Arduino.h>
boolean prendido = false;
void setup() {
    // initialize digital pin LED_BUILTIN as an output
    pinMode(2, INPUT_PULLUP);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);


}

// turn on with button
void loop() {
    delay(200);
    if (!digitalRead(2)) {
        prendido = !prendido;
    }
    digitalWrite(7, prendido);
    digitalWrite(8, prendido);


}