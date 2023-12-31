/*
 * cbuf_Enqueue.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#include "cbuff_Enqueue.h"
static uint8_t buffer_index=0;


/*
* @brief: This function enqueues data into the cbuff and overwrites the first entered data if the cbuff get full.
* @params: a.pData: The data to be enqueued. 
		   b.cb: The address of the circular buffer.
* @author: Aswin Sankar
*/
void cbuff_Enqueue(char* pData, CircularBuffer* cb){

	if (strcmp(pData,"d") == 0){
		cbuff_Dequeue(cb);
	}

	uint8_t SIZE = CircularBuffer_GetSize(cb);
	uint8_t *head = CircularBuffer_GetHead(cb);
	uint8_t *tail = CircularBuffer_GetTail(cb);

	tail = tail + buffer_index;

	Tx_UART(tail);
	// HAL_UART_Transmit_IT(&huart1,(uint8_t*)tail,(uint16_t)sizeof(tail));

	if (SIZE == buffer_index){
		tail = head;
		*tail = *pData;
		buffer_index=0;
	}
	else{
		*tail = *pData;
		buffer_index++;
	}

	Rx_UART_Intrpt();
}
