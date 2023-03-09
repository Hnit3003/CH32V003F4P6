/********************************** (C) COPYRIGHT *******************************
 * File Name          : main.c
 * Author             : Hnit (base on WCH)
 * Version            : V1.0.0
 * Date               : 2023/03/08
 * Description        : Main program body.
*********************************************************************************/
/*
 *@Note
 GPIO routine:
 PD0 and PC3 push-pull output.
 PD0 and PD3 connect with LED1 and LED2 i module, toggle them one by one
*/

#include "debug.h"
#include "GPIO.h"

/*********************************************************************
 * @fn      main
 *
 * @brief   Main program.
 *
 * @return  none
 */
int main(void)
{
    Init_GPIO(GPIOD, GPIO_Pin_0, GPIO_Speed_50MHz, GPIO_Mode_Out_PP);
    Init_GPIO(GPIOC, GPIO_Pin_3, GPIO_Speed_50MHz, GPIO_Mode_Out_PP);
    Delay_Init();
    while(1)
    {
                GPIO_TogglePin(GPIOD, GPIO_Pin_0);
                Delay_Ms(500);
                GPIO_TogglePin(GPIOC,GPIO_Pin_3);
    }
}
