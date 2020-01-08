/*
 * GccApplication4.c
 *
 * Created: 08-01-2020 11:52:10
 *  Author: atulj
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	
	DDRC=0X01;
    while(1)
    {
        PORTC=0b00000001;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		PORTC = 0b00000010;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
    }
}