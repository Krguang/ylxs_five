/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define red5_Pin GPIO_PIN_2
#define red5_GPIO_Port GPIOE
#define green5_Pin GPIO_PIN_3
#define green5_GPIO_Port GPIOE
#define red4_Pin GPIO_PIN_4
#define red4_GPIO_Port GPIOE
#define green4_Pin GPIO_PIN_5
#define green4_GPIO_Port GPIOE
#define red3_Pin GPIO_PIN_6
#define red3_GPIO_Port GPIOA
#define green3_Pin GPIO_PIN_7
#define green3_GPIO_Port GPIOA
#define red2_Pin GPIO_PIN_4
#define red2_GPIO_Port GPIOC
#define green2_Pin GPIO_PIN_5
#define green2_GPIO_Port GPIOC
#define red1_Pin GPIO_PIN_0
#define red1_GPIO_Port GPIOB
#define green1_Pin GPIO_PIN_1
#define green1_GPIO_Port GPIOB
#define led9_sw_Pin GPIO_PIN_2
#define led9_sw_GPIO_Port GPIOB
#define led8_sw_Pin GPIO_PIN_7
#define led8_sw_GPIO_Port GPIOE
#define led7_sw_Pin GPIO_PIN_8
#define led7_sw_GPIO_Port GPIOE
#define led6_sw_Pin GPIO_PIN_9
#define led6_sw_GPIO_Port GPIOE
#define led5_sw_Pin GPIO_PIN_10
#define led5_sw_GPIO_Port GPIOE
#define led4_sw_Pin GPIO_PIN_11
#define led4_sw_GPIO_Port GPIOE
#define led3_sw_Pin GPIO_PIN_12
#define led3_sw_GPIO_Port GPIOE
#define led2_sw_Pin GPIO_PIN_13
#define led2_sw_GPIO_Port GPIOE
#define led1_sw_Pin GPIO_PIN_14
#define led1_sw_GPIO_Port GPIOE
#define led485_Pin GPIO_PIN_15
#define led485_GPIO_Port GPIOE
#define e1_Pin GPIO_PIN_9
#define e1_GPIO_Port GPIOD
#define d1_Pin GPIO_PIN_10
#define d1_GPIO_Port GPIOD
#define a1_Pin GPIO_PIN_11
#define a1_GPIO_Port GPIOD
#define f1_Pin GPIO_PIN_12
#define f1_GPIO_Port GPIOD
#define b1_Pin GPIO_PIN_13
#define b1_GPIO_Port GPIOD
#define dp1_Pin GPIO_PIN_14
#define dp1_GPIO_Port GPIOD
#define c1_Pin GPIO_PIN_15
#define c1_GPIO_Port GPIOD
#define g1_Pin GPIO_PIN_6
#define g1_GPIO_Port GPIOC
#define e2_Pin GPIO_PIN_7
#define e2_GPIO_Port GPIOC
#define d2_Pin GPIO_PIN_8
#define d2_GPIO_Port GPIOC
#define a2_Pin GPIO_PIN_9
#define a2_GPIO_Port GPIOC
#define f2_Pin GPIO_PIN_8
#define f2_GPIO_Port GPIOA
#define g2_Pin GPIO_PIN_9
#define g2_GPIO_Port GPIOA
#define c2_Pin GPIO_PIN_10
#define c2_GPIO_Port GPIOA
#define dp2_Pin GPIO_PIN_11
#define dp2_GPIO_Port GPIOA
#define b2_Pin GPIO_PIN_12
#define b2_GPIO_Port GPIOA
#define e3_Pin GPIO_PIN_15
#define e3_GPIO_Port GPIOA
#define d3_Pin GPIO_PIN_10
#define d3_GPIO_Port GPIOC
#define a3_Pin GPIO_PIN_11
#define a3_GPIO_Port GPIOC
#define f3_Pin GPIO_PIN_12
#define f3_GPIO_Port GPIOC
#define b3_Pin GPIO_PIN_0
#define b3_GPIO_Port GPIOD
#define dp3_Pin GPIO_PIN_1
#define dp3_GPIO_Port GPIOD
#define c3_Pin GPIO_PIN_2
#define c3_GPIO_Port GPIOD
#define g3_Pin GPIO_PIN_3
#define g3_GPIO_Port GPIOD
#define sw_in1_Pin GPIO_PIN_4
#define sw_in1_GPIO_Port GPIOD
#define sw_in2_Pin GPIO_PIN_5
#define sw_in2_GPIO_Port GPIOD
#define led10_sw_Pin GPIO_PIN_7
#define led10_sw_GPIO_Port GPIOD
#define led11_sw_Pin GPIO_PIN_3
#define led11_sw_GPIO_Port GPIOB
#define led12_sw_Pin GPIO_PIN_4
#define led12_sw_GPIO_Port GPIOB
#define led13_sw_Pin GPIO_PIN_5
#define led13_sw_GPIO_Port GPIOB
#define led14_sw_Pin GPIO_PIN_6
#define led14_sw_GPIO_Port GPIOB
#define led15_sw_Pin GPIO_PIN_7
#define led15_sw_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
