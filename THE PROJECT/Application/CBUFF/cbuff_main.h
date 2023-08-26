/*
 * cbuff_main.h
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#ifndef CBUFF_CBUFF_MAIN_H_
#define CBUFF_CBUFF_MAIN_H_

#include "main.h"
#include "cbuff_init.h"
#include "cbuff_Enqueue.h"


void cbuff_main(int param);
CircularBuffer* get_cb_addr();
#endif /* CBUFF_CBUFF_MAIN_H_ */
