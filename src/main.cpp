#include <Arduino.h>


#include <Arduino.h>

//create a code to turn on the led with number 0 to 9
void setup() {
    for (int i=2; i<=8; i++) {
        pinMode(i, OUTPUT);
    }
};

// crear un arreglo para reemplazar el codigo repetitivo
// seria asi el arreglo: tipo de variable + nombre de variable
// arreglo de los numeros simples
int numeros[10][7] = {
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
//prendo el led en funcion del arreglo
void loop() {
    for (int i=0; i<10; i++) {
        for (int j=2; j<=8; j++) {
            digitalWrite(j, numeros[i][j-2]);
        }
        delay(500);
    }
}