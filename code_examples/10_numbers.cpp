#include <Arduino.h>


#include <Arduino.h>

//create a code to turn on the led with number 0 to 9
void setup() {
    for (int i=2; i<=8; i++) {
        pinMode(i, OUTPUT);
    }
};
// queremos que encienda primero un numero y despues otro del 0 al 9
// por cada numero tenemos que prender un segmento que lo represente

void loop() {
    //encender el numero 0, despues el 2 hasta el 9
    //encender el 0 necesito todos los segmentos menos el del medio
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    delay(500);
    //encender el 1
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    delay(500);
    //encender el 2
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 1);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 1);
    digitalWrite(8, 0);
    delay(500);
    //encender el 3
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 0);
    delay(500);
    //encender el 4
    digitalWrite(2, 1);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    delay(500);
    //encender el 5
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    delay(500);
    //encender el 6
    digitalWrite(2, 0);
    digitalWrite(3, 1);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    delay(500);
    //encender el 7
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    delay(500);
    //encender el 8
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    delay(500);
    //encender el 9
    digitalWrite(2, 0);
    digitalWrite(3, 0);
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 1);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    delay(500);
    




}
