/*
 * main.h
 *
 *  Created on: Jan 30, 2024
 *      Author: sameh
 */

#ifndef MAIN_TE_H_
#define MAIN_TE_H_

#include "stm32f401xc.h"
#include "stm32f4xx_it.h"
#include "gpio.h"
#include "Timer.h"
#include "pid.h"
#include "mec_move.h"

extern volatile int16_t received_value;
extern char data_read;
extern uint32_t rpm;
extern volatile int pulses1;
extern volatile int16_t position1;
extern volatile int pulses2;
extern volatile int16_t position2;
extern volatile int16_t position3;
extern volatile int16_t position4;
extern uint8_t direction_flag;
extern int target;
extern int read;
extern volatile uint32_t c_millis;
extern volatile uint32_t prev_t1;
extern volatile uint32_t prev_t2;
extern volatile uint32_t prev_t3;
extern volatile uint32_t prev_t4;
extern volatile double speed1;
extern volatile double speed2;
extern volatile double speed3;
extern volatile double speed4;
extern int16_t speeds[4];


#endif /* MAIN_TE_H_ */
