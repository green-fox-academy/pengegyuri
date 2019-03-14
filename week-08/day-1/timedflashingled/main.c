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



GPIO_InitTypeDef LED_config;

/* the timer's config structure */
TIM_HandleTypeDef TimHandle;

uint16_t tim_val = 0;		/* variable to store the actual value of the timer's register (CNT) */
uint16_t seconds = 0;		/* variable to store the value of ellapsed seconds */

static void Error_Handler(void);
static void SystemClock_Config(void);

int main(void)
{

	HAL_Init();

	__HAL_RCC_GPIOF_CLK_ENABLE();
	LED_config.Pin = GPIO_PIN_10;
	LED_config.Mode = GPIO_MODE_OUTPUT_PP;;	/* configure as output, in push-pull mode */
	LED_config.Pull = GPIO_NOPULL;
	LED_config.Speed = GPIO_SPEED_HIGH;
	//LED_config.Alternate = GPIO_AF1_TIM2;	/* this alternate function we need to use TIM2 in output compare mode */
	HAL_GPIO_Init(GPIOF, &LED_config);


    /* this function call sets the timers input clock to 108 Mhz (=108000000 Hz) */
    SystemClock_Config();


    /* we need to enable the TIM2 */
    __HAL_RCC_TIM2_CLK_ENABLE();

    TimHandle.Instance			= TIM2;
    TimHandle.Init.Prescaler		= 10800 - 1;	/* 108000000/10800=10000 -> speed of 1 count-up: 1/10000 sec = 0.1 ms */
    TimHandle.Init.Period		= 10000 - 1;	/* 10000 x 0.1 ms = 1 second period */
    TimHandle.Init.ClockDivision	= TIM_CLOCKDIVISION_DIV1;
    TimHandle.Init.CounterMode		= TIM_COUNTERMODE_UP;

    /* configure the timer */
    HAL_TIM_Base_Init(&TimHandle);

    /* starting the timer */
    HAL_TIM_Base_Start(&TimHandle);

    while (1) {

        /* blinking the user LED with 1 Hz (1 on and 1 off per seconds) */
        tim_val = __HAL_TIM_GET_COUNTER(&TimHandle);
        if (tim_val == 0) {
            /* calling HAL_GetTick() to check whether our timer is precise enough */

        	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
        }
        if (tim_val == 5000) {
        	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
            seconds++;
        }
        if (seconds == 10) {
            seconds = 0;
        }
    }
}

static void Error_Handler(void)
{}

static void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /**Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 8;
    RCC_OscInitStruct.PLL.PLLN = 216;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
    RCC_OscInitStruct.PLL.PLLQ = 2;

    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
        Error_Handler();
    }

    /**Activate the Over-Drive mode */
    if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
        Error_Handler();
    }

    /**Initializes the CPU, AHB and APB busses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
        Error_Handler();
    }
}

