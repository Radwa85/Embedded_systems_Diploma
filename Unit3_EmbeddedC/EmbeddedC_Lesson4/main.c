
/*Radwa*/

#define SYSCTL_RCGC2_R             ((*(volatile unsigned long *)0x400FE108))
#define GPIO_PORTF_DIR_R           ((*(volatile unsigned long *)0x40025400))
#define GPIO_PORTF_DEN_R           ((*(volatile unsigned long *)0x4002551C))
#define GPIO_PORTF_DATA_R          ((*(volatile unsigned long *)0x400253FC))

int main(void)
{
    SYSCTL_RCGC2_R =0x00000020;
    volatile unsigned long Delay_Count;
    for(Delay_Count=0;Delay_Count<200000;Delay_Count++) ;//wait after set clock
    
     GPIO_PORTF_DIR_R |=1<<3;
     GPIO_PORTF_DEN_R |=1<<3;

    
    while(1)
    {
        GPIO_PORTF_DATA_R |=1<<3; //set
        for(Delay_Count=0;Delay_Count<200000;Delay_Count++) ;
        GPIO_PORTF_DATA_R &=~(1<<3); //reset
        for(Delay_Count=0;Delay_Count<200000;Delay_Count++) ;    

    }

    return 0;
}