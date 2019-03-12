#include "head.h"


void init_gpiof_10_for_L()
{
	/* GPIOF Periph clock enable */
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;

	/* configure PI1 in output mode */
	GPIOF->MODER |= GPIO_MODER_MODER10_0;

	/* ensure push pull mode selected default */
	GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10);

	/* ensure maximum speed setting (even though it is unnecessary) */
	GPIOF->OSPEEDR |= GPIO_OSPEEDER_OSPEEDR10_0;

	/* ensure all pull up pull down resistors are disabled */
	GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR10);
}

void init_gpioa_8_for_B()
{
	__HAL_RCC_GPIOA_CLK_ENABLE(); /* enable the GPIOA clock */

	button_handle.Pin = GPIO_PIN_8; /* the pin is the 8 */
	button_handle.Pull = GPIO_NOPULL; // pulled to ground
	button_handle.Speed = GPIO_SPEED_HIGH; /* port speed to low */
	/* Here is the trick: our mode is interrupt on rising edge */
	button_handle.Mode = GPIO_MODE_IT_RISING;

	HAL_GPIO_Init(GPIOA, &button_handle);

	/* assign the intermediate priority to our interrupt line */
	HAL_NVIC_SetPriority(EXTI9_5_IRQn, 10, 0);

	/* tell the interrupt handling unit to process our interrupts */
	HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);
}

