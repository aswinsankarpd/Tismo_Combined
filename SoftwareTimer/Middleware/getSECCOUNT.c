/*
 * getSECCOUNT.c
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */


#include "getSECCOUNT.h"

int getSECCOUNT(){
	int SECCOUNT;
	HAL_UART_Receive_IT(&huart1, &SECCOUNT, sizeof(SECCOUNT));
	return SECCOUNT;
}
