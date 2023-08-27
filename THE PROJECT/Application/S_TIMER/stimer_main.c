/*
 * stimer_main.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */


#include "stimer_main.h"

static int sec_timer_duration = 0;

/*
* @brief: Entry point for softimer fuctionality
* @params: a.params: SECONDARY TIMER duration is passed as aparameter
* @author: Aswin Sankar
*/

void softtimer(int param){
	sec_timer_duration = param;
	start_timer();
}

/*
* @brief: Function to return the sec_timer_durations
* @params: No params involved
* @author: Aswin Sankar
*/
int get_timer_count(){
	return sec_timer_duration;
}
