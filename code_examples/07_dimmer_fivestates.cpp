#include <Arduino.h>
int veces = 0;

int buttonState;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;

unsigned long debounceDelay = 50;
unsigned long timer = 0;
unsigned long tick=0;

boolean led1 = 0;
boolean led2 = 0;
unsigned long now;
void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
}

boolean debounce(int pinToRead, int debDelay) {
    int reading = digitalRead(pinToRead);

    if (reading != lastButtonState) {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debDelay) {
        if (reading != buttonState) {
            buttonState = reading;
            if (buttonState == LOW) {
                return true;
            }
        }
    }

    lastButtonState = reading;

    return false;
}

void loop() {
    if (debounce(2, debounceDelay)){
        veces++;
        Serial.println(veces);
    }

    switch(veces) {
        case 0: break;
        case 1:
            digitalWrite(7, true) ;
            digitalWrite(6, false) ;
            break;
        case 2:
            digitalWrite(7, false) ;
            digitalWrite(6, true) ;
            break;
        case 3:
            digitalWrite(7, true);
            digitalWrite(6, true);
            break;

        case 4:
            tick = millis()/10 % 512;
            if (tick > 255) {
                tick = 511 - tick;
            }
            analogWrite(7, tick) ;
            analogWrite(6, tick) ;
            break;
        case 5:
            digitalWrite(7, false);
            digitalWrite(6, false) ;
            break;
        default:
            veces = 1;
    }
}
