/*
 * main.c
 *
 *  Created on: Nov 2, 2020
 *      Author: squanixmachine
 */

#include <avr/io.h>

uint16_t analogRead(uint8_t port){
	// Cara paling aman untuk memilih port ADC
	ADMUX = (ADMUX & 0xF0) | (port & 0x0F);
	// Mengaktifkan counter ADC
	ADCSRA |= (1 << ADSC);

	while(ADCSRA & (1 << ADSC));

	return ADC;
}

int main(){
	/*
	 * Konfigurasi pin, protokol, variabel
	 */
	ADMUX |= (1 << REFS0);	// Analog Reference
	ADCSRA |= (1 << ADPS2);	// Perscalar ADC 16bit
	ADCSRA |= (1 << ADEN);	// Mengaktifkan ADC

	uint16_t potval;

	while(1){
		/*
		 * Perulangan kode
		 */
		potval = analogRead(2);
	}
}

