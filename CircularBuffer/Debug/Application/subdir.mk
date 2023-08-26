################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/Circular_Buffer_Init.c \
../Application/Dequeue.c \
../Application/Enqueue.c 

OBJS += \
./Application/Circular_Buffer_Init.o \
./Application/Dequeue.o \
./Application/Enqueue.o 

C_DEPS += \
./Application/Circular_Buffer_Init.d \
./Application/Dequeue.d \
./Application/Enqueue.d 


# Each subdirectory must supply rules for building sources it contributes
Application/%.o Application/%.su Application/%.cyclo: ../Application/%.c Application/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/CircularBuffer/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/CircularBuffer/Middleware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application

clean-Application:
	-$(RM) ./Application/Circular_Buffer_Init.cyclo ./Application/Circular_Buffer_Init.d ./Application/Circular_Buffer_Init.o ./Application/Circular_Buffer_Init.su ./Application/Dequeue.cyclo ./Application/Dequeue.d ./Application/Dequeue.o ./Application/Dequeue.su ./Application/Enqueue.cyclo ./Application/Enqueue.d ./Application/Enqueue.o ./Application/Enqueue.su

.PHONY: clean-Application

