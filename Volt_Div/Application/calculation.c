/*
 * calculation.c
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */

#include "calculation.h"
#include <stdio.h>
#include <string.h>
static int adc_val;

void calculation(){
	adc_val = (int)get_adc_val();
	int resistance = (adc_val*10000)/(5-adc_val);
	char message[100];
	sprintf(message,"%d ",resistance);
	HAL_UART_Transmit(&huart1, (uint8_t*)message, strlen(message),2000);
	adc_init();
}