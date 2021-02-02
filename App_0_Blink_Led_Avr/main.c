/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: squanixmachine
 */


#include <avr/io.h>
#include <util/delay.h>

int main(){

	DDRD |= _BV(DDD2) | _BV(DDD3);
	DDRB |= _BV(DDB5);

	while(1){

		PORTD |= _BV(PD2);
		_delay_ms(500);
		PORTD &= ~_BV(PD2);
		_delay_ms(500);

		PORTD |= _BV(PD3);
		_delay_ms(500);
		PORTD &= ~_BV(PD3);
		_delay_ms(500);

		PORTB |= _BV(PB5);
		_delay_ms(500);
		PORTB &= ~_BV(PB5);
		_delay_ms(500);
	}
}
