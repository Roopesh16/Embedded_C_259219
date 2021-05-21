/**
 * @file led.c
 * @author Roopesh Verma
 * @brief Changes the state of LED
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021
 
 */

#include <avr/io.h>
#include "led.h"


void ledstat(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
void InitLED(void)
{
	DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
}