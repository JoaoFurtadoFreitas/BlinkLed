#include <Arduino.h>
#include "include/led.hpp" 


LED ledRGB(12,11,10);
void setup(){
    Serial.begin(9600);
}

void loop(){
ledRGB.setColor(255,0,0); // Red
delay(1000);
ledRGB.setColor(0,255,0); // Green
delay(1000);
ledRGB.setColor(0,0,255); // Blue
delay(1000);
ledRGB.setColor(255,255,0); // Yellow
delay(1000);
ledRGB.setColor(0,255,255); // Cyan 
delay(1000);
ledRGB.setColor(255,0,255); // Magenta
delay(1000);
ledRGB.setColor(255,255,255); // White
delay(1000);
}
//eu consigo fazer um for para varrer os possiveis valores de r, g e b?