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

/* necessary include files */
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_lcd.h"

static void Error_Handler(void);
static void SystemClock_Config(void);

GPIO_InitTypeDef LED_config;

/* the timer's config structure */
TIM_HandleTypeDef TimHandle;

uint16_t tim_val = 0;

RNG_HandleTypeDef rng;

int main(void)
{
    HAL_Init();
    SystemClock_Config();

	// initializing GPIOF for LEDs
	__HAL_RCC_GPIOF_CLK_ENABLE();
	LED_config.Pin = GPIO_PIN_10 | GPIO_PIN_9 | GPIO_PIN_8;
	LED_config.Mode = GPIO_MODE_OUTPUT_PP;	/* configure as output, in push-pull mode */
	LED_config.Pull = GPIO_NOPULL;
	LED_config.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOF, &LED_config);

    rng.Instance = RNG;
	__HAL_RCC_RNG_CLK_ENABLE();
    HAL_RNG_Init(&rng);

    /* initializing LCD */
    BSP_LCD_Init();
    BSP_LCD_LayerDefaultInit(1, LCD_FB_START_ADDRESS);
    BSP_LCD_SelectLayer(1);
    BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
    BSP_LCD_SetBackColor(LCD_COLOR_BLACK);
    BSP_LCD_Clear(LCD_COLOR_BLACK);



    /* we need to enable the TIM2 */
    __HAL_RCC_TIM2_CLK_ENABLE();

    TimHandle.Instance			= TIM2;
    TimHandle.Init.Prescaler		= 54000 - 1;	/* 108000000/10800=10000 -> speed of 1 count-up: 1/10000 sec = 0.1 ms */
    TimHandle.Init.Period		= 24000 - 1;	/* 10000 x 0.1 ms = 1 second period */
    TimHandle.Init.ClockDivision	= TIM_CLOCKDIVISION_DIV1;
    TimHandle.Init.CounterMode		= TIM_COUNTERMODE_UP;

    /* configure the timer */
    HAL_TIM_Base_Init(&TimHandle);

    /* starting the timer */
    HAL_TIM_Base_Start(&TimHandle);


    while (1) {

    	tim_val = __HAL_TIM_GET_COUNTER(&TimHandle);

		if (tim_val == 0) {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
			BSP_LCD_Clear(LCD_COLOR_BLACK);
			BSP_LCD_SetTextColor(LCD_COLOR_RED);
			BSP_LCD_DisplayStringAt(0, 20, "RED", CENTER_MODE);
		}
		if (tim_val == 9000) {
			//HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
			//HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
			BSP_LCD_SetTextColor(LCD_COLOR_YELLOW);
			BSP_LCD_DisplayStringAt(0, 100, "YELLOW", CENTER_MODE);
		}
		if (tim_val == 11000) {
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
			BSP_LCD_Clear(LCD_COLOR_BLACK);
			BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
			BSP_LCD_DisplayStringAt(0, 180, "GREEN", CENTER_MODE);
		}
		if (tim_val == 22000) {
			//HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
			BSP_LCD_Clear(LCD_COLOR_BLACK);
			BSP_LCD_SetTextColor(LCD_COLOR_YELLOW);
			BSP_LCD_DisplayStringAt(0, 100, "YELLOW", CENTER_MODE);
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



#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line){}
#endif
