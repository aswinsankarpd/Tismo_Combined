#include "main.h"
#include "led_control.h"

void LED1_ON(){
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET);
}

void LED1_OFF(){
	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET);
}
