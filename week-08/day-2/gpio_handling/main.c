/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include "head.h"


#define USING_ODR


volatile uint32_t tme;
volatile int counter = 1;
int main(void)
{
    HAL_Init();
    init_gpiof_10_for_L();
    init_gpioa_8_for_B();
    tme = HAL_GetTick();
    while (1) {
    	if (counter % 6 == 0){
    		counter = 1;
			GPIOF->ODR ^= (1 << 10);
		}
    }
}



void EXTI9_5_IRQHandler(void)
{
	HAL_GPIO_EXTI_IRQHandler(button_handle.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (HAL_GetTick() - tme > 200){
		counter++;
		tme = HAL_GetTick();
	}
}



