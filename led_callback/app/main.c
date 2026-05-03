#include "stm32f4xx.h"
#include "led.h"

static void cpu_delay(void)
{
    volatile uint32_t i = 0;
    for (i = 0; i < 10000000; i++)
    {
        __asm("nop");
    }
}

int main(void)
{
    LED_Init();
    
    while(1)
    {
		LED_On(GPIO_Pin_9);
		LED_Off(GPIO_Pin_10);
		
		cpu_delay(); // Delay
		
		LED_Off(GPIO_Pin_9);
		LED_On(GPIO_Pin_10);
		
		cpu_delay(); // Delay
		
	}
	
}
