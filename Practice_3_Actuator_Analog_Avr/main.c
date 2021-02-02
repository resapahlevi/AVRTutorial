/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: squanixmachine
 */

#include <avr/io.h>
#include <util/delay.h>


void analogWrite(uint8_t pin, uint8_t val){

	DDRB |= (DDRB & 0x00) | (pin & 0xFF);

	if(pin == 2) OCR1C = val;
	if(pin == 4) OCR1D = val;
}

void pwm_init(){
	TCCR1A |= _BV(COM1A1) | _BV(COM1B1) | _BV(WGM12) | _BV(WGM10);
	TCCR1B |= _BV(WGM12) | _BV(CS10);
}

int main() {
	/*
	 * Konfigurasi pin, protokol, variabel
	 */

	pwm_init();

	uint8_t brightness = 0x00;

	while(1){
		/*
		 * Perulangan kode
		 */
		for(brightness = 0x00; brightness < 0xff; ++brightness){
			analogWrite(2,brightness);
			analogWrite(4,brightness);
			_delay_ms(10);
		}

		for(brightness = 0xff ; brightness > 0x00; --brightness){
			analogWrite(2,brightness);
			analogWrite(4,brightness);
			_delay_ms(10);
		}
	}
}
