/*
 * GccApplication2.c
 *
 * Created: 08-01-2020 10:52:44
 *  Author: atulj
 */ 


#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC=0XFF;
	DDRA=0XFF;
	unsigned char arr[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X67};
    while(1)
    {
      for(int j=0;j<=9;j++)
	   {
		    PORTA= arr[j];
			//_delay_ms(1000);
		   for(int i=0;i<=9;i++)
		   {
			   PORTC=arr[i];
			   _delay_ms(1000);
			  
	    //TODO:: Please write your application code 
           }
        }
	}
}	