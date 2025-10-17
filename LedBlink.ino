#include <Arduino.h>
#include "include/led.hpp" 


LEDRGB ledRGB(12,11,10);
LED ledum(9);
LED ledois(8);
LED ledtres(7); 
LED ledquatro(6);
void setup(){
    Serial.begin(9600);
}

void loop(){
for (int r = 0; r <= 255; r += 255) {      
  for (int g = 0; g <= 255; g += 255) {
    for (int b = 0; b <= 255; b += 255) {
      ledRGB.setColor(r, g, b);
      delay(500);
    ledum.blink();
       delay(500);
     ledois.blink();
    delay(500);
         ledtres.blink();
         delay(500);
         ledquatro.blink();  
     }
   //O(N^3) eu conseguiria diminuir para O(N^2)? Eu pensei em passar os valores de r, g e b em um array e fazer um loop só, mas ainda não tive tempo de testar essa ideia.
}
}

}
