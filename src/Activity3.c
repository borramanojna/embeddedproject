/**
 * @file Activity3.c
 * @author Manojna (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <Activity3.h>
#include<stdint.h>
#include <avr/io.h>

void decltimer()
{
    TCCR0A|=(1<<COM0A1)|(1<<WGM00)|(1<<WGM01);
    TCCR0B|=(1<<CS00)|(1<<CS01);
    DDRD|=(1<<PD6);
}
/**
 * @brief Generating a waveform corresponding to the tabulation
 * returning temperature to be displayed on serial monitor
 * 
 * @param temp 
 * @return int 
 */
int pwm(uint16_t temp)
{
    int tempe=0;
    if((temp>=0)&&(temp <=200))

    {
          OCR0A=51;
        tempe=20;;
    }
    else if((temp>210)&&(temp <=500))
    {
        OCR0A=102;
         tempe=25;
    }
    else if((temp>510)&&(temp <=700))
         {
             OCR0A=178;
              tempe=29;
         }
         else if((temp>710)&&(temp <=1024))
         {
             OCR0A=242;
              tempe=33;
         }
         return tempe;
}
