/*
 */

#include <avr/io.h>
#include <util/delay.h>
#include<stdint.h>
#include <Activity1.h>
#include<Activity2.h>
#include<Activity3.h>
int main(void)
{


 declareports();

    while(1)
    {
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
    pwm(temp);

        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }
    };


    return 0;
}




