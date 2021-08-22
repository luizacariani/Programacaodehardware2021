/*
 * GccApplication2.c
 *
 * Created: 22/08/2021 10:37:38
 * Author : luiza
 * github:https://github.com/luizacariani/Programacaodehardware2021/tree/main/au2
 *Programação que acende o led quando o pino é abaixado.
 *O parametro estPino é o estado do pino, o parametro LEDestPino é a relação entre o pino e o LED
 */ 

#include <avr/io.h>
#include <avr/delay.h>

char estadoPino;

main(){
	DDRB |= (1 << DDB4);
	estPino = PINC4;

	char LEDestPino(char pino){
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