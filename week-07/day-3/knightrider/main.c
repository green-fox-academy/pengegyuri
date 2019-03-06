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

//#define USING_BSRR
#define USING_ODR

int main(void)
{
    HAL_Init();


    /* GPIOF Periph clock enable */
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOFEN;

    /* configure PI1 in output mode */
    GPIOF->MODER |= (GPIO_MODER_MODER10_0 | GPIO_MODER_MODER9_0 |
    		GPIO_MODER_MODER8_0 | GPIO_MODER_MODER7_0);

    /* ensure push pull mode selected default */
    GPIOF->OTYPER &= ~(GPIO_OTYPER_OT_10 | GPIO_OTYPER_OT_9 |
    		GPIO_OTYPER_OT_8 | GPIO_OTYPER_OT_7);

    /* ensure maximum speed setting (even though it is unnecessary) */
    GPIOF->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR10_0 | GPIO_OSPEEDER_OSPEEDR9_0 |
    		GPIO_OSPEEDER_OSPEEDR8_0 | GPIO_OSPEEDER_OSPEEDR7_0);

    /* ensure all pull up pull down resistors are disabled */
    GPIOF->PUPDR &= ~(GPIO_PUPDR_PUPDR10 | GPIO_PUPDR_PUPDR9 |
    		GPIO_PUPDR_PUPDR8 | GPIO_PUPDR_PUPDR7);

    uint32_t ext_led = (1 << 10);
    GPIOF->ODR |= ext_led;
    HAL_Delay(500);
    while (1) {
    	for (int i = 0; i < 3; i++) {
    		GPIOF->ODR ^= ext_led;
    		ext_led = (ext_led >> 1);
    		GPIOF->ODR |= ext_led;
			HAL_Delay(500);
		}
    	for (int i = 0; i < 3; i++) {
			GPIOF->ODR ^= ext_led;
			ext_led = (ext_led << 1);
			GPIOF->ODR |= ext_led;
			HAL_Delay(500);
    	}
    }
}

