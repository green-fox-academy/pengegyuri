
#include "i2c_gpiob.h"


void i2c_ongpiob_init()
{
	__HAL_RCC_GPIOB_CLK_ENABLE();       /* enable GPIO clock */

	gpio_init.Pin         = GPIO_PIN_8 | GPIO_PIN_9;  /* PB8: SCL, PB9: SDA */
	gpio_init.Pull        = GPIO_PULLUP;
	gpio_init.Mode        = GPIO_MODE_AF_OD;          /* configure in pen drain mode */
	gpio_init.Alternate   = GPIO_AF4_I2C1;
	HAL_GPIO_Init(GPIOB, &gpio_init);

	__HAL_RCC_I2C1_CLK_ENABLE();        /* enable the clock of the used peripheral */

	/* defining the I2C configuration structure */
	I2C_handle.Instance             = I2C1;
	I2C_handle.Init.Timing          = 0x40912732;
	I2C_handle.Init.AddressingMode  = I2C_ADDRESSINGMODE_7BIT;
	HAL_I2C_Init(&I2C_handle);
}
