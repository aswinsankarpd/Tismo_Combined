/** @brief: Function to handler uart interrupts.
 * Call callback function to process the ISR
 *  @params: No params, it is a void fucntion. Call back function
 *  recieves instance of uart as params
 *  @author aswinsankar
 */

#include "Received_Interrupt.h"
#include "usart.h"
#include "main.h"
#include "addtobuffer.h"

void Received_Interrupt(){
    HAL_UART_Receive_IT(&huart1, (uint8_t*)&str, sizeof(str));

}


void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart1){
	addtobuffer(str);
}
