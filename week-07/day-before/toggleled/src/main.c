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
			

int main(void)
{
	HAL_Init();

	BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_GPIO);

	BSP_LED_Init(LED1);
	int is_on = 0;
	while (1) {
		if (BSP_PB_GetState(BUTTON_KEY)) {
			/* If button is pressed do something */
			if (is_on) {
				BSP_LED_Off(LED1);
				is_on = 0;
			} else {
				BSP_LED_On(LED1);
				is_on = 1;
			}
		}
	}

}
