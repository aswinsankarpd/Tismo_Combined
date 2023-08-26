/*
 * pwm_start.c
 *
 *  Created on: Aug 24, 2023
 *      Author: Aswin Sankar
 */
#include "pwm_start.h"
static uint32_t dutycycle;

void pwm_start(){
	  dutycycle = getduty();
	  HAL_TIM_PWM_Init(&htim2);
	  HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
	  __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,dutycycle*10);
}

void pwm_setDC(uint32_t Dc)
{
	  __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_1,Dc*10);
	  startUartRx();
}
