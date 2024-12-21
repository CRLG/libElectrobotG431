/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "main_app.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;

extern I2C_HandleTypeDef hi2c2;

extern TIM_HandleTypeDef htim1;
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim4;
extern TIM_HandleTypeDef htim16;
extern TIM_HandleTypeDef htim17;

extern UART_HandleTypeDef huart2;

extern volatile uint8_t tick;
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Eana4_Pin GPIO_PIN_1
#define Eana4_GPIO_Port GPIOF
#define Eana1_Pin GPIO_PIN_0
#define Eana1_GPIO_Port GPIOA
#define Codeur1_B_Pin GPIO_PIN_1
#define Codeur1_B_GPIO_Port GPIOA
#define USART2_TX_Pin GPIO_PIN_2
#define USART2_TX_GPIO_Port GPIOA
#define USART2_RX_Pin GPIO_PIN_3
#define USART2_RX_GPIO_Port GPIOA
#define Eana2_Pin GPIO_PIN_4
#define Eana2_GPIO_Port GPIOA
#define Codeur1_A_Pin GPIO_PIN_5
#define Codeur1_A_GPIO_Port GPIOA
#define Eana3_Pin GPIO_PIN_6
#define Eana3_GPIO_Port GPIOA
#define Mot1_Sens2_Pin GPIO_PIN_7
#define Mot1_Sens2_GPIO_Port GPIOA
#define Mot2_Sens1_Pin GPIO_PIN_0
#define Mot2_Sens1_GPIO_Port GPIOB
#define Servo3_PWM_Pin GPIO_PIN_8
#define Servo3_PWM_GPIO_Port GPIOA
#define Servo1_PWM_Pin GPIO_PIN_10
#define Servo1_PWM_GPIO_Port GPIOA
#define Servo2_PWM_Pin GPIO_PIN_11
#define Servo2_PWM_GPIO_Port GPIOA
#define Mot2_PWM_Pin GPIO_PIN_12
#define Mot2_PWM_GPIO_Port GPIOA
#define T_SWDIO_Pin GPIO_PIN_13
#define T_SWDIO_GPIO_Port GPIOA
#define T_SWCLK_Pin GPIO_PIN_14
#define T_SWCLK_GPIO_Port GPIOA
#define Mot1_Sens1_Pin GPIO_PIN_15
#define Mot1_Sens1_GPIO_Port GPIOA
#define T_SWO_Pin GPIO_PIN_3
#define T_SWO_GPIO_Port GPIOB
#define Codeur2_A_Pin GPIO_PIN_4
#define Codeur2_A_GPIO_Port GPIOB
#define Codeur2_B_Pin GPIO_PIN_5
#define Codeur2_B_GPIO_Port GPIOB
#define Mot1_PWM_Pin GPIO_PIN_6
#define Mot1_PWM_GPIO_Port GPIOB
#define Mot2_Sens2_Pin GPIO_PIN_7
#define Mot2_Sens2_GPIO_Port GPIOB
#define LD2_Pin GPIO_PIN_8
#define LD2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
