
/*Radwa*/
#include "stdint.h"
typedef volatile unsigned int vuint32_t ;

#define RCC_BASE                    0x40021000
#define GPIO_PORTA_BASE             0x40010800
#define RCC_APB2ENR                 *(vuint32_t *) (RCC_BASE + 0x18)

typedef union {
        vuint32_t all_fields;
        struct{
        vuint32_t reserved:13;
        vuint32_t P_13:1;
        }Pin;
}R_ODR_t;

typedef union {
        vuint32_t all_fields;
        struct{
        vuint32_t reserved:20;
        vuint32_t P_13:4;
        }Pin;
}R_CRH_t;

volatile R_ODR_t * R_ODR =  (volatile R_ODR_t * )(GPIO_PORTA_BASE + 0x0C) ;
volatile R_CRH_t * R_CRH =  (volatile R_CRH_t * )(GPIO_PORTA_BASE + 0x04) ;

int main(void)
{
    volatile int i;
    RCC_APB2ENR |= (1<<2);
    R_CRH->all_fields &= 0xFF0FFFFF;
    R_CRH->Pin.P_13 |= 0x02;
    while(1)
    {
        R_ODR->Pin.P_13 = 1;
        for(i=0;i<50000;i++);
        R_ODR->Pin.P_13 = 0;
        for(i=0;i<50000;i++);
    }
}