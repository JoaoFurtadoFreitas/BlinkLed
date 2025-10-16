#include "../include/led.hpp"

// LED::LED(int pin) : pin(pin) {
//     pinMode(pin, OUTPUT);
// }
LED::LED(int pinR, int pinG, int pinB) : pinR(pinR), pinG(pinG), pinB(pinB) {
    pinMode(pinR, OUTPUT);
    pinMode(pinG, OUTPUT);
    pinMode(pinB, OUTPUT);
}

// void LED::on(){
//     digitalWrite(pin, HIGH);
// }
// void LED::off(){
//     digitalWrite(pin, LOW);
// }   
// void LED::blink(){
//     on();
//     delay(200);
//     off();
//     delay(200);
// }
void LED::setColor(int r, int g, int b){
    analogWrite(pinR, r);
    analogWrite(pinG, g);
    analogWrite(pinB, b);
}