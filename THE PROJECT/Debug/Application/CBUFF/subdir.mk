################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/CBUFF/cbuff_Dequeue.c \
../Application/CBUFF/cbuff_Enqueue.c \
../Application/CBUFF/cbuff_init.c \
../Application/CBUFF/cbuff_main.c 

OBJS += \
./Application/CBUFF/cbuff_Dequeue.o \
./Application/CBUFF/cbuff_Enqueue.o \
./Application/CBUFF/cbuff_init.o \
./Application/CBUFF/cbuff_main.o 

C_DEPS += \
./Application/CBUFF/cbuff_Dequeue.d \
./Application/CBUFF/cbuff_Enqueue.d \
./Application/CBUFF/cbuff_init.d \
./Application/CBUFF/cbuff_main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/CBUFF/%.o Application/CBUFF/%.su Application/CBUFF/%.cyclo: ../Application/CBUFF/%.c Application/CBUFF/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/HAL" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware/UART" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/CLI" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/CBUFF" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/ADC_INT" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/S_TIMER" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware/HARD_TIMER" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-CBUFF

clean-Application-2f-CBUFF:
	-$(RM) ./Application/CBUFF/cbuff_Dequeue.cyclo ./Application/CBUFF/cbuff_Dequeue.d ./Application/CBUFF/cbuff_Dequeue.o ./Application/CBUFF/cbuff_Dequeue.su ./Application/CBUFF/cbuff_Enqueue.cyclo ./Application/CBUFF/cbuff_Enqueue.d ./Application/CBUFF/cbuff_Enqueue.o ./Application/CBUFF/cbuff_Enqueue.su ./Application/CBUFF/cbuff_init.cyclo ./Application/CBUFF/cbuff_init.d ./Application/CBUFF/cbuff_init.o ./Application/CBUFF/cbuff_init.su ./Application/CBUFF/cbuff_main.cyclo ./Application/CBUFF/cbuff_main.d ./Application/CBUFF/cbuff_main.o ./Application/CBUFF/cbuff_main.su

.PHONY: clean-Application-2f-CBUFF

