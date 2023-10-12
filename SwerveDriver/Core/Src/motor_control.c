#include "motor_control.h"
#include "main.h"
#include "stdio.h"
#include "stdint.h"
#include "stm32f1xx_hal.h"



void Motor_Control(uint8_t Motor_Direction, uint8_t Motor_Speed)
{
    HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, Motor_Direction);
    htim1.Instance->CCR1 = (Motor_Speed * 999) / 100;
}

