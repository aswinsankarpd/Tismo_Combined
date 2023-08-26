/*
 * uart_handler.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */
#include "uart_handler.h"

char Temp_Rx_String[1];

void Rx_UART_Intrpt(){
	HAL_UART_Receive_IT(&huart1,(uint8_t*)Temp_Rx_String, sizeof(Temp_Rx_String));
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart1){

	int cbuff_flag = get_cbuff_flag();
	if (1 == cbuff_flag){
		CircularBuffer *cb_addr = get_cb_addr();
		cbuff_Enqueue(&Temp_Rx_String[0],cb_addr);
	}

	else{
		addtobuffer(&Temp_Rx_String[0]);
	}
}

void Tx_UART(char message[MESSAGE_SIZE]){
	HAL_UART_Transmit(&huart1,(uint8_t*)&message[0],(uint16_t)strlen(message),100);
}
