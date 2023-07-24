
#include "gpio.h"


int main(void)
{
	uint8_t PA5 = 5;
	uint8_t PB7 = 7;
	uint8_t PE12 = 12;
    gpio_init(GPIOAEN);
    gpio_init(GPIOBEN);
    gpio_init(GPIOEEN);

    gpio_mode(GPIOA, &PA5);
    gpio_mode(GPIOB, &PB7);
    gpio_mode(GPIOE, &PE12);

	while(1){

	}
}
