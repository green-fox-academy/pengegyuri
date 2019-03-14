#ifndef LCD_H
#define LCD_H

#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_lcd.h"

RNG_HandleTypeDef rng;
void lcd_init();
void SystemClock_Config(void);

#endif
