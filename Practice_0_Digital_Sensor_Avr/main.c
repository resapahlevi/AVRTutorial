/*
 * main.c
 *
 *  Created on: Nov 2, 2020
 *      Author: squanixmachine
 */

#include <avr/io.h>

int main(){
	/*
	 * Konfigurasi pin, protoko, variabel
	 *
	 * Arduino = void setup
	 */

	DDRD 	&= _BV(DDD2);	// Set PD2 sebagai input
	PORTD 	|= _BV(PD2);	// Internal pull up resistor PD2

	while(1){
		/*
		 * Perulangan kode
		 *
		 * Arduino = void loop
		 */
		uint8_t pirread;
		pirread = PIND & (1 << PD2);

		if(pirread == 1){

		}
		else{

		}
	}
}
