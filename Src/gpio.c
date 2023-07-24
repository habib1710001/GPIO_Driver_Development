#include "gpio.h"


//Enables the bus clock
void gpio_init(uint32_t GPIOxEN){
	RCC->AHB1ENR |= GPIOxEN;
}

//Sets as general purpose output mode
void gpio_mode(gpioTypeDef * gpioPointer , uint8_t pinNo, uint8_t mode){

 if(mode == 1){
	(pinNo) = ((pinNo) * 2);
	gpioPointer-> MODER |= (1U << (pinNo));
	(pinNo) =((pinNo) + 1);
	gpioPointer-> MODER &= ~(1U << (pinNo));
 }
 if(mode == 0){
	(pinNo) = ((pinNo) * 2);
	gpioPointer-> MODER &= ~(1U << (pinNo));
	(pinNo) =((pinNo) + 1);
	gpioPointer-> MODER &= ~(1U << (pinNo));
 }
}

uint8_t gpio_input(gpioTypeDef * gpioPointer , uint8_t pinNo){
	if ((gpioPointer-> IDR) & (1 << pinNo)){
       return 1;
	}
	else{
	   return 0;
	}

}

void gpio_state(void){

}



void gpio_speed(void){

}




