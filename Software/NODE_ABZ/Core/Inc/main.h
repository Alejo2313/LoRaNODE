/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
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
#include "stm32l0xx_hal.h"

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
#define PA15_RESERVED_Pin GPIO_PIN_15
#define PA15_RESERVED_GPIO_Port GPIOA
#define PB3_RESERVED_Pin GPIO_PIN_3
#define PB3_RESERVED_GPIO_Port GPIOB
#define PA12_RESERVED_Pin GPIO_PIN_12
#define PA12_RESERVED_GPIO_Port GPIOA
#define PB4_RESERVED_Pin GPIO_PIN_4
#define PB4_RESERVED_GPIO_Port GPIOB
#define PB4_RESERVED_EXTI_IRQn EXTI4_15_IRQn
#define PC13_RESERVED_Pin GPIO_PIN_13
#define PC13_RESERVED_GPIO_Port GPIOC
#define PC13_RESERVED_EXTI_IRQn EXTI4_15_IRQn
#define PC1_RESERVED_Pin GPIO_PIN_1
#define PC1_RESERVED_GPIO_Port GPIOC
#define PC0_RESERVED_Pin GPIO_PIN_0
#define PC0_RESERVED_GPIO_Port GPIOC
#define PB1_RESERVED_Pin GPIO_PIN_1
#define PB1_RESERVED_GPIO_Port GPIOB
#define PB1_RESERVED_EXTI_IRQn EXTI0_1_IRQn
#define PA1_RESERVED_Pin GPIO_PIN_1
#define PA1_RESERVED_GPIO_Port GPIOA
#define PC2_RESERVED_Pin GPIO_PIN_2
#define PC2_RESERVED_GPIO_Port GPIOC
#define PA7_RESERVED_Pin GPIO_PIN_7
#define PA7_RESERVED_GPIO_Port GPIOA
#define STLINK_RX_Pin GPIO_PIN_2
#define STLINK_RX_GPIO_Port GPIOA
#define PB0_RESERVED_Pin GPIO_PIN_0
#define PB0_RESERVED_GPIO_Port GPIOB
#define PB0_RESERVED_EXTI_IRQn EXTI0_1_IRQn
#define PA6_RESERVED_Pin GPIO_PIN_6
#define PA6_RESERVED_GPIO_Port GPIOA
#define STLINK_TX_Pin GPIO_PIN_3
#define STLINK_TX_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

#define RTC_N_PREDIV_S 10
#define RTC_PREDIV_S ((1<<RTC_N_PREDIV_S)-1)
#define RTC_PREDIV_A ((1<<(15-RTC_N_PREDIV_S))-1)
#define USART_BAUDRATE 115200

/* Pin mapping */

/* Definition for UARTx clock resources */
#define DMAx_CLK_ENABLE()                __HAL_RCC_DMA1_CLK_ENABLE()
#define DMAMUX_CLK_ENABLE()              __HAL_RCC_DMAMUX1_CLK_ENABLE()

/* Definition for USARTx's DMA Request */
#define USARTx_TX_DMA_REQUEST             DMA_REQUEST_4
/* Definition for USARTx's DMA */
#define USARTx_TX_DMA_CHANNEL             DMA1_Channel7

/* Definition for USARTx's NVIC */
#define USARTx_DMA_TX_IRQn                DMA1_Channel4_5_6_7_IRQn
#define USARTx_DMA_TX_IRQHandler          DMA1_Channel4_5_6_7_IRQHandler

/* Definition for USARTx's NVIC */
#define USARTx_IRQn                      USART2_IRQn
#define USARTx_Priority 0
#define USARTx_DMA_Priority 0


#define USARTx_RX_Pin GPIO_PIN_3
#define USARTx_RX_GPIO_Port GPIOA
#define USARTx_TX_Pin GPIO_PIN_2
#define USARTx_TX_GPIO_Port GPIOA

#define USARTx_RX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()
#define USARTx_TX_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()

#define USARTx_TX_AF                     GPIO_AF4_USART2
#define USARTx_RX_AF                     GPIO_AF4_USART2

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
