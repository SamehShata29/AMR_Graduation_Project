/*
 * mec_move.h
 *
 *  Created on: Feb 13, 2024
 *      Author: sameh
 */

#ifndef MEC_MOVE_H_
#define MEC_MOVE_H_
/*================= includes =================*/
#include "gpio.h"
#include "Timer.h"
#include "RCC.h"
#include "main_te.h"
/*================= Software interfaces =================*/
void forward(int target, int position);
void backward(int target, int position);
void rotate_left(int target, int position);
void rotate_right(int target, int position);
void side_right(int target, int position);
void side_left(int target, int position);
void diagonal_right_fw(int target, int position);
void diagonal_right_bw(int target, int position);
void diagonal_left_fw(int target, int position);
void diagonal_left_bw(int target, int position);
#endif /* MEC_MOVE_H_ */
