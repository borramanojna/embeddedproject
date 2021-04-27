
#ifndef __ACTIVITY_1H__
#define __ACTIVITY_1H__
void declareports();
#define CHECK ((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD3))))
#endif