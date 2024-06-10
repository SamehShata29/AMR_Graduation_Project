/*
 * uart.c
 *
 *  Created on: Feb 15, 2024
 *      Author: sameh
 */


#include "uart.h"


Std_ReturnStatus USART_enable(USART_TypeDef *USART, uint32_t baud_rate, uint32_t sys_clk)
{
	if(NULL == USART)
	{
		return E_NOK;
	}
	else
	{
		//Calculate baud rate register value
		uint32_t temp_BRR = sys_clk/(8* (2 - (USART->CR1 & (1 << 15))) * baud_rate);

		//Enable USART clock
		if(USART == USART1){USART1_ENABLE();}
		else if(USART == USART2){USART2_ENABLE();}
		else if(USART == USART2){USART2_ENABLE();}
		else if(USART == USART6){USART6_ENABLE();}

		//set the baud rate register value
		USART->BRR = temp_BRR;
		//Enable RNXE interrupt
		USART->CR1 |= USART_CR1_RXNEIE;
		//Enable TXE interrupt
		USART->CR1 |= USART_CR1_TXEIE;
		//Enable Transmitter
		USART->CR1 |= USART_CR1_TE;
		//Enable Reciver
		USART->CR1 |= USART_CR1_RE;
		//Enable USART
		USART->CR1 |= USART_CR1_UE;

	}
}

void USART_send_char(USART_TypeDef *USART, char data)
{
	//Check that there is no data in the buffer
	while(!(USART->CR1 & USART_SR_TXE));
	//send data
	USART->DR = data;
}
