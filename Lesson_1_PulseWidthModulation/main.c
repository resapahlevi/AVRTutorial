#include <avr/io.h>
#include <util/delay.h>

#define PWM_Delay 10

void analogWrite(uint8_t val){
	uint8_t i;
	PORTB |= _BV(PB5) ;

	for(i = 0; i < 255; i++){
		if( i >= val){
			PORTB &= ~_BV(PB5);
		}
		_delay_us(PWM_Delay);
	}
}

int main(void){
	uint8_t bval = 0;
	int8_t dir = 1;

	DDRB = 0xff;

	while(1){
		if(bval == 0){
			dir = 1;
		}
		if (bval == 255){
			dir = -1;
		}
		bval += dir;
		analogWrite(bval);
	}
}
