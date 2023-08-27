/*
 * led_control.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#define LED_GREEN_ON() HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET)
#define LED_GREEN_OFF() HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET)

#include "led_control.h"

void LED_ON(int value){
	if (value == 1){
		LED_GREEN_ON();
	}
}

void LED_OFF(int value){

	if (value == 1){
		LED_GREEN_OFF();
	}
}
