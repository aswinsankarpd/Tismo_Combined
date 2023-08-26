################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middleware/fetch_duty.c \
../Middleware/pwm_start.c 

OBJS += \
./Middleware/fetch_duty.o \
./Middleware/pwm_start.o 

C_DEPS += \
./Middleware/fetch_duty.d \
./Middleware/pwm_start.d 


# Each subdirectory must supply rules for building sources it contributes
Middleware/%.o Middleware/%.su Middleware/%.cyclo: ../Middleware/%.c Middleware/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xE -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/Aswin Sankar/STM32CubeIDE/workspace_1.13.1/Abstracted/pulsewavemodulator/Middleware" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Middleware

clean-Middleware:
	-$(RM) ./Middleware/fetch_duty.cyclo ./Middleware/fetch_duty.d ./Middleware/fetch_duty.o ./Middleware/fetch_duty.su ./Middleware/pwm_start.cyclo ./Middleware/pwm_start.d ./Middleware/pwm_start.o ./Middleware/pwm_start.su

.PHONY: clean-Middleware

