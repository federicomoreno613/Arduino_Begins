#include <Arduino.h>

void setup() {

    pinMode(6, OUTPUT);
}

void loop(){ //this is the main loop
    for (int i = 0; i<255; i++) { //this is the loop that makes the LED fade in and out
        analogWrite(6,i); //this sets the brightness of the LED
        delay(20);
    }
    for (int i = 255; i>0; i--) {
        analogWrite(6,i);
        delay(20);
    }
}