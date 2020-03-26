#ifndef  __BSP_ADC_H
#define __BSP_ADC_H
#include "main.h"

volatile extern uint16_t ADC_ConvertedValue[];
extern int16_t gasData[];
extern uint16_t gasDataOriginal[];

void gasCollect(void);
#endif // __BSP_ADC_H
