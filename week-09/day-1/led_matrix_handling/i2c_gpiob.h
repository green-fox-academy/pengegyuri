/*
 * i2c_gpiob.h
 *
 *  Created on: Mar 18, 2019
 *      Author: gyuri
 */

#ifndef I2C_GPIOB_H_
#define I2C_GPIOB_H_
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"


I2C_HandleTypeDef I2C_handle;
GPIO_InitTypeDef gpio_init;

void i2c_ongpiob_init();

#endif /* I2C_GPIOB_H_ */
