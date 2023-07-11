/********************************** (C) COPYRIGHT *******************************
* File Name          : main.c
* Author             : WCH
* Version            : V1.0.0
* Date               : 2021/06/06
* Description        : Main program body.
*********************************************************************************
* Copyright (c) 2021 Nanjing Qinheng Microelectronics Co., Ltd.
* Attention: This software (modified or not) and binary are used for 
* microcontroller manufactured by Nanjing Qinheng Microelectronics.
*******************************************************************************/

/*
 *@Note
 USART Print debugging routine:
 USART1_Tx(PA9).
 This example demonstrates using USART1(PA9) as a print debug port output.

*/

#include "debug.h"
#include "lcd_st7789.h"
#include "keyboard.h"
#include "AS608.h"
#include "ov.h"
#include "AP3216C.h"
#include "DHT11.h"
#include "timer.h"
#include "PWM.h"
/* Global typedef */

/* Global define */

/* Global Variable */


/*********************************************************************
 * @fn      main
 *
 * @brief   Main program.
 *
 * @return  none
 */
int main(void)
{
    uint32_t i=0x1234,p;

	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	SystemCoreClockUpdate();
	Delay_Init();
	USART_Printf_Init(115200);	
	printf("SystemClk:%d\r\n",SystemCoreClock);
	printf( "ChipID:%08x\r\n", DBGMCU_GetCHIPID() );
	printf("This is printf example\r\n");

	LCD_Init();
	LCD_Clear(WHITE);
	LCD_SetColor(WHITE, RED);

//	AS608_PIN_Init();
//	printf("This is printf2\r\n");
//
//	keyboard_Pin_Init();
//
//	AP3216C_Init();

//	DHT11_Init();

//	Delay_test();
//	TIM3_Init();

//	PWM_Init();

	LCD_DisplayOn();
	LCD_ShowString(0, 0, 32,0,"test");
	delay_ms(2000);
	LCD_DisplayOff();
	LCD_ShowString(0, 0, 32,0,"test");

	while(1)
    {
//	    Delay_Ms(1000);

	}
}
