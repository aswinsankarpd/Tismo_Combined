/*
 * adc_driver.h
 *
 *  Created on: Aug 26, 2023
 *      Author: Aswin Sankar
 */

#ifndef ADC_INT_ADC_DRIVER_H_
#define ADC_INT_ADC_DRIVER_H_

#include "main.h"
#include "adc.h"
#include "adc_calculation.h"

void adc_init();
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc1);
uint32_t get_adc_val();

#endif /* ADC_INT_ADC_DRIVER_H_ */
