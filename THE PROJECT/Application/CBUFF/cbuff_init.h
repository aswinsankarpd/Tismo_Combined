/*
 * cbuff_init.h
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#ifndef CBUFF_CBUFF_INIT_H_
#define CBUFF_CBUFF_INIT_H_

#include "main.h"

typedef struct {
    uint8_t *buffer;
    uint8_t *head;
    uint8_t *tail;
    uint8_t size;
} CircularBuffer;

void Circular_Buffer_Init(CircularBuffer *cb);

uint8_t* CircularBuffer_GetHead(CircularBuffer *cb);
uint8_t* CircularBuffer_GetTail(CircularBuffer *cb);
uint8_t CircularBuffer_GetSize(CircularBuffer *cb);


#endif /* CBUFF_CBUFF_INIT_H_ */
