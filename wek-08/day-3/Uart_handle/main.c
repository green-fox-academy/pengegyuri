
#include "stm32f7xx.h"
#include "stm32746g_discovery.h"
#include <string.h>

GPIO_InitTypeDef user_button_handle;
UART_HandleTypeDef uart_handle;

volatile int counter = 0;
volatile char buffer;

void init_user_button()
{
	// Initialize the user push button
	__HAL_RCC_GPIOI_CLK_ENABLE();

	user_button_handle.Pin = GPIO_PIN_11;
	user_button_handle.Pull = GPIO_NOPULL;
	user_button_handle.Speed = GPIO_SPEED_FAST;
	user_button_handle.Mode = GPIO_MODE_IT_RISING;	// Generate interrupt on the rising edge of the signal

	HAL_GPIO_Init(GPIOI, &user_button_handle);

	// Set the priority of the interrupt
	HAL_NVIC_SetPriority(EXTI15_10_IRQn, 4, 0);

	// Enable the interrupt
	HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);
}

void init_uart()
{
	__HAL_RCC_USART1_CLK_ENABLE();

	/* defining the UART configuration structure */
	uart_handle.Instance = USART1;
	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);

	HAL_NVIC_SetPriority(USART1_IRQn, 3, 0);
	HAL_NVIC_EnableIRQ(USART1_IRQn);
}

uint8_t tmp = 'c';

int main()
{
	HAL_Init();

	BSP_LED_Init(LED_GREEN);
	init_user_button();
	init_uart();

	HAL_UART_Receive_IT(&uart_handle, &buffer, 1);

	while (1) {
	}

	return 0;
}

void EXTI15_10_IRQHandler()
{
	HAL_GPIO_EXTI_IRQHandler(user_button_handle.Pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if (GPIO_Pin == user_button_handle.Pin) {
		counter++;
		BSP_LED_Toggle(LED_GREEN);
		HAL_UART_Transmit(&uart_handle, &tmp, 1, HAL_MAX_DELAY);
	}
}

void USART1_IRQHandler()
{
	HAL_UART_IRQHandler(&uart_handle);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == USART1) {
		BSP_LED_Toggle(LED_GREEN);
		HAL_UART_Receive_IT(&uart_handle, &buffer, 1);
	}
}
