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
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_lcd.h"
#include "lcd.h"


int main(void)
{
    HAL_Init();
    SystemClock_Config();
    lcd_init();

    BSP_LCD_Clear(LCD_COLOR_BLACK);
    BSP_LCD_SetFont(&LCD_DEFAULT_FONT);
	BSP_LCD_SetTextColor(LCD_COLOR_WHITE);
	BSP_LCD_DisplayStringAt(0, 0, "WHITE", LEFT_MODE);
	HAL_Delay(5000);

    while (1) {


    }
}
