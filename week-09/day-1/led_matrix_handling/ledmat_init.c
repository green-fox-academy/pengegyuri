

#include "ledmat_init.h"

void ledmat_init()
{
	uint8_t osc_reg = 0b00100001;   //system clock on
	uint8_t rowint_reg = 0b10100000;   //  ROW/INT register set to ROW
	uint8_t disp_reg = 0b10000001;  // display on, blinking off

	HAL_I2C_Master_Transmit(&I2C_handle, LCDMATRIX_ADDRESS, &osc_reg, sizeof(osc_reg), 100);
	HAL_I2C_Master_Transmit(&I2C_handle, LCDMATRIX_ADDRESS, &rowint_reg, sizeof(rowint_reg), 100);
	HAL_I2C_Master_Transmit(&I2C_handle, LCDMATRIX_ADDRESS, &disp_reg, sizeof(disp_reg), 100);
}


