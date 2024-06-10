/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
#include "stdlib.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "publishernode.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart1;
DMA_HandleTypeDef hdma_usart1_rx;
DMA_HandleTypeDef hdma_usart1_tx;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_DMA_Init(void);
static void MX_USART1_UART_Init(void);
/* USER CODE BEGIN PFP */
void pins_init(void);
void test_pin(void);
void ext_pin(void);
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
volatile int16_t received_value=0;
char data_read = 0;
volatile int pulses1 = 0;
volatile int16_t position1 = 0;
volatile int pulses2 = 0;
volatile int16_t position2 = 0;
volatile int16_t position3 = 0;
volatile int16_t position4 = 0;
volatile uint32_t c_millis = 0;
volatile uint32_t prev_t1 = 0;
volatile uint32_t prev_t2 = 0;
volatile uint32_t prev_t3 = 0;
volatile uint32_t prev_t4 = 0;


volatile double speed1 = 0;
volatile double speed2 = 0;
volatile double speed3 = 0;
volatile double speed4 = 0;

int16_t speeds[4];

//A0
PWM_config pwm1 = {.ch = CH1, .freq = 3500, .duty_cycle = 0};
//A1
PWM_config pwm2 = {.ch = CH2, .freq = 3500, .duty_cycle = 0};
//A2
PWM_config pwm3 = {.ch = CH3, .freq = 3500, .duty_cycle = 0};
//A3
PWM_config pwm4 = {.ch = CH4, .freq = 3500, .duty_cycle = 0};




/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_DMA_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */
  setup();
  pins_init();
  ext_pin();
//  INT_GEN_ms(TIM4, 1, 16000000);
//  speeds[0] = 0;
//  speeds[1] = -10;
//  speeds[2] = 10;
//  speeds[3] = 0;
//  GPIO_Write_Pin(GPIOB, 4, GPIO_HIGH);
//  pwm4.duty_cycle = 500;
//  PWM_GEN(TIM2, &pwm4, 16000000);
  /* USER CODE END 2 */
//  pwm1.duty_cycle = 500;
//  pwm2.duty_cycle = 500;
//  pwm3.duty_cycle = 500;
//  pwm4.duty_cycle = 1000;
//  PWM_GEN(TIM2, &pwm1, 16000000);
//  PWM_GEN(TIM2, &pwm2, 16000000);
//  PWM_GEN(TIM2, &pwm3, 16000000);
//  GPIO_Write_Pin(GPIOB, 4, GPIO_HIGH);
//  PWM_GEN(TIM2, &pwm4, 16000000);
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  /* USER CODE END WHILE */

	  /* USER CODE BEGIN 3 */
	  loop();

	  /* ====================== AutoMode ===================== */
//	  if(speeds[2] < 0)
//	  {
//		  GPIO_Write_Pin(GPIOB, 1, GPIO_LOW);
//	  }
//	  else
//	  {
//		  GPIO_Write_Pin(GPIOB, 1, GPIO_HIGH);
//	  }
//	  if(speeds[0] < 0)
//	  {
//		  GPIO_Write_Pin(GPIOB, 2, GPIO_LOW);
//	  }
//	  else
//	  {
//		  GPIO_Write_Pin(GPIOB, 2, GPIO_HIGH);
//	  }
//	  if(speeds[1] > 0)
//	  {
//		  GPIO_Write_Pin(GPIOB, 3, GPIO_LOW);
//	  }
//	  else
//	  {
//		  GPIO_Write_Pin(GPIOB, 3, GPIO_HIGH);
//	  }
//	  if(speeds[3] > 0)
//	  {
//		  GPIO_Write_Pin(GPIOB, 4, GPIO_LOW);
//	  }
//	  else
//	  {
//		  GPIO_Write_Pin(GPIOB, 4, GPIO_HIGH);
//	  }
//	  pwm2.duty_cycle = abs(pid_calc1(speeds[0], (int)speed1));
//	  GPIO_Write_Pin(GPIOB, 2, GPIO_HIGH);
//	  pwm2.duty_cycle = 295;
//	  PWM_GEN(TIM2, &pwm2, 16000000);
//	  GPIO_Write_Pin(GPIOB, 1, GPIO_HIGH);
//	  pwm1.duty_cycle = 1000;
//	  pwm2.duty_cycle = 1000;
//	  pwm3.duty_cycle = 1000;
//	  pwm4.duty_cycle = 1000;
//	  pwm2.duty_cycle = abs(pid_calc2(speeds[0], (int)speed1));
//	  pwm1.duty_cycle = abs(pid_calc1(speeds[2], (int)speed3));
//	  pwm3.duty_cycle = abs(pid_calc3(speeds[1], (int)speed2));
//	  pwm4.duty_cycle = abs(pid_calc4(speeds[3], (int)speed4));
//	  for(long long int i = 0; i < 1000;i++);
//	  PWM_GEN(TIM2, &pwm4, 16000000);
//	  for(long long int i = 0; i < 1000;i++);
//	  PWM_GEN(TIM2, &pwm1, 16000000);
//	  for(long long int i = 0; i < 1000;i++);
//	  PWM_GEN(TIM2, &pwm2, 16000000);
//	  for(long long int i = 0; i < 1000;i++);
//	  PWM_GEN(TIM2, &pwm3, 16000000);
//	  pwm1.duty_cycle = 500;
//	  GPIO_Write_Pin(GPIOB, 1, GPIO_LOW);
//	  pwm1.duty_cycle = 500;
//	  pwm3.duty_cycle = abs(pid_calc3(speeds[1], (int)speed2));

