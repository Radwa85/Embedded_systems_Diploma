

typedef volatile unsigned int vuint32_t ;
#include<stdint.h>

#define Rcc_Base    (*((volatile uint32_t*) 0x40021000))
#define GPIO_Port_A (*((volatile uint32_t*) 0x40010800))
#define Rcc_APB2ENR (*((volatile uint32_t*)(Rcc_Base + 0x18)))
#define GPIOA_ODR   (*((volatile uint32_t*)(GPIO_Port_A + 0x0C)))
#define GPIOA_CRH   (*((volatile uint32_t*)(GPIO_Port_A + 0x04)))

typedef union {
    vuint32_t all_fields;
    struct {
        vuint32_t reserve : 13;
        vuint32_t pin13   : 1;
    } pin;
} R_ODR_t;

volatile R_ODR_t *R_ODR = (volatile R_ODR_t*)(0x4001080C);


int main(void) {
    Rcc_APB2ENR |= 1 << 2;
    GPIOA_CRH &= 0xFF0FFFFF; // Clear configuration for pin 13
    GPIOA_CRH |= 0x00200000; // Configure pin 13 as output

    while (1) {
        // Turn on LED (pin 13)
    	//GPIOA_ODR |=1<<13;
        R_ODR->pin.pin13 = 1;
        for (int i = 0; i < 5000; i++); // Delay

        // Turn off LED (pin 13)
        //GPIOA_ODR &=~(1<<13)
        R_ODR->pin.pin13 = 0;
        for (int i = 0; i < 5000; i++); // Delay
    }

    return 0;
}
