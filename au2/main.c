/*
 * GccApplication2.c
 *
 * Created: 22/08/2021 10:37:38
 * Author : luiza
 * github:https://github.com/luizacariani/Programacaodehardware2021/tree/main/au2
 */ 

#include <avr/io.h>
#include <avr/delay.h>

char estadoPino;

main(){
	DDRB |= (1 << DDB4);
	estadoPino = PINC4;

	char LEDestadoPino(char pino){
		pino = PINC4;
		return pino;
	}

	while(1){
		PORTB |= (1 << 4);
		_delay_ms(2000);
		PORTB &= (1 << 4);
		_delay_ms(2000);
	}
};