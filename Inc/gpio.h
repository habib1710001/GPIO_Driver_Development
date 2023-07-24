#ifndef GPIO_H_
#define GPIO_H_

#include "stdint.h"

#define PERIPHERAL_BASE 0x40000000

#define AHB1_OFFSET 0x00020000
#define AHB1_BASE (PERIPHERAL_BASE + AHB1_OFFSET)

#define RCC_OFFSET 0x00003800
#define RCC_BASE (AHB1_BASE  + RCC_OFFSET)

#define GPIOA_OFFSET 0x00000000
#define GPIOA_BASE (AHB1_BASE + GPIOA_OFFSET)

#define GPIOB_OFFSET 0x00000400
#define GPIOB_BASE (AHB1_BASE + GPIOB_OFFSET)

#define GPIOC_OFFSET 0x00000800
#define GPIOC_BASE (AHB1_BASE + GPIOC_OFFSET)

#define GPIOD_OFFSET 0x00000C00
#define GPIOD_BASE (AHB1_BASE + GPIOD_OFFSET)

#define GPIOE_OFFSET 0x00001000
#define GPIOE_BASE (AHB1_BASE + GPIOE_OFFSET)

#define GPIOF_OFFSET 0x00001400
#define GPIOF_BASE (AHB1_BASE + GPIOF_OFFSET)

#define GPIOG_OFFSET 0x00001800
#define GPIOG_BASE (AHB1_BASE + GPIOG_OFFSET)

#define GPIOH_OFFSET 0x00001C00
#define GPIOH_BASE (AHB1_BASE + GPIOH_OFFSET)

typedef struct{
	uint32_t CR;
	uint32_t PLL;
	uint32_t CFGR;
	uint32_t CIR;
	uint32_t AHB1RSTR;
	uint32_t AHB2RSTR;
	uint32_t AHB3RSTR;
	uint32_t DUMMY[5];//not required currently
	uint32_t AHB1ENR;
	uint32_t AHB2ENR;
	uint32_t AHB3ENR;
	uint32_t RESERVED1;
	uint32_t APB1ENR;
	uint32_t APB2ENR;
	uint32_t RESERVED2;
	uint32_t RESERVED3;
	uint32_t DUMMY1[18];//not required currently
}rccTypeDef;

typedef struct{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFRL;
	uint32_t AFRH;
}gpioTypeDef;


#define RCC   ((rccTypeDef *)RCC_BASE)
#define GPIOA ((gpioTypeDef *)GPIOA_BASE)
#define GPIOB ((gpioTypeDef *)GPIOB_BASE)
#define GPIOC ((gpioTypeDef *)GPIOC_BASE)
#define GPIOD ((gpioTypeDef *)GPIOD_BASE)
#define GPIOE ((gpioTypeDef *)GPIOE_BASE)
#define GPIOF ((gpioTypeDef *)GPIOF_BASE)
#define GPIOG ((gpioTypeDef *)GPIOG_BASE)
#define GPIOH ((gpioTypeDef *)GPIOH_BASE)


//Symbolic name
#define GPIOAEN (1U << 0)
#define GPIOBEN (1U << 1)
#define GPIOCEN (1U << 2)
#define GPIODEN (1U << 3)
#define GPIOEEN (1U << 4)
#define GPIOFEN (1U << 5)
#define GPIOGEN (1U << 6)
#define GPIOHEN (1U << 7)

//function prototypes
void gpio_init(uint32_t GPIOxEN);
void gpio_mode(gpioTypeDef * gpioPointer , uint8_t * pinNo);
void gpio_state(void);
void gpio_speed(void);




#endif /* GPIO_H_ */
