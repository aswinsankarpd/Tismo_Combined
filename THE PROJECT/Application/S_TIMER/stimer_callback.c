/*
 * stimer_callback.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */

#include "stimer_callback.h"
#define TOGGLE_LD2() HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5)
#define PRIM_COUNT 1

static int primary_Count = 0;
static int secondary_Count = 0;

void TimerCallback(int SEC_COUNT){
	primary_Count++;

	if (primary_Count == PRIM_COUNT){
		primary_Count = 0;
		SubTimerCallback(SEC_COUNT);
	}

}

void SubTimerCallback(int SEC_COUNT){
	secondary_Count++;
	if (secondary_Count == SEC_COUNT){
		char message[100];
		int elapsed_time = PRIM_COUNT*secondary_Count;
		sprintf(message,"The Time Elapsed is %dms.\n",elapsed_time);
		HAL_UART_Transmit(&huart1,(uint8_t*)message,strlen(message),HAL_MAX_DELAY);
		TOGGLE_LD2();
		secondary_Count = 0;

	}
}
