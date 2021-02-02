/*
 * main.c
 *
 *  Created on: Nov 3, 2020
 *      Author: squanixmachine
 */

#include <avr/io.h>

uint16_t analogRead(uint8_t port){
	ADMUX = (ADMUX & 0xF0) | (port & 0x0F);

	ADCSRA |= (1 << ADSC);

	while(ADCSRA & (1<<ADSC));

	return ADC;
}

void analogWrite(uint8_t pin, uint8_t val){

	DDRH |= (DDRH & 0x00) | (pin & 0xFF);

	  if(pin == 8) OCR4A = val;
	  if(pin == 16) OCR4B = val;
}

void pwm_init(){
	 TCCR4A |= _BV(COM4A1) | _BV(COM4B1) | _BV(WGM41) | _BV(WGM40);
	 TCCR4B |= _BV(WGM42) | _BV(CS40);
}

void adc_init(){
	ADMUX |= _BV(REFS0);
	ADCSRA |= _BV(ADPS2) | _BV(ADEN);
}

int main(){
	adc_init();
	pwm_init();

	uint16_t potval;
	uint8_t bringhtness;

	while(1){
		potval = analogRead(PK0);

		bringhtness = potval / (1023 / 255);

		analogWrite(8,bringhtness);
	}
}
