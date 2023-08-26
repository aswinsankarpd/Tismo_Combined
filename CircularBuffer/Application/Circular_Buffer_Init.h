/*
 * Circular_Buffer_Init.h
 *
 *  Created on: Aug 22, 2023
 *      Author: Aswin Sankar
 */

#ifndef CIRCULAR_BUFFER_INIT_H_
#define CIRCULAR_BUFFER_INIT_H_

#include <stdint.h>
#include "main.h"

void Circular_Buffer_Init();
uint8_t* get_head();
uint8_t* get_tail();
uint8_t get_SIZE();

#endif /* CIRCULAR_BUFFER_INIT_H_ */
