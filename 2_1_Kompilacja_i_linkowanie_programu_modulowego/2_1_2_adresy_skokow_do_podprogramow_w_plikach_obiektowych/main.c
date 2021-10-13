#include "led.h"

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
