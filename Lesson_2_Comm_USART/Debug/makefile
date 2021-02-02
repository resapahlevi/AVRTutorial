################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Lesson_2_Comm_USART.lss \

FLASH_IMAGE += \
Lesson_2_Comm_USART.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Lesson_2_Comm_USART.elf secondary-outputs

# Tool invocations
Lesson_2_Comm_USART.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Lesson_2_Comm_USART.map -mmcu=atmega2560 -o "Lesson_2_Comm_USART.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Lesson_2_Comm_USART.lss: Lesson_2_Comm_USART.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Lesson_2_Comm_USART.elf  >"Lesson_2_Comm_USART.lss"
	@echo 'Finished building: $@'
	@echo ' '

Lesson_2_Comm_USART.hex: Lesson_2_Comm_USART.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Lesson_2_Comm_USART.elf  "Lesson_2_Comm_USART.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Lesson_2_Comm_USART.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega2560 Lesson_2_Comm_USART.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Lesson_2_Comm_USART.elf
	@echo 'Invoking: AVRDude'
	/usr/bin/avrdude -pm2560 -carduino -P/dev/ttyACM0 -b115200 -Uflash:w:Lesson_2_Comm_USART.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Lesson_2_Comm_USART.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
