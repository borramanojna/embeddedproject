/**
 * @file Activity2.c
 * @author Manojna (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdint.h>
#include <avr/io.h>
#include<Activity2.h>
void InitADC()
{

    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);/**
     * @brief FOR AREF=AVCC
     * 
     */
}

uint16_t ReadADC(uint8_t ch)
{

    ADMUX&=0xf8;/**
     * @brief SELECT ADC CHANNEL CH MUST BE 0-7
     * 
     */
    ch=ch&0b00000111;
    ADMUX|=ch;
    /**
     * @brief start single conversion
     * 
     */
    ADCSRA|=(1<<ADSC);
   /**
    * @brief  WAIT FOR CONVERSION TO COMPLETE
    * 
    */
    while(!(ADCSRA&(1<<ADIF)));
    /**
     * @brief CLEAR ADIF BY WRITING ONE TO IT
     * 
     */
    ADCSRA|=(1<<ADIF);
    return(ADC);
}
