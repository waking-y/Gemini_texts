#ifndef __LED_H_
#define __LED_H_

#include "stm32f4xx.h"

void LED_Init(void);
void LED_On(uint16_t GPIO_Pin);
void LED_Off(uint16_t GPIO_Pin);

#endif /* __LED_H_ */
