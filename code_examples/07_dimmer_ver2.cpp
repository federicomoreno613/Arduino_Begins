#include <Arduino.h>
int i=0;
int dimmer=1;
unsigned long timer=0;

void setup(){
    pinMode(6, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    if (millis() - timer >5){
        analogWrite(6,i);
        i = i + dimmer;
        timer = millis();
        if (i==255 || i == 0) {dimmer*=-1;}
        Serial.println(i);
    }
}