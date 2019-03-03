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
#include <math.h>
			
void flashingled(int freq);

int main(void)
{
	HAL_Init();

	//BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);
	int freq;
	int count = 0;
	int is_up = -1;
	while (1) {
		freq = 2000 / (1 << count);
		for	(int i = 0; i < 3; i++) {
			flashingled(freq);
		}
		if (!(count % 3)){
			is_up *= -1;
		}
		count += is_up;
	}
}

void flashingled(int freq)
{
	BSP_LED_On(LED1);
	HAL_Delay(freq);
	BSP_LED_Off(LED1);
	HAL_Delay(freq);
}



