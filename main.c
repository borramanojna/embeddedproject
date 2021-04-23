/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{

   DDRB|=(1<<PB0);/**
    * @brief SET PB0 TO CONFIGURE AS OUTPUT FOR LED
    * 
    */
   DDRD&=~(1<<PD0); 
/**
 * @brief CLEAR PD0 TO CONFIGURE IT AS INPUT PORT
 * 
 */
   
   PORTD|=(1<<PD0);
   /**
    * @brief ENABLE PULL UP FOR INPUT PORT
    * 
    */
   DDRD&=~(1<<PD3);
   /**
    * @brief CLEAR PD3 TO CONFIGURE IT AS INPUT PORT
    * 
    */
   PORTD|=(1<<PD3);
   /**
    * @brief ENABLE PULL UP FOR INPUT PORT
    * 
    */
    while(1)
    {
        if((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD3))))
          /**
           * @brief SEATED AS WELL AS HEATER IS TURNED ON
           * 
           */
        {
            PORTB|=(1<<PB0);
            _delay_ms(20);
        }
        else
        /**
         * @brief TURN OFF THE LED IF ANY OF THE CASES IS FAILED
         * 
         */
        {
            PORTB&=~(1<<PB0);
            _delay_ms(2000);
        }
    };

    return 0;
}
