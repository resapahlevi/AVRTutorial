#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(INT0_vect){
	if((PIND & (1<<PD2)) == 0){
		PORTB |= _BV(PORTB5);
	}
	else{
		PORTB &= ~_BV(PORTB5);
	}
}

void interrupt0(void){
	EIMSK |= _BV(INT0);
	EICRA |= _BV(ISC00);
	sei();
}

int main(){
	DDRB |= _BV(DDB5);
	PORTD |= _BV(PD2);

	interrupt0();

	while(1){

	}
}

