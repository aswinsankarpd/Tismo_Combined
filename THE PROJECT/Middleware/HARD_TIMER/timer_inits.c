/*
 * timer_inits.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */


#include "timer_inits.h"

// static int SEC_COUNT = 0;

/*
* @brief: Starts Timer interrupt and the timer value.
* @params: No params involved.
* @author: Aswin Sankar
*/
void start_timer(){
	HAL_TIM_Base_Start_IT(&htim11);
	// SEC_COUNT = get_timer_count();
}


/*
* @brief: Callback function is triggered when 1 time period is completed. TimerCallback is called with SEC_COUNT as argument
* @params: a.htim: Timer instance as argument.
* @author: Aswin Sankar
*/
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
    if (htim->Instance == TIM11) {
        static int SEC_COUNT = 0;
        SEC_COUNT = get_timer_count();
        TimerCallback(SEC_COUNT);
    }
}
