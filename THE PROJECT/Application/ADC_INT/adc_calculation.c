/*
 * adc_calculation.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */

#include "adc_calculation.h"

static int adc_val;


/*
* @brief: Calculates Resistance from adc values
* @params: No parameters involved.
* @author: Aswin Sankar
*/

void adc_calculation(){

	adc_val = (int)get_adc_val();

	int resistance = (adc_val*10000)/(5-adc_val);

	char message[MESSAGE_SIZE];
	sprintf(message,"%d ",resistance);
	Tx_UART(message);

	adc_init();
}
