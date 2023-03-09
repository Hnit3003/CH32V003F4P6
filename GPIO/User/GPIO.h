#ifndef _GPIO_H
#define _GPIO_H

#include "debug.h"

void Init_GPIO(GPIO_TypeDef *GPIO_PORT, uint16_t GPIO_PIN, GPIOSpeed_TypeDef SPEED, GPIOMode_TypeDef MODE);
void GPIO_TogglePin(GPIO_TypeDef *GPIO_PORT, uint16_t GPIO_PIN);

#endif
