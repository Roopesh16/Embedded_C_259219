/**
 * @file adc.h
 * @author Roopesh Verma
 * @brief ADC function definition
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021
 
 */

#ifndef __ADC_H__
#define __ADC_H__
/**
 * @brief Reading the analog input and returning a digital 8bit value
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t ReadADC(uint8_t ch);
void InitADC();
#endif