#include <Arduino.h>
#include "include/led.hpp" 

LED ledInterno(13); 

void setup(){
    Serial.begin(9600);
}

void loop(){
    ledInterno.blink();
}
