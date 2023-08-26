/*
 * timer_inits.h
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */

#ifndef TIMER_INITS_H_
#define TIMER_INITS_H_

#include "main.h"
#include "TimerCallback.h"

void start_timer();
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);
#endif /* TIMER_INITS_H_ */
