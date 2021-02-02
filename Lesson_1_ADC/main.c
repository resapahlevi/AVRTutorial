#include <avr/io.h>

static void InitADC(void){
	ADMUX 	|= _BV(REFS0);
	ADCSRA 	|= _BV(ADPS2) | _BV(ADPS1) | _BV(ADPS0) | _BV(ADEN);
}
uint16_t readAnalog(uint16_t ch){
	// ATMEGA328P only have 5 analog channel
	ch &= 0x07;
	ADMUX = (ADMUX & 0xF8)|ch;

	ADCSRA |= (1 << ADSC);
	while((ADCSRA & _BV(ADSC)));
	return ADC;
}
int main(void){
	uint16_t adcval;

	InitADC();
	DDRB |= _BV(DDB5);

	while(1){
		adcval = readAnalog(2);

		if (adcval > 512){
			PORTB |= _BV(PORTB5);
		}
		else{
			PORTB &= ~_BV(PORTB5);
		}
	}
}
