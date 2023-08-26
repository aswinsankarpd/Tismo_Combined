/*
 * cbuff_Dequeue.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */


#include "cbuff_Dequeue.h"

static int buffer_size_index = 0;

void cbuff_Dequeue(CircularBuffer* cb){

	uint8_t *tail = CircularBuffer_GetTail(cb);
	uint8_t SIZE = CircularBuffer_GetSize(cb);

	tail = tail + buffer_size_index;
	buffer_size_index++;

	HAL_UART_Transmit_IT(&huart1, tail, (uint16_t)sizeof(char));

	if (buffer_size_index == SIZE){
		buffer_size_index = 0;
	}

	Rx_UART_Intrpt();

}
