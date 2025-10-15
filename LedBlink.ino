#include <Arduino.h>
#include "include/led.hpp" 

LED led(13); 

void setup(){
    Serial.begin(9600);
}

void loop(){
    led.blink();
}
