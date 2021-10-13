#include <avr/io.h>

void led_init(void){
   DDRB = 0x2;
   PORTB = 0x2;
   DDRD = 0xFF;
}

void led_on(void){
   PORTD = 0xFF;
}

void led_off(void){
   PORTD = 0x0F;
}
