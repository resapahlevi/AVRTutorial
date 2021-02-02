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
Lesson_1_DigitalInput.lss \

FLASH_IMAGE += \
Lesson_1_DigitalInput.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Lesson_1_DigitalInput.elf secondary-outputs

# Tool invocations
Lesson_1_DigitalInput.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Lesson_1_DigitalInput.map -mmcu=atmega328p -o "Lesson_1_DigitalInput.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Lesson_1_DigitalInput.lss: Lesson_1_DigitalInput.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Lesson_1_DigitalInput.elf  >"Lesson_1_DigitalInput.lss"
	@echo 'Finished building: $@'
	@echo ' '

Lesson_1_DigitalInput.hex: Lesson_1_DigitalInput.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Lesson_1_DigitalInput.elf  "Lesson_1_DigitalInput.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Lesson_1_DigitalInput.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Lesson_1_DigitalInput.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Lesson_1_DigitalInput.elf
	@echo 'Invoking: AVRDude'
	/usr/bin/avrdude -pm328p -carduino -P/dev/ttyACM0 -b115200 -Uflash:w:Lesson_1_DigitalInput.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Lesson_1_DigitalInput.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
