/*
 * timer_inits.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */


#include "timer_inits.h"

static int SEC_COUNT = 0;
void start_timer(){
	HAL_TIM_Base_Start_IT(&htim11);
	SEC_COUNT = get_timer_count();
}

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == TIM11) {
        TimerCallback(SEC_COUNT);
    }
}
