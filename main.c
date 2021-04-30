/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <avr/io.h>
#include <util/delay.h>
#include<stdint.h>
#include <Activity1.h>
#include<Activity2.h>
#include<Activity3.h>
#include<Activity4.h>
int main(void)
{
char temperature;

 declareports();
InitUART(103);


    while(1)
    {/**
     * @brief Changing the state of LED according to the conditions
     * 
     */
        if(CHECK)
            /*SEATED AS WELL AS HEATER IS TURNED ON*/
        {
            PORTB|=(1<<PB0);
        
             
            _delay_ms(20);
            InitADC();
 uint16_t temp;



        temp= ReadADC(0);
        _delay_ms(200);

    decltimer();
    temperature=pwm(temp);

    UARTwrite(temperature);


        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }
    };


    return 0;
}




