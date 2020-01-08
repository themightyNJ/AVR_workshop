#include<stdio.h>
#include<util/delay.h>
void main()
{
	DDRA = DDRA | 1<<0; //DDRA=0X00;
	DDRC = DDRC & ~(1<<0); //DDRC=0X01;
	while(1)
	{
		for(int j=0;j<=7;j++)
		{
		for(int i=0;i<=7;i++)
		{
			PORTA= 1<<i; 
					
		}
		PORTC=1<<j;
	}
	
	
	
}
}