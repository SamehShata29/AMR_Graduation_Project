# Autonomous Mobile Robot Project
![AMR](https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExejFnbmhqYmU5YnFuNGUzM3hpajVrbGkxcjJyem96OG1nc2N2MWxvaCZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/na7Wp84MurSW1DmXN4/giphy.gif)
## Overview
This project showcases an autonomous mobile robot built using an STM32F401RCT6 microcontroller for low-level control and a Raspberry Pi 4 for high-level processing. The robot is designed to navigate its environment autonomously, avoiding obstacles and making decisions based on real-time data.
## Components
- STM32F401RCT6 Black pill development board.
- Raspberry Pi 4 4GB RAM.
- 4 gmx-8pvo17d DC motors.
- 2 Cytron Dual Channel 10A DC (5 - 30V) MDD10A. Motor Driver.
- RPLIDAR-A1.
- IMU.
- Xbox 360 Kinect camera.
- 4 Meccanum wheels.
## Features
- Autonomous Navigation: The robot uses sensor data to navigate through its environment, avoiding obstacles and planning paths in real-time.
- Modular Design: Separation of low-level and high-level controls allows for modularity and ease of maintenance.
- Real-time Communication: Efficient communication between STM32 and Raspberry Pi ensures timely execution of control commands and data processing.
## Software
- Low-Level Control (STM32):
    - Written in C/C++.
    - Handles motor control and basic sensor data acquisition.
    - mplements communication protocols for data exchange with Raspberry Pi.
- High-Level Control (Raspberry Pi):
    - Runs on Linux with ROS.
    - Written in Python/C++.
    - Implements algorithms for obstacle detection, path planning, and autonomous navigation.