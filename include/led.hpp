#ifndef LED_HPP
#define LED_HPP

#include <Arduino.h>

class LED {
    
    int pin;
    void on();
    void off();

    public:
    LED(int pin);
    void blink();
};

#endif