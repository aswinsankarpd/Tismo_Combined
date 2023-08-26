/*
 * led_control.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#include "led_control.h"

void LED_ON(int value){
	if (value == 1){
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);
	}
}

void LED_OFF(int value){

	if (value == 1){
		HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
	}
}
