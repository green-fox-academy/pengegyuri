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

    HAL_GPIO_Init(GPIOF, &push_button);			/* initialize the pin on GPIOF port */

    while (1) {
        if (HAL_GPIO_ReadPin(GPIOF, push_button.Pin)) {
            /* If button is pressed do something */
            BSP_LED_Toggle(LED1);
            HAL_Delay(200);
        }
    }
}
