/*
 **********************************************************************
 *Copyright(c)		Lance Zhang
 *Identification	CHIC
 *Describtion		Template
 *
 *Present Version	1.0
 *Writer			Lance Zhang
 *Date				8/16/2018
 **********************************************************************
**/


extern "C" { 
#include "stm32f4xx.h"
#include "usart.h"
#include "delay.h"
}

int main(void)
{
	u32 t=0;
	uart_init(115200);
	delay_init(84);
  while(1){
    printf("t:%d\r\n",t);
		delay_ms(500);
		t++;
	}
}



