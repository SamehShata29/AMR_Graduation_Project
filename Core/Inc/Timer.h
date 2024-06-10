/*
 * Timer.h
 *
 *  Created on: Feb 5, 2024
 *      Author: sameh
 */

#ifndef TIMER_H_
#define TIMER_H_

/*================= includes =================*/
#include "gpio.h"
#include "common.h"
/*================= Macros =================*/

/*================= User defined data types =================*/
typedef enum
{
	CH1,
	CH2,
	CH3,
	CH4
}channel_t;

typedef struct
{
	uint32_t ch;
	uint32_t freq;
	uint32_t duty_cycle;
}PWM_config;

/*================= Software interfaces =================*/
Std_ReturnStatus PWM_GEN(TIM_TypeDef *TIMER,PWM_config* PWM_cfg ,uint32_t timer_clk);
Std_ReturnStatus INT_GEN_ms(TIM_TypeDef *TIMER,uint32_t t_ms ,uint32_t timer_clk);
void tdelay_ms(uint32_t t_ms ,uint32_t timer_clk);
void encoder_mode(void);
#endif /* TIMER_H_ */
