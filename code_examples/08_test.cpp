#include <Arduino.h>
int veces = 0;

int buttonState;
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;

unsigned long debounceDelay = 50;
unsigned long timer = 0;
unsigned long tick=0;
int i=0;
int dimmer=1;

boolean led1 = 0;
boolean led2 = 0;
unsigned long now;
void setup() {
    Serial.begin(9600);
    pinMode(2, INPUT_PULLUP);
    pinMode(5, OUTPUT);
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
            digitalWrite(5, true) ;
            digitalWrite(6, false) ;
            break;
        case 2:
            digitalWrite(5, false) ;
            digitalWrite(6, true) ;
            break;
        case 3:
            digitalWrite(5, true);
            digitalWrite(6, true);
            break;

        case 4:
            digitalWrite(5, true) ;
            digitalWrite(6, true) ;
            delay(50);
            digitalWrite(5, false);
            digitalWrite(6, false);
            delay(50);
            break;
        case 5:
            if (millis() - timer >5){
                analogWrite(6,i);
                analogWrite(5,i);
                i = i + dimmer;
                timer = millis();
                if (i==255 || i == 0) {dimmer*=-1;}
            }
            break;
        case 6:
            digitalWrite(5, false);
            digitalWrite(6, false) ;
            break;
        default:
            veces = 1;
    }
}
