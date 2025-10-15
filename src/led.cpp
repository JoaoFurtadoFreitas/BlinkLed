#include "../include/led.hpp"

LED::LED(int pin) : pin(pin) {
    pinMode(pin, OUTPUT);
}

void LED::on(){
    digitalWrite(pin, HIGH);
}
void LED::off(){
    digitalWrite(pin, LOW);
}   
void LED::blink(){
    on();
    delay(200);
    off();
    delay(200);
}