#ifndef LED_HPP
#define LED_HPP

#include <Arduino.h>

class LED {
    
   
    int pin;
    void on();
    void off();

    public:
    LED();
    LED(int pin);
    void blink();
   
};

class LEDRGB {
    private:
    int pinR;
    int pinG;
    int pinB;

    public:
    LEDRGB(int pinR, int pinG, int pinB);
    void setColor(int r, int g, int b);
};

#endif