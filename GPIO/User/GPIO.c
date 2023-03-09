#include "GPIO.h"

GPIO_InitTypeDef GPIO_Init_Structure = {0};

void Init_GPIO(GPIO_TypeDef *GPIO_PORT, uint16_t GPIO_PIN, GPIOSpeed_TypeDef SPEED, GPIOMode_TypeDef MODE)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);

    GPIO_Init_Structure.GPIO_Pin = GPIO_PIN;
    GPIO_Init_Structure.GPIO_Speed = SPEED;
    GPIO_Init_Structure.GPIO_Mode = MODE;

    GPIO_Init(GPIO_PORT, &GPIO_Init_Structure);
}

void GPIO_TogglePin(GPIO_TypeDef *GPIO_PORT, uint16_t GPIO_PIN)
{
    if(GPIO_ReadOutputDataBit(GPIO_PORT, GPIO_PIN) == Bit_SET)
    {
        GPIO_WriteBit(GPIO_PORT, GPIO_PIN, Bit_RESET);
    }else GPIO_WriteBit(GPIO_PORT, GPIO_PIN, Bit_SET);
}
