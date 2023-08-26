################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/addtobuffer.c \
../Middleware/led_control.c \
../Middleware/usart_handler.c 

OBJS += \
./Middleware/addtobuffer.o \
./Middleware/led_control.o \
./Middleware/usart_handler.o 

C_DEPS += \
./Middleware/addtobuffer.d \
./Middleware/led_control.d \
./Middleware/usart_handler.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/%.o Middleware/%.su Middleware/%.cyclo: ../Middleware/%.c Middleware/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/CLI_INT_ABS/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/CLI_INT_ABS/Middleware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middleware

clean-Middleware:
	-$(RM) ./Middleware/addtobuffer.cyclo ./Middleware/addtobuffer.d ./Middleware/addtobuffer.o ./Middleware/addtobuffer.su ./Middleware/led_control.cyclo ./Middleware/led_control.d ./Middleware/led_control.o ./Middleware/led_control.su ./Middleware/usart_handler.cyclo ./Middleware/usart_handler.d ./Middleware/usart_handler.o ./Middleware/usart_handler.su

.PHONY: clean-Middleware

