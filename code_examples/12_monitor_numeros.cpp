#include <Arduino.h>
//create a code to turn on the led with number 0 to 9
void setup() {
    for (int i=2; i<=8; i++) {
        pinMode(i, OUTPUT);
        //serial begin
        Serial.begin(9600);
    }
};

// crear un arreglo para reemplazar el codigo repetitivo
// seria asi el arreglo: tipo de variable + nombre de variable
// arreglo de los numeros simples
bool numeros[10][7] = {
        {0,0,0,0,0,0,1}, //0
        {1,0,0,1,1,1,1}, //1
        {0,0,1,0,0,1,0}, //2
        {0,0,0,0,1,1,0}, //3
        {1,0,0,1,1,0,0}, //4
        {0,1,0,0,1,0,0}, //5
        {0,1,0,0,0,0,0}, //6
        {0,0,0,1,1,1,1}, //7
        {0,0,0,0,0,0,0}, //8
        {0,0,0,0,1,0,0}  //9
};

//vamos a trasmitir un numero por el puerto serial sin un loop
int incomingByte = 1; // for incoming serial data

void loop() {
    // send data only when you receive data:
    if (Serial.available() > 0) {
        // read the incoming byte:
        int num = Serial.read();
        num -= 48;
        if (num >= 0 && num <= 9) {
            for (int j=0; j<7; j++) {
                digitalWrite(j+2, numeros[num][j]);
            }
        }

        }
    }
