/*
 * timer_inits.h
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */

#ifndef HARD_TIMER_TIMER_INITS_H_
#define HARD_TIMER_TIMER_INITS_H_


#include "main.h"
#include "stimer_callback.h"
#include "stimer_main.h"

void start_timer();
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /* HARD_TIMER_TIMER_INITS_H_ */
