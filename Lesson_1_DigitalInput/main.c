#include <avr/io.h>


int main() {
    DDRD &= _BV(DDD2);
	PORTD |= _BV(PD2);		// Internal Pull Up
	DDRB |= _BV(DDB5);

	while(1){
		if((PIND ^ (1 << PD2)) == 1) {
			PORTB |= _BV(PORTB5);
		}
		else{
			PORTB &= ~_BV(PORTB5);
		}
	}
}
