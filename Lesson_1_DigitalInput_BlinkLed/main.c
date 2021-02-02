#include <avr/io.h>
#include <util/delay.h>

static inline void blinkLed(uint8_t PINx){
	PORTB |= _BV(PINx);
	_delay_ms(1000);
	PORTB &= ~_BV(PINx);
}

int main(){
	PORTB |= _BV(PB0);
	DDRB |= _BV(DDB5);

	while(1){
		if ((PINB & (1<<PB0))== 0){
			blinkLed(PORTB5);
		}
		else{

		}
	}
}
