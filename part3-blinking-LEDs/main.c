/**
Part 2: Blinking the 3 User LEDs in C
 ******************************************************************************
 */

#include <stdint.h>

void delay(uint32_t count) {
	while (count--) {

	}
}
int main(void)
{
	// enable clock for GPIO B (bit 1) and C (bit 2)

	uint32_t rcc_addr = 0x40021000;
	uint32_t* rcc_en_reg = (uint32_t*)(rcc_addr + 0x4c);

	*rcc_en_reg |= (1U << 2);
	*rcc_en_reg |= (1U << 1);

	// Base Addresses of GPIO C and B
	uint32_t gpio_c_addr = 0x48000800;
	uint32_t gpio_b_addr = 0x48000400;

	// moder w offset 0x00
	uint32_t *gpio_c_moder = (uint32_t*)(gpio_c_addr+0x00);
	uint32_t *gpio_b_moder = (uint32_t*)(gpio_b_addr+0x00);


	// green - GPIO port: C Pin: 7
	// each pin takes 2 bits (so pin 7 is at 2*7 = 14)
	// configure as output 01 ( bit 15 = 0 bit 14 = 1
	*gpio_c_moder &= ~(3U << 14);
	*gpio_c_moder |= (1U << 14);
	// blue - GPIO port: B Pin: 7
	*gpio_b_moder &= ~(3U << 14);
	*gpio_b_moder |= (1U << 14);
	// red - GPIO port: B Pin: 14
	*gpio_b_moder &= ~(3U << 28);
	*gpio_b_moder |= (1U << 28);

	// configure green high (pg 345)
	uint32_t *gpio_c_odr = (uint32_t *)(gpio_c_addr+ 0x14);
	uint32_t *gpio_b_odr = (uint32_t *)(gpio_b_addr+ 0x14);

	for (;;) {
		// green on / off
		*gpio_c_odr |= (1U << 7);
		delay(1000000);
		*gpio_c_odr  &= ~(1U << 7);
		delay(1000000);
		// blue on / off
		*gpio_b_odr |= (1U << 7);
		delay(1000000);
		*gpio_b_odr  &= ~(1U << 7);
		delay(1000000);
		// red on / off
		*gpio_b_odr |= (1U << 14);
		delay(1000000);
		*gpio_b_odr  &= ~(1U << 14);
		delay(1000000);
	}


}
