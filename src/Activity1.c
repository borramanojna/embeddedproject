#include <avr/io.h>
#include <Activity1.h>
void declareports()
{/**
 * @brief Configuring ports as inputs and outputs
 * 
 */
    DDRB|=(1<<PB0); /*PB0 SET TO OUTPUT*/
   DDRD&=~(1<<PD0); /*CLEAR BIT(INPUT PORT)*/
   PORTD|=(1<<PD0);/*PULL UP*/
   DDRD&=~(1<<PD3); /*CLEAR BIT(INPUT PORT)*/
   PORTD|=(1<<PD3);/*PULL UP*/
}