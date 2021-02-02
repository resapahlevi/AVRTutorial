/*
 * main.c
 *
 *  Created on: Nov 5, 2020
 *      Author: squanixmachine
 */

/*
 * 	DDD0 DDD1 DDD2 DDD3 DDD4 DDD5 DDD6 DDD7
 *	PD0	PD1	PD2	PD3	PD4	PD5	PD6	PD7
 *	0	1	2	3	4	5	6	7
 *			I	I	O	O
 *
 *	0	0	1	1	0	0	0	0
 *		3				0
 *
 *	DDRx -> Data Direction Register
 *		x -> blok pin
 *
 *	DDRD = 0b00110000
 *
 *	DDRD = 0x30
 *
 *	DDRD = (1 << DDD2);
 *	DDRD = (1 << DDD3);
 *		DDRD = (1 << DDD2) | (1 << DDD3);
 *			00000100
 *			00001000
 *					OR
 *			00001100
 *
 *	DDRD = _BV(DDD2) | _BV(DDD3);
 */

#include <avr/io.h>

int main(){

	DDRD |= _BV(DDD2) | _BV(DDD3);

	/*
	 * DDRD default nya isinya 00000000
	 * 		 A |= B -> A = A | B
	 *
	 * 	DDRD |= _BV(DDD2) | _BV(DDD3); -> DDRD = DDRD | _BV(DDD2) | _BV(DDD3);
	 * 												00000000
	 * 												00000100
	 * 												00001000
	 * 														OR
	 * 												00001100
	 *
	 */

	PORTD |= _BV(PORTD2) | _BV(PORTD3);

	while(1){

	}
}


