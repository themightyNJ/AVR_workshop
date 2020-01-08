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
	DDRD=DDRD & ~(1<<0);
	DDRA=DDRA | 1<<0;
    while(1)
    {
		if(PIND & (1<<0))
		{
			PORTA=PORTA | (1<<0);
			
			
			
		}
		else
		{
		PORTA = PORTA & ~(1<<0);
		
		
			
		}
		
        //TODO:: Please write your application code 
    }
}