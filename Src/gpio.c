#include "gpio.h"


//Enables the bus clock
void gpio_init(uint32_t GPIOxEN){
	RCC->AHB1ENR |= GPIOxEN;
}

//Sets as general purpose output mode
void gpio_mode(gpioTypeDef * gpioPointer , uint8_t * pinNo){
	(* pinNo) = ((* pinNo) * 2);
	gpioPointer-> MODER |= (1U << (*pinNo));
	(* pinNo) =((* pinNo) + 1);
	gpioPointer-> MODER &= ~(1U << (*pinNo));
}

void gpio_state(void){

}

void gpio_speed(void){

}




