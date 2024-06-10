/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f4xx_it.c
  * @brief   Interrupt Service Routines.
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f4xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern DMA_HandleTypeDef hdma_usart1_rx;
extern DMA_HandleTypeDef hdma_usart1_tx;
extern UART_HandleTypeDef huart1;
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M4 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
  while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Pre-fetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F4xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f4xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles USART1 global interrupt.
  */
void USART1_IRQHandler(void)
{
  /* USER CODE BEGIN USART1_IRQn 0 */

  /* USER CODE END USART1_IRQn 0 */
  HAL_UART_IRQHandler(&huart1);
  /* USER CODE BEGIN USART1_IRQn 1 */

  /* USER CODE END USART1_IRQn 1 */
}

/**
  * @brief This function handles DMA2 stream2 global interrupt.
  */
void DMA2_Stream2_IRQHandler(void)
{
  /* USER CODE BEGIN DMA2_Stream2_IRQn 0 */

  /* USER CODE END DMA2_Stream2_IRQn 0 */
  HAL_DMA_IRQHandler(&hdma_usart1_rx);
  /* USER CODE BEGIN DMA2_Stream2_IRQn 1 */

  /* USER CODE END DMA2_Stream2_IRQn 1 */
}

/**
  * @brief This function handles DMA2 stream7 global interrupt.
  */
void DMA2_Stream7_IRQHandler(void)
{
  /* USER CODE BEGIN DMA2_Stream7_IRQn 0 */

  /* USER CODE END DMA2_Stream7_IRQn 0 */
  HAL_DMA_IRQHandler(&hdma_usart1_tx);
  /* USER CODE BEGIN DMA2_Stream7_IRQn 1 */

  /* USER CODE END DMA2_Stream7_IRQn 1 */
}

/* USER CODE BEGIN 1 */

//void EXTI1_IRQHandler(void)
//{
//	//Clear pending to prevent infinite loop of handler.
//	EXTI->PR |= EXTI_PR_PR1;
//	//Interrupt handler code.
//}
//
///**
//  * @brief  This function handles EXTI2 interrupt request.
//  * @param  None
//  * @retval None
//  */
//void EXTI2_IRQHandler(void)
//{
//	//Clear pending to prevent infinite loop of handler.
//	EXTI->PR |= EXTI_PR_PR2;
//	//Interrupt handler code.
//}
//
///**
//  * @brief  This function handles EXTI3 interrupt request.
//  * @param  None
//  * @retval None
//  */
//void EXTI3_IRQHandler(void)
//{
//	//Clear pending to prevent infinite loop of handler.
//	EXTI->PR |= EXTI_PR_PR3;
//	//Interrupt handler code.
//
//}
//
///**
//  * @brief  This function handles EXTI4 interrupt request.
//  * @param  None
//  * @retval None
//  */
//void EXTI4_IRQHandler(void)
//{
//	//Clear pending to prevent infinite loop of handler.
//	EXTI->PR |= EXTI_PR_PR4;
//	//Interrupt handler code.
//
//}
//
///**
//  * @brief  This function handles EXTI5:EXTI9 interrupt request.
//  * @param  None
//  * @retval None
//  */
//void EXTI9_5_IRQHandler(void)
//{
//	//Check if the interrupt is coming from line 5
//	if(EXTI->PR & (1 << 5))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR5;
//		//Interrupt handler code.
//
//	}
//	//Check if the interrupt is coming from line 6
//	if(EXTI->PR & (1 << 6))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR6;
//		//Interrupt handler code.
//		position1++;
//
//	}
//	//Check if the interrupt is coming from line 7
//	if(EXTI->PR & (1 << 7))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR7;
//		//Interrupt handler code.
//	}
//	//Check if the interrupt is coming from line 8
//	if(EXTI->PR & (1 << 8))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR8;
//		//Interrupt handler code.
//		if(GPIO_Read_Pin(GPIOB, 9) == 0)
//		{
//			position1++;
//		}
//		else if(GPIO_Read_Pin(GPIOB, 9) == 1)
//		{
//			position1--;
//		}
//		speed1 = 1000.0/(c_millis - prev_t1);
//		prev_t1 = c_millis;
//
//	}
//	//Check if the interrupt is coming from line 9
//	if(EXTI->PR & (1 << 9))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR9;
//		//Interrupt handler code.
//		GPIO_Toggle_Pin(GPIOA, 8);
//	}
//}
//
///**
//  * @brief  This function handles EXTI10:EXTI15 interrupt request.
//  * @param  None
//  * @retval None
//  */
//void EXTI15_10_IRQHandler(void)
//{
//	//Check if the interrupt is coming from line 10
//	if(EXTI->PR & (1 << 10))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR10;
//		//Interrupt handler code.
//		if(GPIO_Read_Pin(GPIOB, 0) == 0)
//		{
//			position3++;
//		}
//		else if(GPIO_Read_Pin(GPIOB, 0) == 1)
//		{
//			position3--;
//		}
//		speed3 = 1000.0/(c_millis - prev_t3);
//		prev_t3 = c_millis;
//	}
//	//Check if the interrupt is coming from line 11
//	if(EXTI->PR & (1 << 11))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR11;
//		//Interrupt handler code.
//		if(GPIO_Read_Pin(GPIOA, 12) == 0)
//		{
//			position2++;
//		}
//		else if(GPIO_Read_Pin(GPIOA, 12) == 1)
//		{
//			position2--;
//		}
//		speed2 = 1000.0/(c_millis - prev_t2);
//		prev_t2 = c_millis;
//	}
//	//Check if the interrupt is coming from line 12
//	if(EXTI->PR & (1 << 12))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR12;
//		//Interrupt handler code.
//
//
//	}
//	//Check if the interrupt is coming from line 13
//	if(EXTI->PR & (1 << 13))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR13;
//		//Interrupt handler code.
//		if(GPIO_Read_Pin(GPIOB, 14) == 0)
//		{
//			position4++;
//		}
//		else if(GPIO_Read_Pin(GPIOB, 14) == 1)
//		{
//			position4--;
//		}
//		speed4 = 1000.0/(c_millis - prev_t4);
//		prev_t4 = c_millis;
//	}
//	//Check if the interrupt is coming from line 14
//	if(EXTI->PR & (1 << 14))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR14;
//		//Interrupt handler code.
//	}
//	//Check if the interrupt is coming from line 15
//	if(EXTI->PR & (1 << 15))
//	{
//		//Clear pending to prevent infinite loop of handler.
//		EXTI->PR |= EXTI_PR_PR15;
//		//Interrupt handler code.
//	}
//}
///**
//  * @brief  This function handles Timer2 global interrupt request.
//  * @param  None
//  * @retval None
//  */
//void TIM2_IRQHandler(void)
//{
//
////	TIM2->SR &= ~TIM_SR_UIF;
////	GPIO_Toggle_Pin(GPIOA, 11);
//}
//
///**
//  * @brief  This function handles Timer3 global interrupt request.
//  * @param  None
//  * @retval None
//  */
//void TIM3_IRQHandler(void)
//{
////	TIM3->SR &= ~TIM_SR_UIF;
////	GPIO_Toggle_Pin(GPIOA, 11);
//}
//
///**
//  * @brief  This function handles Timer4 global interrupt request.
//  * @param  None
//  * @retval None
//  */
//void TIM4_IRQHandler(void)
//{
//	TIM4->SR &= ~TIM_SR_UIF;
//	c_millis++;
//}

/* USER CODE END 1 */
