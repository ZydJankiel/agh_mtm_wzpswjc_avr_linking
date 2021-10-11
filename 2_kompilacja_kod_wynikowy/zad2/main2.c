#include <avr/io.h>

void led_off(void){
   PORTD = 0x0F;
}

void led_on(void){
   PORTD = 0xFF;
}

void led_init(void){
   DDRB = 0x2;
   PORTB = 0x2;
   DDRD = 0xFF;
}

char cLedState = 1;

int main(void){
  led_init();
	
  while(1){
    if(cLedState == 1){
      led_on();
    }
    else{
      led_off();
    }
    cLedState = ~cLedState;
  }
}
