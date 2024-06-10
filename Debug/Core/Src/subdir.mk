################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/Src/main.cpp \
../Core/Src/publishernode.cpp \
../Core/Src/stm32f4xx_hal_msp.cpp \
../Core/Src/stm32f4xx_it.cpp 

C_SRCS += \
../Core/Src/RCC.c \
../Core/Src/Timer.c \
../Core/Src/gpio.c \
../Core/Src/mec_move.c \
../Core/Src/pid.c \
../Core/Src/stm32f4xx_hal_msp.c \
../Core/Src/stm32f4xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f4xx.c \
../Core/Src/uart.c 

C_DEPS += \
./Core/Src/RCC.d \
./Core/Src/Timer.d \
./Core/Src/gpio.d \
./Core/Src/mec_move.d \
./Core/Src/pid.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f4xx.d \
./Core/Src/uart.d 

OBJS += \
./Core/Src/RCC.o \
./Core/Src/Timer.o \
./Core/Src/gpio.o \
./Core/Src/main.o \
./Core/Src/mec_move.o \
./Core/Src/pid.o \
./Core/Src/publishernode.o \
./Core/Src/stm32f4xx_hal_msp.o \
./Core/Src/stm32f4xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f4xx.o \
./Core/Src/uart.o 

CPP_DEPS += \
./Core/Src/main.d \
./Core/Src/publishernode.d \
./Core/Src/stm32f4xx_hal_msp.d \
./Core/Src/stm32f4xx_it.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xC -c -I"D:/Graduation Project/embedded/stm32/test3/sudo/ros_lib" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Core/Inc" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/CMSIS/Include" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/STM32F4xx_HAL_Driver/Inc" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/Graduation Project/embedded/stm32/CMSIS" -I"D:/Graduation Project/embedded/stm32/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.cpp Core/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xC -c -I"D:/Graduation Project/embedded/stm32/test3/sudo/ros_lib" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Core/Inc" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/CMSIS/Include" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/STM32F4xx_HAL_Driver/Inc" -I"D:/Graduation Project/embedded/stm32/test3/sudo/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/Graduation Project/embedded/stm32/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/RCC.cyclo ./Core/Src/RCC.d ./Core/Src/RCC.o ./Core/Src/RCC.su ./Core/Src/Timer.cyclo ./Core/Src/Timer.d ./Core/Src/Timer.o ./Core/Src/Timer.su ./Core/Src/gpio.cyclo ./Core/Src/gpio.d ./Core/Src/gpio.o ./Core/Src/gpio.su ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/mec_move.cyclo ./Core/Src/mec_move.d ./Core/Src/mec_move.o ./Core/Src/mec_move.su ./Core/Src/pid.cyclo ./Core/Src/pid.d ./Core/Src/pid.o ./Core/Src/pid.su ./Core/Src/publishernode.cyclo ./Core/Src/publishernode.d ./Core/Src/publishernode.o ./Core/Src/publishernode.su ./Core/Src/stm32f4xx_hal_msp.cyclo ./Core/Src/stm32f4xx_hal_msp.d ./Core/Src/stm32f4xx_hal_msp.o ./Core/Src/stm32f4xx_hal_msp.su ./Core/Src/stm32f4xx_it.cyclo ./Core/Src/stm32f4xx_it.d ./Core/Src/stm32f4xx_it.o ./Core/Src/stm32f4xx_it.su ./Core/Src/syscalls.cyclo ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.cyclo ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f4xx.cyclo ./Core/Src/system_stm32f4xx.d ./Core/Src/system_stm32f4xx.o ./Core/Src/system_stm32f4xx.su ./Core/Src/uart.cyclo ./Core/Src/uart.d ./Core/Src/uart.o ./Core/Src/uart.su

.PHONY: clean-Core-2f-Src

