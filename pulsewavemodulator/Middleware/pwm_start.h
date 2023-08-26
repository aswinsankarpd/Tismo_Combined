/*
 * pwm_start.h
 *
 *  Created on: Aug 24, 2023
 *      Author: Aswin Sankar
 */

#ifndef PWM_START_H_
#define PWM_START_H_

#include "main.h"
#include "fetch_duty.h"
#include "stm32f4xx_hal_tim.h"

void pwm_start();
void pwm_setDC(uint32_t Dc);

#endif /* PWM_START_H_ */
