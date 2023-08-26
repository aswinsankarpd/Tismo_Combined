################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/TimerCallback.c \
../Application/softtimer.c 

OBJS += \
./Application/TimerCallback.o \
./Application/softtimer.o 

C_DEPS += \
./Application/TimerCallback.d \
./Application/softtimer.d 


# Each subdirectory must supply rules for building sources it contributes
Application/%.o Application/%.su Application/%.cyclo: ../Application/%.c Application/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/SoftwareTimer/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/SoftwareTimer/Middleware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application

clean-Application:
	-$(RM) ./Application/TimerCallback.cyclo ./Application/TimerCallback.d ./Application/TimerCallback.o ./Application/TimerCallback.su ./Application/softtimer.cyclo ./Application/softtimer.d ./Application/softtimer.o ./Application/softtimer.su

.PHONY: clean-Application

