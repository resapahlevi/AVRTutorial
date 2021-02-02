/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: squanixmachine
 */

#include <avr/io.h>

int main(){
	DDRB |= _BV(DDD3);
	PORTB |= _BV(PD2);

	while(1){

		if((PIND & (1 << PD2)) == 0){
			PORTB |= _BV(PD3);
		}
		else{
			PORTB &= ~_BV(PD3);
		}
	}

}
