 while (1)
  {
		//判断开关是否闭合
		if(HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8)==RESET)
		{
			//开关闭合，灯不闪烁
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET); 
		}
		else
		{
			//LED闪烁程序
			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET);
		  HAL_Delay(100);
		  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET);
		  HAL_Delay(100);
		}
  }
