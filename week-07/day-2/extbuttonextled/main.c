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


/* create a config structure */
GPIO_InitTypeDef push_button;
GPIO_InitTypeDef LEDS;

int main(void)
{
    HAL_Init();

    BSP_LED_Init(LED1);

    __HAL_RCC_GPIOF_CLK_ENABLE();				/* we need to enable the GPIOA port's clock first */

    push_button.Pin = GPIO_PIN_10;			/* this is about PIN 10 */
    push_button.Mode = GPIO_MODE_INPUT;			/* configure as input */
    /* we don't need internal pull-up or -down resistor, we use an external one */
    push_button.Pull = GPIO_NOPULL;
    push_button.Speed = GPIO_SPEED_HIGH;		/* high-speed */

    LEDS.Pin = GPIO_PIN_9;		/* setting up pin at PIN 9| operator */
	LEDS.Mode = GPIO_MODE_OUTPUT_PP;		/* configure as output, in push-pull mode */
	LEDS.Pull = GPIO_NOPULL;			/* we don't need internal pull-up or -down resistor */
	LEDS.Speed = GPIO_SPEED_HIGH;		/* we need a high-speed output */

    HAL_GPIO_Init(GPIOF, &push_button);	/* initialize the pin on GPIOF port */
    HAL_GPIO_Init(GPIOF, &LEDS);

    while (1) {
        if (HAL_GPIO_ReadPin(GPIOF, push_button.Pin)) {


        	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);	/* setting the pin to 1 */
			HAL_Delay(500);                                         /* wait a second */

			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);	/* setting the pin to 0 */
			HAL_Delay(500);                                         /* wait a second */
        }
    }
}
