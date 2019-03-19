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
#include "init_adc.h"
#include "sysclock.h"
#include "init_uart.h"

int adc_val;

int main(void)
{
	HAL_Init();
	SystemClock_Config();
	init_UART();
	init_ADC();
	while (1) {
		HAL_Delay(1000);
		HAL_ADC_Start(&adc_handle);
		if (HAL_ADC_PollForConversion(&adc_handle, 10) == HAL_OK) {
		   adc_val = HAL_ADC_GetValue(&adc_handle);
		   printf("ADC value: %d.\n", adc_val);
		}
	}

}
