/*
 * Dequeue.c
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */


#include "Dequeue.h"

static int buffer_size_index = 0;

void Dequeue(){

	uint8_t *tail = get_tail();
	uint8_t SIZE = get_SIZE();

	tail = tail + buffer_size_index;
	buffer_size_index++;

	HAL_UART_Transmit_IT(&huart1, tail, (uint16_t)sizeof(char));

	if (buffer_size_index == SIZE){
		buffer_size_index = 0;
	}

	Queue_Handler();

}
