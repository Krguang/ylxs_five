/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */     

#include "bsp_adc.h"
#include "bsp_digitalTube.h"
#include "iwdg.h"

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
/* USER CODE BEGIN Variables */

/* USER CODE END Variables */
osThreadId TaskDisplay1Handle;
osThreadId TaskDisplay2Handle;
osThreadId TaskDisplay3Handle;
osThreadId TaskCollectDataHandle;
osThreadId TaskModbusHandle;

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */
   
static void dataProcess(void);

/* USER CODE END FunctionPrototypes */

void StartTaskDisplay1(void const * argument);
void StartTaskDisplay2(void const * argument);
void StartTaskDisplay3(void const * argument);
void StartTaskCollectData(void const * argument);
void StartTaskModbus(void const * argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* GetIdleTaskMemory prototype (linked to static allocation support) */
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize );

/* USER CODE BEGIN GET_IDLE_TASK_MEMORY */
static StaticTask_t xIdleTaskTCBBuffer;
static StackType_t xIdleStack[configMINIMAL_STACK_SIZE];
  
void vApplicationGetIdleTaskMemory( StaticTask_t **ppxIdleTaskTCBBuffer, StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize )
{
  *ppxIdleTaskTCBBuffer = &xIdleTaskTCBBuffer;
  *ppxIdleTaskStackBuffer = &xIdleStack[0];
  *pulIdleTaskStackSize = configMINIMAL_STACK_SIZE;
  /* place for user code */
}                   
/* USER CODE END GET_IDLE_TASK_MEMORY */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */
       
  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of TaskDisplay1 */
  osThreadDef(TaskDisplay1, StartTaskDisplay1, osPriorityNormal, 0, 128);
  TaskDisplay1Handle = osThreadCreate(osThread(TaskDisplay1), NULL);

  /* definition and creation of TaskDisplay2 */
  osThreadDef(TaskDisplay2, StartTaskDisplay2, osPriorityNormal, 0, 128);
  TaskDisplay2Handle = osThreadCreate(osThread(TaskDisplay2), NULL);

  /* definition and creation of TaskDisplay3 */
  osThreadDef(TaskDisplay3, StartTaskDisplay3, osPriorityNormal, 0, 128);
  TaskDisplay3Handle = osThreadCreate(osThread(TaskDisplay3), NULL);

  /* definition and creation of TaskCollectData */
  osThreadDef(TaskCollectData, StartTaskCollectData, osPriorityNormal, 0, 128);
  TaskCollectDataHandle = osThreadCreate(osThread(TaskCollectData), NULL);

  /* definition and creation of TaskModbus */
  osThreadDef(TaskModbus, StartTaskModbus, osPriorityNormal, 0, 128);
  TaskModbusHandle = osThreadCreate(osThread(TaskModbus), NULL);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

}

/* USER CODE BEGIN Header_StartTaskDisplay1 */
/**
  * @brief  Function implementing the TaskDisplay1 thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_StartTaskDisplay1 */
void StartTaskDisplay1(void const * argument)
{
  /* USER CODE BEGIN StartTaskDisplay1 */
  /* Infinite loop */
  for(;;)
  {
	digitalTubeDisplay(1, gasData[4]);
	digitalTubeDisplay(2, gasData[3]);
	
	
  }
  /* USER CODE END StartTaskDisplay1 */
}

/* USER CODE BEGIN Header_StartTaskDisplay2 */
/**
* @brief Function implementing the TaskDisplay2 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTaskDisplay2 */
void StartTaskDisplay2(void const * argument)
{
  /* USER CODE BEGIN StartTaskDisplay2 */
  /* Infinite loop */
  for(;;)
  {
	  led3Close();
	  digitalTubeDisplay(3, gasData[2]);
  }
  /* USER CODE END StartTaskDisplay2 */
}

/* USER CODE BEGIN Header_StartTaskDisplay3 */
/**
* @brief Function implementing the TaskDisplay3 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTaskDisplay3 */
void StartTaskDisplay3(void const * argument)
{
  /* USER CODE BEGIN StartTaskDisplay3 */
  /* Infinite loop */
  for(;;)
  {
	  digitalTubeDisplay(4, gasData[1]);
	  digitalTubeDisplay(5, gasData[0]);
  }
  /* USER CODE END StartTaskDisplay3 */
}

/* USER CODE BEGIN Header_StartTaskCollectData */
/**
* @brief Function implementing the TaskCollectData thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTaskCollectData */
void StartTaskCollectData(void const * argument)
{
  /* USER CODE BEGIN StartTaskCollectData */
  /* Infinite loop */
  for(;;)
  {
	dataProcess();
    osDelay(100);
	HAL_IWDG_Refresh(&hiwdg);
  }
  /* USER CODE END StartTaskCollectData */
}

/* USER CODE BEGIN Header_StartTaskModbus */
/**
* @brief Function implementing the TaskModbus thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_StartTaskModbus */
void StartTaskModbus(void const * argument)
{
  /* USER CODE BEGIN StartTaskModbus */
  /* Infinite loop */
  for(;;)
  {
    osDelay(10);
  }
  /* USER CODE END StartTaskModbus */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */
     



static void dataProcess()
{

	uint8_t temp1 = HAL_GPIO_ReadPin(sw_in1_GPIO_Port, sw_in1_Pin);
	uint8_t temp2 = HAL_GPIO_ReadPin(sw_in2_GPIO_Port, sw_in2_Pin);
	uint8_t temp = (temp1 << 1) + temp2;


	/*
		²¦Âë		Á¿³Ì
		11		-50/+50
		10		0/+50
		01		-100/+100
		00		0/+100
	*/

	gasCollect();

	switch (temp)
	{
	case 0:
		for (size_t i = 0; i < 5; i++)
		{
			gasData[i] = gasDataOriginal[i] / 10;
		}
		break;
	case 1:
		for (size_t i = 0; i < 5; i++)
		{
			gasData[i] = gasDataOriginal[i] / 5 - 100;
		}
		break;
	case 2:
		for (size_t i = 0; i < 5; i++)
		{
			gasData[i] = gasDataOriginal[i] / 20;
		}
		break;
	case 3:
		for (size_t i = 0; i < 5; i++)
		{
			gasData[i] = gasDataOriginal[i] / 10 - 50;
		}
		break;
	default:
		break;
	}

	if (gasDataOriginal[4] > 900)
	{
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_SET);
	}
	else {
		HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin, GPIO_PIN_RESET);
	}

	if (gasDataOriginal[3] > 900)
	{
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
	}
	else {
		HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);
	}

	if (gasDataOriginal[2] > 900)
	{
		HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_SET);
	}
	else {
		HAL_GPIO_WritePin(red3_GPIO_Port, red3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green3_GPIO_Port, green3_Pin, GPIO_PIN_RESET);
	}

	if (gasDataOriginal[1] > 900)
	{
		HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_SET);
	}
	else {
		HAL_GPIO_WritePin(red4_GPIO_Port, red4_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green4_GPIO_Port, green4_Pin, GPIO_PIN_RESET);
	}

	if (gasDataOriginal[0] > 900)
	{
		HAL_GPIO_WritePin(red5_GPIO_Port, red5_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(green5_GPIO_Port, green5_Pin, GPIO_PIN_SET);
	}
	else {
		HAL_GPIO_WritePin(red5_GPIO_Port, red5_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(green5_GPIO_Port, green5_Pin, GPIO_PIN_RESET);
	}
}


/* USER CODE END Application */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
