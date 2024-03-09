#include "uart.h"

#define uart0dr *((volatile unsigned int *const)(unsigned int *)0x101f1000)

void Uart_Send_String(unsigned char *Tx_String) {
    while (*Tx_String != '\0') {
        uart0dr = (unsigned int)(*Tx_String);
        Tx_String++;
    }
}


