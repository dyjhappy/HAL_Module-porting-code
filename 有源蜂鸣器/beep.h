/**
 * @file beep.h
 * @brief  蜂鸣器驱动程序
 * @author 王晓荣
 * @version 
 * @date 2020-08-21
 */
 
#ifndef __BEEP_H
#define __BEEP_H

#include "main.h"

#define GPO_BEEP_GPIO_Port   GPIOB
#define GPO_BEEP_Pin         GPIO_PIN_15
#define	beep_on()    HAL_GPIO_WritePin(GPO_BEEP_GPIO_Port, GPO_BEEP_Pin, GPIO_PIN_RESET)
#define	beep_off()   HAL_GPIO_WritePin(GPO_BEEP_GPIO_Port, GPO_BEEP_Pin, GPIO_PIN_SET)

#endif 
