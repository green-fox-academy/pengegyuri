/*
 * init_adc.h
 *
 *  Created on: Mar 19, 2019
 *      Author: gyuri
 */

#ifndef INIT_ADC_H_
#define INIT_ADC_H_
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
GPIO_InitTypeDef gpio_adc_pin;
ADC_HandleTypeDef adc_handle;
ADC_ChannelConfTypeDef adc_channel_config;

void init_ADC();

#endif /* INIT_ADC_H_ */
