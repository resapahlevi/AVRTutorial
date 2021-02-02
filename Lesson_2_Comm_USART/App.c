#include <avr/io.h>
#include "USART.h"

int main(void){
	char receiveString;

	DDRB |= _BV(DDB5);
	initUSART();
	printString("Hello World");

	while(1){
		receiveString = receiveByte();
		transmitByte(receiveString);
		PORTB |= _BV(receiveString);
	}

}
