################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/S_TIMER/stimer_callback.c \
../Application/S_TIMER/stimer_main.c 

OBJS += \
./Application/S_TIMER/stimer_callback.o \
./Application/S_TIMER/stimer_main.o 

C_DEPS += \
./Application/S_TIMER/stimer_callback.d \
./Application/S_TIMER/stimer_main.d 


# Each subdirectory must supply rules for building sources it contributes
Application/S_TIMER/%.o Application/S_TIMER/%.su Application/S_TIMER/%.cyclo: ../Application/S_TIMER/%.c Application/S_TIMER/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/HAL" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware/UART" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/CLI" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/CBUFF" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/ADC_INT" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/S_TIMER" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware/HARD_TIMER" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-S_TIMER

clean-Application-2f-S_TIMER:
	-$(RM) ./Application/S_TIMER/stimer_callback.cyclo ./Application/S_TIMER/stimer_callback.d ./Application/S_TIMER/stimer_callback.o ./Application/S_TIMER/stimer_callback.su ./Application/S_TIMER/stimer_main.cyclo ./Application/S_TIMER/stimer_main.d ./Application/S_TIMER/stimer_main.o ./Application/S_TIMER/stimer_main.su

.PHONY: clean-Application-2f-S_TIMER

