/*
 * cbuff_init.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#include "cbuff_init.h"
#define SIZE 5

void Circular_Buffer_Init(CircularBuffer *cb) {
    cb->buffer = (uint8_t *)malloc(SIZE * sizeof(uint8_t));
    cb->head = cb->buffer;
    cb->tail = cb->buffer;
    cb->size = SIZE;
}

uint8_t* CircularBuffer_GetHead(CircularBuffer *cb) {
    return cb->head;
}

uint8_t* CircularBuffer_GetTail(CircularBuffer *cb) {
    return cb->tail;
}

uint8_t CircularBuffer_GetSize(CircularBuffer *cb) {
    return cb->size;
}
