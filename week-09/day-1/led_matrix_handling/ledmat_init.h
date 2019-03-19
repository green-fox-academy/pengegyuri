/*
 * ledmat_init.h
 *
 *  Created on: Mar 18, 2019
 *      Author: gyuri
 */

#ifndef LEDMAT_INIT_H_
#define LEDMAT_INIT_H_

#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include "sysclock.h"
#include "i2c_gpiob.h"

#define LCDMATRIX_ADDRESS (0b1110000 << 1)



void ledmat_init();

#endif /* LEDMAT_INIT_H_ */
