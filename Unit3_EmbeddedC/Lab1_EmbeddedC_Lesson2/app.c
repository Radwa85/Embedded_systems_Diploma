#include "uart.h"
unsigned char string_buff [50]="Learn in depth: Radwa";
void  main(void)
{
	Uart_Send_String (string_buff);
	
}