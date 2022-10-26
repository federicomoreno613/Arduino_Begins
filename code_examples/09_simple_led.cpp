
// led with number 1 to 9 to turn on
// configures the pin as output
// we need to use void setup that means that we need to configure the pin as output

void setup() {
    for (int i=2; i<=8; i++) {
        pinMode(i, OUTPUT);
    }
};
// encender led
void loop (){
    for (int i=2; i<=8; i++) {
        digitalWrite(i, HIGH);
        delay(100);
    }
    for (int i=2; i<=8; i++) {
        digitalWrite(i, LOW);
        delay(100);
    }
};