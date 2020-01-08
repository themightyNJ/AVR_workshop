/*
 * GccApplication5.c
 *
 * Created: 08-01-2020 14:07:27
 *  Author: atulj
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF;
    while(1)
    {
		PORTC = 0b00000001;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(500);
		PORTC = 0b00000010;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(500);
    }
}