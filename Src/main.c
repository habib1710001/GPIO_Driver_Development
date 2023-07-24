#include "gpio.h"

const uint8_t PA5 = 5;
const uint8_t PB7 = 7;
const uint8_t PE12 = 12;

int main(void)
{
    gpio_init(GPIOAEN);
    gpio_init(GPIOBEN);
    gpio_init(GPIOEEN);

    gpio_mode(GPIOA, PA5 , INPUT);
    gpio_mode(GPIOB, PB7 , OUTPUT);
    gpio_mode(GPIOE, PE12, OUTPUT);

	while(1){
	    uint8_t val = gpio_input(GPIOA , PA5);

	}
}