//	  pwm2.duty_cycle = pid_calc(speeds[0], (int)speed1);
//	  PWM_GEN(TIM2, &pwm2, 16000000);
//	  pwm3.duty_cycle = pid_calc(speeds[1], (int)speed2);
//	  PWM_GEN(TIM2, &pwm3, 16000000);
//	  pwm4.duty_cycle = pid_calc(speeds[3], (int)speed4);
//	  PWM_GEN(TIM2, &pwm4, 16000000);

	  /* ====================== WebMode ===================== */
	  if (received_value==1){
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  forward(0, 0);
	  }
	  else if (received_value==2) {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  backward(0, 0);
	  }
	  else if (received_value==3) {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  side_right(0, 0);
	  }
	  else if (received_value==4) {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  side_left(0, 0);
	  }
	  else if (received_value==5) {
		  pwm1.duty_cycle = 0;
		  pwm2.duty_cycle = 0;
		  pwm3.duty_cycle = 0;
		  pwm4.duty_cycle = 0;
		  //M1
		  PWM_GEN(TIM2, &pwm1, 16000000);
		  //M2
		  PWM_GEN(TIM2, &pwm2, 16000000);
		  //M3
		  PWM_GEN(TIM2, &pwm3, 16000000);
		  //M4
		  PWM_GEN(TIM2, &pwm4, 16000000);

		  GPIO_Write_Pin(GPIOB, 7, GPIO_LOW);
		  GPIO_Write_Pin(GPIOB, 8, GPIO_LOW);
	  }
	  else if(received_value==6)
	  {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  rotate_left(0, 0);
	  }
	  else if(received_value==7)
	  {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  rotate_right(0, 0);
	  }
	  else if(received_value==8)
	  {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  diagonal_left_fw(0, 0);
	  }
	  else if(received_value==9)
	  {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  diagonal_left_bw(0, 0);
	  }
	  else if(received_value==10)
	  {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  diagonal_right_fw(0, 0);
	  }
	  else if(received_value==11)
	  {
		  pwm1.duty_cycle = 250;
		  pwm2.duty_cycle = 250;
		  pwm3.duty_cycle = 250;
		  pwm4.duty_cycle = 250;
		  diagonal_right_bw(0, 0);
	  }
	  else if(received_value==12)
	  {
		  GPIO_Write_Pin(GPIOB, 7, GPIO_HIGH);
		  for(int i = 0; i < 1600000;i++);
		  GPIO_Write_Pin(GPIOB, 7, GPIO_LOW);
		  received_value = 5;
	  }

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 57600;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * Enable DMA controller clock
  */
