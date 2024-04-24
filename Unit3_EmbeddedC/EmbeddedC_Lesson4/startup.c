/*Radwa*/
#include <stdint.h>
#include "Platform_Types.h"


extern int main(void);
void Reset_Handler();
extern int main(void);
void Default_Handler()
{
	Reset_Handler();
}
void NMI_Handler() __attribute__((weak,alias("Default_Handler")));;
void H_fault_Handler()__attribute__((weak,alias("Default_Handler")));;
static unsigned long stack_top[256];

extern uint32 _E_text;
extern uint32 _S_data; 
extern uint32 _E_data;
extern uint32 _S_bss;
extern uint32 _E_bss;

void (*const g_p_fn_vectors[])() __attribute__((section(".vectors"))) = {

	(void(*)()) ((unsigned long)stack_top + sizeof(stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_fault_Handler,
	
};

void Reset_Handler(){

//copy data section
 uint32 i;
 uint32 DATA_size= (uint8*)&_E_data-(uint8*)&_S_data;
 uint8 *P_src =(uint8*)&_E_text;
 uint8 *P_dst =(uint8*)&_S_data;
 for(i=0;i<DATA_size;i++)
 {
	 *((uint8*)P_dst++)=*((uint8*)P_src++);
	
 }
//init bss section
uint32 BSS_size=(uint8*)&_E_bss-(uint8*)_S_bss;
P_dst=(uint8*)&_S_bss;
for(i=0;i<BSS_size;i++)
{
	*((uint8*)P_dst++)=(uint8)0;
}
//call main()
	main();
}