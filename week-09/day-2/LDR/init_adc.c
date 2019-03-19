/*
 * init_adc.c
 *
 *  Created on: Mar 19, 2019
 *      Author: gyuri
 */

#include "init_adc.h"
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

void init_ADC()
{
//gpio for adc
	__HAL_RCC_GPIOA_CLK_ENABLE();
	gpio_adc_pin.Mode = GPIO_MODE_ANALOG;
	gpio_adc_pin.Pin = GPIO_PIN_0;
	gpio_adc_pin.Speed = GPIO_SPEED_FAST;
	gpio_adc_pin.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOA, &gpio_adc_pin);
//adc
	__HAL_RCC_ADC3_CLK_ENABLE();
	adc_handle.Instance = ADC3;
	HAL_ADC_Init(&adc_handle);

	adc_channel_config.Channel = ADC_CHANNEL_0;
	adc_channel_config.SamplingTime = ADC_SAMPLETIME_56CYCLES;
	HAL_ADC_ConfigChannel(&adc_handle, &adc_channel_config);
}
