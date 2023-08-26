/*
 * adc_driver.h
 *
 *  Created on: Aug 23, 2023
 *      Author: Aswin Sankar
 */

#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_

#include "main.h"
#include "calculation.h"

void adc_init();
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* );
uint32_t get_adc_val();
#endif /* ADC_DRIVER_H_ */
