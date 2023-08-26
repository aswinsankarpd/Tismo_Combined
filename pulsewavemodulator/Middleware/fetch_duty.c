/*
 * fetch_duty.c
 *
 *  Created on: Aug 24, 2023
 *      Author: Aswin Sankar
 */
#include "fetch_duty.h"

int duty = DEFAULT_DUTY_CYCLE;

uint8_t dataReceived = 0;

uint8_t data = 0;

void startUartRx(void)
{
	HAL_UART_Receive_IT(&huart1,(uint8_t*)&duty, (uint16_t)sizeof(duty));

}

void fetch_duty(){

	if(1 == dataReceived)
	{
		pwm_setDC(data);

		data = 0;
		dataReceived = 0;
	}
}

int getduty(){
	return duty;
}

void uartHandler()
{
	dataReceived = 1;

	data = duty;

	startUartRx();
}
