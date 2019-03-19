/*
 * init_uart.c
 *
 *  Created on: Mar 19, 2019
 *      Author: gyuri
 */
#include "init_uart.h"

void init_UART()
{
	__HAL_RCC_USART1_CLK_ENABLE();
    UartHandle.Instance = USART1;
    UartHandle.Init.BaudRate = 115200;
    UartHandle.Init.WordLength = UART_WORDLENGTH_8B;
    UartHandle.Init.StopBits = UART_STOPBITS_1;
    UartHandle.Init.Parity = UART_PARITY_NONE;
    UartHandle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    UartHandle.Init.Mode = UART_MODE_TX_RX;
    BSP_COM_Init(COM1, &UartHandle);
}

UART_PUTCHAR
{
    HAL_UART_Transmit(&UartHandle, (uint8_t*) &ch, 1, 0xFFFF);
    return ch;
}
