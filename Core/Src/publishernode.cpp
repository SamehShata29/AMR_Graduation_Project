/*
 * publishernode.cpp
 *
 *  Created on: Feb 19, 2024
 *      Author: a
 */

#include "ros.h"
#include "std_msgs/String.h"
#include "publishernode.h"
#include <std_msgs/Empty.h>
#include <std_msgs/Bool.h>
#include <std_msgs/Int16.h>
#include "std_msgs/Int16MultiArray.h"

ros::NodeHandle nh;
std_msgs::Int16MultiArray arr_msg;
ros::Publisher pub("wheel_ticks", &arr_msg);
void RoboCallback(const std_msgs::Int16& msg) {

  received_value = msg.data;

}

void AutoCallback(const std_msgs::Int16MultiArray& msg) {

	speeds[0] = msg.data[0];
	speeds[1] = msg.data[1];
	speeds[2] = msg.data[2];
	speeds[3] = msg.data[3];

}


ros::Subscriber<std_msgs::Int16> sub("mode_topic", &RoboCallback);
ros::Subscriber<std_msgs::Int16MultiArray> sub_2("Auto_topic", &AutoCallback);

void setup() {
  nh.initNode();
  nh.subscribe(sub);
  nh.subscribe(sub_2);
  nh.advertise(pub);
}

void loop() {

  int16_t data[4];
  data[0]= position2;
  data[1]= position1;
  data[2]= position3;
  data[3]= position4;
  arr_msg.data_length = 4;
  arr_msg.data = data;
  pub.publish(&arr_msg);
  HAL_Delay(10);

  nh.spinOnce();

}
