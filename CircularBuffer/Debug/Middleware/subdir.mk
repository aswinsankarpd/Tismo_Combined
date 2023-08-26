################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/Queue_Handler.c 

OBJS += \
./Middleware/Queue_Handler.o 

C_DEPS += \
./Middleware/Queue_Handler.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/%.o Middleware/%.su Middleware/%.cyclo: ../Middleware/%.c Middleware/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/CircularBuffer/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/CircularBuffer/Middleware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middleware

clean-Middleware:
	-$(RM) ./Middleware/Queue_Handler.cyclo ./Middleware/Queue_Handler.d ./Middleware/Queue_Handler.o ./Middleware/Queue_Handler.su

.PHONY: clean-Middleware

