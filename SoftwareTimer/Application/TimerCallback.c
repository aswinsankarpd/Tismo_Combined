/*
 * TimerCallback.c
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */
#include "TimerCallback.h"

#define TOGGLE_LD2() HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5)
#define PRIM_COUNT 1
#define SEC_COUNT 1000

static int primary_Count = 0;
static int secondary_Count = 0;

void TimerCallback(){
	primary_Count++;

	if (primary_Count == PRIM_COUNT){
		primary_Count = 0;
		SubTimerCallback();
	}

}

void SubTimerCallback(){
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
