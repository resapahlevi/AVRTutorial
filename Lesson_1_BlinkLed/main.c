#include <avr/io.h>
#include <util/delay.h>

int main (){
	DDRB |= _BV(DDB5);			// Describe The PB5 to become output. This line is equal to (1<<DDB5) or 0b00100000

	while(1){					// Loop forever
		PORTB |= _BV(PORTB5);	// Set PORTB on PB5 to 1. This line is equal to (1<<PORTB5) or 0b00100000

		_delay_ms (500);		// delay for 500 ms

		PORTB &= ~_BV(PORTB5);	// set PORTB &= inverse(1<<PORTB5)

		_delay_ms(500);			// delay for 500 ms
	}
	return 0;
}
