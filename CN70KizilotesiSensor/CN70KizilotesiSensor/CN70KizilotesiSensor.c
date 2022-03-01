/*
 * CN70KizilotesiSensor.c
 *
 * Created: 16.02.2022 18:53:25
 *  Author: sadib
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "adc.h"

#define F_CPU 16000000

int main(void)
{
	adc_yukle();
	int cnyDegeri;
	int renkDegeri = 200;
	
    while(1)
    {
		cnyDegeri = adc_oku(0); 
		printf("okunan deger", cnyDegeri);
		printf("algýlanan renk");
		if (cnyDegeri < renkDegeri)
		{
			printf("siyah");
		}
		else {
			printf("beyaz");
		}
    }
	_delay_ms(1000);
}