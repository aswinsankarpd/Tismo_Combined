#include "usart.h"
#include "main.h"
#include "usart_handler.h"
#include "addtobuffer.h"

char str[1];

void Receive_Interrupt(){
	HAL_UART_Receive_IT(&huart1, &str, sizeof(str));
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart1){
	addtobuffer(&str);
}
