/*
 * GccApplication1.c
 *
 * Created: 07-01-2020 15:02:32
 *  Author: atulj
 */ 


#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA=DDRA & ~(1<<0);
	DDRD=DDRD | 1<<0;
    while(1)
    {
		if(PIND & (1<<0))
		{
			PORTA=PORTA | (1<<0);
			
			_delay_ms(1000);
			
		}
		else
		{
		PORTA = PORTA & ~(1<<0);
		
		_delay_ms(1000); 
			
		}
		
        //TODO:: Please write your application code 
    }
}