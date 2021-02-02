/*
 * main.c
 *
 *  Created on: Nov 2, 2020
 *      Author: squanixmachine
 */

#include <avr/io.h>
#include <util/delay.h>

int main(){
	/*
	 * Konfigurasi pin, protokol, variabel
	 */
	DDRD |= _BV(DDD3);		// Set pin PD3 sebagai output (diset 1)

	while(1){
		/*
		 * Perulangan kode
		 */
		PORTD |= _BV(PORTD3);
		_delay_ms(500);
		PORTD &= ~_BV(PORTD3);
		_delay_ms(500);

		loop_until_bit_is_set();
	}
}

