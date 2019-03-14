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

TIM_HandleTypeDef TimHandle;

int main(void)
{
	__HAL_RCC_TIM2_CLK_ENABLE();
	HAL_TIM_Base_DeInit(&TimHandle);
	__HAL_TIM_SET_COUNTER(&TimHandle, 0);
	TimHandle.Instance = TIM2;
	TimHandle.Init.Prescaler = 5400 - 1; /* 108000000/54000=2000 -> speed of 1 count-up: 1/2000 sec = 0.5 ms */
	TimHandle.Init.Period = 6000 - 1; /* 6000 x 0.5 ms =  second period */
	TimHandle.Init.ClockDivision	= TIM_CLOCKDIVISION_DIV1;
	TimHandle.Init.CounterMode		= TIM_COUNTERMODE_UP;
	HAL_TIM_Base_Init(&TimHandle);
	HAL_NVIC_SetPriority(TIM2_IRQn, 1, 0);
	HAL_NVIC_EnableIRQ(TIM2_IRQn);

	while(1){
		//code here
	}
}

void TIM2_IRQHandler(void)
{
	HAL_TIM_IRQHandler(&TimHandle);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
	//interrupt handle code here
}


