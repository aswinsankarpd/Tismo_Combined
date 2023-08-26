/*
 * timer_inits.c
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */

#include "timer_inits.h"

void start_timer(){
	HAL_TIM_Base_Start_IT(&htim11);
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == TIM11) {
        TimerCallback();
    }
}
