
#include <avr/io.h>
#include <util/delay.h>
#include<stdint.h>
#include <Activity1.h>
#include<Activity2.h>
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
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }
    };
 InitADC();
 uint16_t temp;

    while(1)
    {
        temp= ReadADC(0);
        _delay_ms(200);
    }

    return 0;
}




