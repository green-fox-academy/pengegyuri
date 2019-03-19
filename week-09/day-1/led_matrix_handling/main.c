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
#include "sysclock.h"
#include "i2c_gpiob.h"
#include "ledmat_init.h"

#define LCDMATRIX_ADDRESS (0b1110000 << 1)

int main(void)
{
	HAL_Init();
	SystemClock_Config();
	i2c_ongpiob_init();
	ledmat_init();
	uint8_t data[] = { 0x08, 0x1c, 0x08, 0x00, 0x26, 0x2a, 0x32, 0x00, 0x22, 0x2a, 0x3e, 0x00};
	uint8_t temp[] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	uint8_t count = 0;

	while(1){

		while(count < 12){
			temp[7] = data[count];
			for (int i = 0; i < 8; i++){
				HAL_I2C_Mem_Write(&I2C_handle, LCDMATRIX_ADDRESS,
						i*2, sizeof(uint8_t), &temp[i], 1, 100);
			}
			HAL_Delay(250);
			for (int i = 0; i < 8; i++){
				temp[i] = temp[i + 1];
			}
			count++;
		}
		count = 0;
	}
}
