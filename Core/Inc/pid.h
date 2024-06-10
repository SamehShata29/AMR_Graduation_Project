/*
 * pid.h
 *
 *  Created on: Feb 7, 2024
 *      Author: sameh
 */

#ifndef PID_H_
#define PID_H_

/*================= includes =================*/
#include "gpio.h"
#include "Timer.h"
/*================= Macros =================*/

/*================= User defined data types =================*/
extern float result1;
/*================= Software interfaces =================*/
int pid_calc1(int target, int actual);
int pid_calc2(int target, int actual);
int pid_calc3(int target, int actual);
int pid_calc4(int target, int actual);

#endif /* PID_H_ */
