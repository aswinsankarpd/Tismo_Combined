/*
 * stimer_main.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */


#include "stimer_main.h"

static int sec_timer_count = 0;

void softtimer(int param){
	sec_timer_count = param;
	start_timer();
}

int get_timer_count(){
	return sec_timer_count;
}
