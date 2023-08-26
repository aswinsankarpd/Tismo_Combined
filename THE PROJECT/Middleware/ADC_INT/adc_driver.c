/*
 * adc_driver.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */

#include <ADC_INT/adc_driver.h>
static uint32_t adc_val;

void adc_init(){
	HAL_ADC_Start_IT(&hadc1);
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc1){
	adc_val = HAL_ADC_GetValue(hadc1);
	adc_calculation(adc_val);
}

uint32_t get_adc_val(){
	return adc_val;
}
