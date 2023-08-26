################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/getSECCOUNT.c \
../Middleware/timer_inits.c 

OBJS += \
./Middleware/getSECCOUNT.o \
./Middleware/timer_inits.o 

C_DEPS += \
./Middleware/getSECCOUNT.d \
./Middleware/timer_inits.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/%.o Middleware/%.su Middleware/%.cyclo: ../Middleware/%.c Middleware/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/SoftwareTimer/Application" -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/SoftwareTimer/Middleware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middleware

clean-Middleware:
	-$(RM) ./Middleware/getSECCOUNT.cyclo ./Middleware/getSECCOUNT.d ./Middleware/getSECCOUNT.o ./Middleware/getSECCOUNT.su ./Middleware/timer_inits.cyclo ./Middleware/timer_inits.d ./Middleware/timer_inits.o ./Middleware/timer_inits.su

.PHONY: clean-Middleware

