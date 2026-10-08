/**
Assembly Time!
 ******************************************************************************
 */

#include <stdint.h>
int main (void) {
	__asm__ volatile (
			// Blue = port C pin 7
			// turn on clock
			//uint32_t rcc_en_reg = 0x4002104c
			//*rcc_en_reg |= (1U << 1);
		"LDR R0, = 0x4002104C\n\t"
		"LDR R1, [R0]\n\t"
		"ORR R1, R1, #(1<<1)\n\t"
		"STR R1, [R0]\n\t"
			// set as output
			//uint32_t gpio_b_addr = 0x48000400;
			//uint32_t *gpio_b_moder = (uint32_t*)(gpio_b_addr+0x00)
			//*gpio_b_moder &= ~(3U << 14);
			//*gpio_b_moder |= (1U << 14);
		"LDR R0, =0x48000400\n\t" //i simplified it to one number
		"LDR R1, [R0]\n\t"
		"BIC R1, R1, #(3<<14)\n\t"
		"ORR R1, R1, #(1<<14)\n\t"
		"STR R1, [R0]\n\t"
			// set as high
			//uint32_t *gpio_b_odr = (uint32_t *)(gpio_b_addr+ 0x14);
			//*gpio_c_odr |= (1U << 7);
		"LDR R0, =0x48000414\n\t"
		"LDR R1, [R0]\n\t"
		"ORR R1, R1, #(1<<7)\n\t"
		"STR R1, [R0]\n\t"

	);
	while (1);
}
