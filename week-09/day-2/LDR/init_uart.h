/*
 * init_uart.h
 *
 *  Created on: Mar 19, 2019
 *      Author: gyuri
 */

#ifndef INIT_UART_H_
#define INIT_UART_H_
#define UART_PUTCHAR int __io_putchar(int ch)
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"

UART_HandleTypeDef UartHandle;

void init_UART();

#endif /* INIT_UART_H_ */
