#ifndef M_CONTROL_H
#define M_CONTROL_H

extern TIM_HandleTypeDef htim1;

void Motor_Control(uint8_t Motor_Direction, uint8_t Motor_Speed);

#endif