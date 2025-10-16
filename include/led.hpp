#ifndef LED_HPP
#define LED_HPP

#include <Arduino.h>

class LED {
    
    int pinR;
    int pinG;
    int pinB;
    void on();
    void off();

    public:
    LED(int pinR, int pinG, int pinB);
    void blink();
    void setColor(int r, int g, int b);
};

#endif