
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

   DDRB|=(1<<PB0); /*PB0 SET TO OUTPUT*/
   DDRD&=~(1<<PD0); /*CLEAR BIT(INPUT PORT)*/
   PORTD|=(1<<PD0);/*PULL UP*/
   DDRD&=~(1<<PD3); /*CLEAR BIT(INPUT PORT)*/
   PORTD|=(1<<PD3);/*PULL UP*/
    while(1)
    {
        if((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD3))))
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

    return 0;
}
