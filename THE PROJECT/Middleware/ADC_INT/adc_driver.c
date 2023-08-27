/*
 * adc_driver.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */

#include <ADC_INT/adc_driver.h>
static uint32_t adc_val;

/*
* @brief: Starts Internal ADC Interrupt
* @params: No parametrs involved.
* @author: Aswin Sankar
*/

void adc_init(){
	HAL_ADC_Start_IT(&hadc1);
}

/*
* @brief: Callback function triggered when converions in completed
* @params: a.hadc1: Timer instance
* @author: Aswin Sankar
*/
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc1){
	adc_val = HAL_ADC_GetValue(hadc1);
	adc_calculation(adc_val);
}

/*
* @brief: Returns ADC value after completion
* @params: No params involved
* @author: Aswin Sankar
*/

uint32_t get_adc_val(){
	return adc_val;
}
