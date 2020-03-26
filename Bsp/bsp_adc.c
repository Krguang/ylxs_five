#include "bsp_adc.h"
#include "adc.h"

volatile uint16_t ADC_ConvertedValue[5];
uint32_t ADC_Average[5];
int16_t gasData[5];
uint16_t gasDataOriginal[5];


void gasCollect() {

	for (uint8_t i = 0; i < 100; i++)
	{
		for (uint8_t j = 0; j < 5; j++) {
			ADC_Average[j] += ADC_ConvertedValue[j];
		}
	}

	for (uint8_t i = 0; i < 5; i++)
	{

		gasDataOriginal[i] = (uint16_t)(ADC_Average[i] / 100 * 1000 / 4096);
		ADC_Average[i] = 0;
	}
}