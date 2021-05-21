/**
 * @file main.c
 * @author Roopesh Verma
 * @brief Mian Program
 * @version 0.1
 * @date 2021-05-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include "led.h"
#include "adc.h"
#include "pwm.h"
#include "uart.h"
#include <avr/io.h>



void peripheral_init(void)
{
   
    InitLED();
   
    InitADC();
    
    InitPWM();
    
    InitUART(103);
}
    
   
uint16_t temp;
char temp_data;
int main(void)
{
   
    peripheral_init();
    
    while(1)
    {
        if(SENSOR_ON) //If switch_1 is ON
        {
            if(HEAT_ON) //If switch_2 is ON
            {
                ledstat(LED_ON);//LED is ON
                temp=ReadADC(0);
                temp_data = OutPWM(temp);
                UARTwrite(temp_data);

            }
            else
            {
                
                ledstat(LED_OFF);
            }
        }
        else
        {
            ledstat(LED_OFF);//LED is OFF
            OCR1A=0;
        }
    }
    return 0;
}