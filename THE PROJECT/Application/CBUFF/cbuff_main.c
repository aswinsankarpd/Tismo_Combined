/*
 * cbuff_main.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */
#include "cbuff_main.h"

static CircularBuffer cb;

/*
* @brief:  This function is the entry point to circularbuffer. Initializes the circular buffer with the address of the buffer intialised above
* @params: a.param : Dummy parameter passed from CLI.
* @author: Aswin Sankar
*/
void cbuff_main(int param){
	Circular_Buffer_Init(&cb);
}

/*
* @brief: Function to return the addres of the initiliased circularbuffer. 
* @params: No params invvolved
* @author: Aswin Sankar 
*/
CircularBuffer* get_cb_addr(){
	return &cb;
}
