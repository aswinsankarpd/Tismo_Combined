/*
 * cbuff_init.c
 *
 *  Created on: Aug 25, 2023
 *      Author: Aswin Sankar
 */

#include "cbuff_init.h"
#define SIZE 5

/*
* @brief: Initialises a structure with a buffer, a head and tail pointer. Then a size element.
* @params: a.cb : address of the intialised circular buffer.
* @author: Aswin Sankar
*/
void Circular_Buffer_Init(CircularBuffer *cb) {
    cb->buffer = (uint8_t *)malloc(SIZE * sizeof(uint8_t));
    cb->head = cb->buffer;
    cb->tail = cb->buffer;
    cb->size = SIZE;
}

/*
* @brief: Returns the head pointer of cbuff.
* @params: a.cb : address of the intialised circular buffer.
* @author: Aswin Sankar
*/

uint8_t* CircularBuffer_GetHead(CircularBuffer *cb) {
    return cb->head;
}

/*
* @brief: Returns the tial pointer of cbuff.
* @params: a.cb : address of the intialised circular buffer.
* @author: Aswin Sankar
*/

uint8_t* CircularBuffer_GetTail(CircularBuffer *cb) {
    return cb->tail;
}

/*
* @brief: Returns the size of the cbuff.
* @params: a.cb : address of the intialised circular buffer.
* @author: Aswin Sankar
*/
uint8_t CircularBuffer_GetSize(CircularBuffer *cb) {
    return cb->size;
}
