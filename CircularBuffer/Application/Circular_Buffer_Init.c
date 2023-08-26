/*
 * Circular_Buffer_Init.c
 *
 *  Created on: Aug 22, 2023
 *      Author: Aswin Sankar
 */

#include "Circular_Buffer_Init.h"

static uint8_t SIZE = 5;
static uint8_t *head;
static uint8_t *tail;

void Circular_Buffer_Init(){
	char c_buffer[SIZE];
	head = &c_buffer[0];
	tail = head;
}

uint8_t* get_head(){
	return head;
}

uint8_t* get_tail(){
	return tail;
}

uint8_t get_SIZE(){
	return SIZE;
}

