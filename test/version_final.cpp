
#include <Arduino.h>
bool seq =0;
void setup() {
    // initialize digital pin LED_BUILTIN as an output
    pinMode(2, INPUT_PULLUP);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}
// track seq numbers of times I use the bottom until 6. First seq is 1, pin 7 HIGH, pin 8 LOW, seq 2 PIN 7 LOW, PIN 8 High, seq3 both pins high, seq 4 blink in 500 ms, seq 5 both low
void loop() {
    // seq is equal number of times buttom is press
    if (digitalRead(2)==LOW && seq==0) { // if the button is pressed and the LED is off
        seq=1; // set the LED state to on
        digitalWrite(7, !digitalRead(7)); // turn on the LED on the board
        digitalWrite(8, !digitalRead(8)); // turn on the LED on the board
    }
    else if (digitalRead(2)==HIGH && seq==1) { // if the button is not pressed and the LED is on
        seq=2; // set the LED state to off
        digitalWrite(7, LOW); // turn off the LED on the board
        digitalWrite(8, HIGH);
    }
    else if (digitalRead(2)==LOW && seq==2) { // if the button is not pressed and the LED is on
        seq=3; // set the LED state to off
        digitalWrite(7, HIGH); // turn off the LED on the board
        digitalWrite(8, LOW);
    }
    else if (digitalRead(2)==HIGH && seq==3) { // if the button is not pressed and the LED is on
        seq=4; // set the LED state to off
        digitalWrite(7, HIGH); // turn off the LED on the board
        digitalWrite(8, HIGH);
    }
    else if (digitalRead(2)==LOW && seq==4) { // if the button is not pressed and the LED is on
        seq=5; // set the LED state to off
        digitalWrite(7, LOW); // turn off the LED on the board
        digitalWrite(8, LOW);
    }
    else if (digitalRead(2)==HIGH && seq==5) { // if the button is not pressed and the LED is on
        seq=6; // set the LED state to off
        digitalWrite(7, HIGH); // turn off the LED on the board
        digitalWrite(8, HIGH);
    }
    else if (digitalRead(2)==LOW && seq==6) { // if the button is not pressed and the LED is on
        seq=0; // set the LED state to off
        digitalWrite(7, LOW); // turn off the LED on the board
        digitalWrite(8, LOW);
    }
    }