static void MX_DMA_Init(void)
{

  /* DMA controller clock enable */
  __HAL_RCC_DMA2_CLK_ENABLE();

  /* DMA interrupt init */
  /* DMA2_Stream2_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream2_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream2_IRQn);
  /* DMA2_Stream7_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(DMA2_Stream7_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(DMA2_Stream7_IRQn);

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOH_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);

  /*Configure GPIO pin : PC13 */
  GPIO_InitStruct.Pin = GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : PB10 PB13 PB8 */
  GPIO_InitStruct.Pin = GPIO_PIN_10|GPIO_PIN_13|GPIO_PIN_8;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : PA11 */
  GPIO_InitStruct.Pin = GPIO_PIN_11;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

  HAL_NVIC_SetPriority(EXTI15_10_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI15_10_IRQn);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	if(GPIO_Pin == GPIO_PIN_8)
	{
		if(GPIO_Read_Pin(GPIOB, 9) == 0)
		{
			position1++;
			speed1 = 1000.0/(c_millis - prev_t1);
		}
		else if(GPIO_Read_Pin(GPIOB, 9) == 1)
		{
			position1--;
			speed1 = -1000.0/(c_millis - prev_t1);
		}
		prev_t1 = c_millis;
	}

	if(GPIO_Pin == GPIO_PIN_11)
	{
		if(GPIO_Read_Pin(GPIOA, 12) == 0)
		{
			position2++;
			speed2 = 1000.0/(c_millis - prev_t2);
		}
		else if(GPIO_Read_Pin(GPIOA, 12) == 1)
		{
			position2--;
			speed2 = -1000.0/(c_millis - prev_t2);
		}
		prev_t2 = c_millis;
	}
	if(GPIO_Pin == GPIO_PIN_10)
	{
		if(GPIO_Read_Pin(GPIOB, 0) == 0)
		{
			position3--;
			speed3 = -1.0*1000.0/(c_millis - prev_t3);
		}
		else if(GPIO_Read_Pin(GPIOB, 0) == 1)
		{
			position3++;
			speed3 = 1000.0/(c_millis - prev_t3);
		}
		prev_t3 = c_millis;
	}
	if(GPIO_Pin == GPIO_PIN_13)
	{
		if(GPIO_Read_Pin(GPIOB, 14) == 0)
		{
			position4--;
			speed4 = -1000.0/(c_millis - prev_t4);
		}
		else if(GPIO_Read_Pin(GPIOB, 14) == 1)
		{
			position4++;
			speed4 = 1000.0/(c_millis - prev_t4);
		}
		prev_t4 = c_millis;
	}
}


void pins_init(void)
{
	GPIOA_ENABLE();
	GPIOB_ENABLE();
	Pin_cfg direction_1 = {0};
	direction_1.Gpio = GPIOB;
	direction_1.mode = Output;
	direction_1.outSpeed = HighSpeed;
	direction_1.outType = PushPull;
	direction_1.pin_no = 1;
	direction_1.pull = None;
	GPIO_Init(&direction_1);

	Pin_cfg direction_2 = {0};
	direction_2.Gpio = GPIOB;
	direction_2.mode = Output;
	direction_2.outSpeed = HighSpeed;
	direction_2.outType = PushPull;
	direction_2.pin_no = 2;
	direction_2.pull = None;
	GPIO_Init(&direction_2);

	Pin_cfg direction_3 = {0};
	direction_3.Gpio = GPIOB;
	direction_3.mode = Output;
	direction_3.outSpeed = HighSpeed;
	direction_3.outType = PushPull;
	direction_3.pin_no = 3;
	direction_3.pull = None;
	GPIO_Init(&direction_3);

	Pin_cfg direction_4 = {0};
	direction_4.Gpio = GPIOB;
	direction_4.mode = Output;
	direction_4.outSpeed = HighSpeed;
	direction_4.outType = PushPull;
	direction_4.pin_no = 4;
	direction_4.pull = None;
	GPIO_Init(&direction_4);

	Pin_cfg arduino1 = {0};
	arduino1.Gpio = GPIOB;
	arduino1.mode = Output;
	arduino1.outSpeed = HighSpeed;
	arduino1.outType = PushPull;
	arduino1.pin_no = 7;
	arduino1.pull = None;
	GPIO_Init(&arduino1);


}

void ext_pin(void)
{
//	Pin_cfg ext_pin1 = {0};
//	ext_pin1.Gpio = GPIOB;
//	ext_pin1.mode = Input;
//	ext_pin1.pin_no = 8;
//	ext_pin1.pull = PullUp;
//	GPIO_Init(&ext_pin1);
//
//	Pin_cfg ext_pin2 = {0};
//	ext_pin2.Gpio = GPIOB;
//	ext_pin2.mode = Input;
//	ext_pin2.pin_no = 9;
//	ext_pin2.pull = PullUp;
//	GPIO_Init(&ext_pin2);

	Pin_cfg ext_pin1 = {0};
	ext_pin1.Gpio = GPIOB;
	ext_pin1.mode = Input;
	ext_pin1.pin_no = 9;
	ext_pin1.pull = PullUp;
	GPIO_Init(&ext_pin1);

	Pin_cfg ext_pin2 = {0};
	ext_pin2.Gpio = GPIOA;
	ext_pin2.mode = Input;
	ext_pin2.pin_no = 12;
    ext_pin2.pull = PullUp;
	GPIO_Init(&ext_pin2);

	Pin_cfg ext_pin3 = {0};
	ext_pin3.Gpio = GPIOB;
	ext_pin3.mode = Input;
	ext_pin3.pin_no = 0;
	ext_pin3.pull = PullUp;
	GPIO_Init(&ext_pin3);

	Pin_cfg ext_pin4 = {0};
	ext_pin4.Gpio = GPIOB;
	ext_pin4.mode = Input;
	ext_pin4.pin_no = 14;
	ext_pin4.pull = PullUp;
	GPIO_Init(&ext_pin4);
}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
