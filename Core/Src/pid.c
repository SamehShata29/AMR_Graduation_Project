/*
 * pid.c
 *
 *  Created on: Feb 7, 2024
 *      Author: sameh
 */

float err1, prev_err1 = 0, diff1, integral1, result1;
int kp = 10, kd = 0;
float ki = 0.12;
float integg1 = 0;
int pid_calc1(int target, int actual)
{
	err1 = target - actual;
	diff1 = err1 - prev_err1;
	integral1 += err1;
	integg1 = ki * integral1;
	if((integg1 > 1000))
	{
		integg1 = 1000;
	}
	else if((integg1 < -1000))
	{
		integg1 = -1000;
	}
	result1 = kp*err1 + kd*diff1 + integg1;
	if(result1 > 1000)
	{
		result1 = 1000;
	}
	else if(result1 < -1000)
	{
		result1 = -1000;
	}
	prev_err1 = err1;
	return result1;
}
/*=================================================*/
float err2, prev_err2 = 0, diff2, integral2, result2;
float integg2 = 0;
float kp2 = 10, kd2 = 0;
float ki2 = 0.12;
int pid_calc2(int target, int actual)
{
	err2 = target - actual;
	diff2 = err2 - prev_err2;
	integral2 += err2;
	integg2 = ki2 * integral2;
	if((integg2 > 1000))
	{
		integg2 = 1000;
	}
	else if((integg2 < -1000))
	{
		integg2 = -1000;
	}
	result2 = kp2*err2 + kd2*diff2 + integg2;
	if(result2 > 1000)
	{
		result2 = 1000;
	}
	else if(result2 < -1000)
	{
		result2 = -1000;
	}
	prev_err2 = err2;
	return result2;
}
/*=================================================*/
float err3, prev_err3 = 0, diff3, integral3, result3;
float integg3 = 0;
float kp3 = 10, kd3 = 0.0;
float ki3 = 0.12;
int pid_calc3(int target, int actual)
{
	err3 = target - actual;
	diff3 = err3 - prev_err3;
	integral3 += err3;
	integg3 = ki3 * integral3;
	if((integg3 > 1000))
	{
		integg3 = 1000;
	}
	else if((integg3 < -900))
	{
		integg3 = -1000;
	}
	result3 = kp3*err3 + kd3*diff3 + integg3;
	if(result3 > 1000)
	{
		result3 = 1000;
	}
	else if(result3 < -1000)
	{
		result3 = -1000;
	}
	prev_err3 = err3;
	return result3;
}
/*=================================================*/
float err4, prev_err4 = 0, diff4, integral4, result4;
float integg4 = 0;
float kp4 = 10, kd4 = 0.0;
float ki4 = 0.12;
int pid_calc4(int target, int actual)
{
	err4 = target - actual;
	diff4 = err4 - prev_err4;
	integral4 += err4;
	integg4 = ki4 * integral4;
	if((integg4 > 1000))
	{
		integg4 = 1000;
	}
	else if((integg4 < -1000))
	{
		integg4 = -1000;
	}
	result4 = kp4*err4 + kd4*diff4 + integg4;
	if(result4 > 1000)
	{
		result4 = 1000;
	}
	else if(result4 < -1000)
	{
		result4 = -1000;
	}
	prev_err4 = err4;
	return result4;
}
