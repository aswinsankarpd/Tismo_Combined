################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/CLI/CommandLineInterface.c \
../Application/CLI/Command_Parser.c \
../Application/CLI/addtobuffer.c \
../Application/CLI/led_control.c 

OBJS += \
./Application/CLI/CommandLineInterface.o \
./Application/CLI/Command_Parser.o \
./Application/CLI/addtobuffer.o \
./Application/CLI/led_control.o 

C_DEPS += \
./Application/CLI/CommandLineInterface.d \
./Application/CLI/Command_Parser.d \
./Application/CLI/addtobuffer.d \
./Application/CLI/led_control.d 


# Each subdirectory must supply rules for building sources it contributes
Application/CLI/%.o Application/CLI/%.su Application/CLI/%.cyclo: ../Application/CLI/%.c Application/CLI/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/HAL" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware/UART" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/CLI" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/CBUFF" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/ADC_INT" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Application/S_TIMER" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/THE PROJECT/Middleware/HARD_TIMER" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Application-2f-CLI

clean-Application-2f-CLI:
	-$(RM) ./Application/CLI/CommandLineInterface.cyclo ./Application/CLI/CommandLineInterface.d ./Application/CLI/CommandLineInterface.o ./Application/CLI/CommandLineInterface.su ./Application/CLI/Command_Parser.cyclo ./Application/CLI/Command_Parser.d ./Application/CLI/Command_Parser.o ./Application/CLI/Command_Parser.su ./Application/CLI/addtobuffer.cyclo ./Application/CLI/addtobuffer.d ./Application/CLI/addtobuffer.o ./Application/CLI/addtobuffer.su ./Application/CLI/led_control.cyclo ./Application/CLI/led_control.d ./Application/CLI/led_control.o ./Application/CLI/led_control.su

.PHONY: clean-Application-2f-CLI

