/*
 * cbuff_main.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */
#include "cbuff_main.h"

static CircularBuffer cb;

void cbuff_main(int param){
	Circular_Buffer_Init(&cb);
}

CircularBuffer* get_cb_addr(){
	return &cb;
}
