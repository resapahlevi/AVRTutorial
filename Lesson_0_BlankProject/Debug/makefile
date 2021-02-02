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
Lesson_0_BlankProject.lss \

FLASH_IMAGE += \
Lesson_0_BlankProject.hex \

EEPROM_IMAGE += \
Lesson_0_BlankProject.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Lesson_0_BlankProject.elf secondary-outputs

# Tool invocations
Lesson_0_BlankProject.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Lesson_0_BlankProject.map -mmcu=atmega328p -o "Lesson_0_BlankProject.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Lesson_0_BlankProject.lss: Lesson_0_BlankProject.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Lesson_0_BlankProject.elf  >"Lesson_0_BlankProject.lss"
	@echo 'Finished building: $@'
	@echo ' '

Lesson_0_BlankProject.hex: Lesson_0_BlankProject.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Lesson_0_BlankProject.elf  "Lesson_0_BlankProject.hex"
	@echo 'Finished building: $@'
	@echo ' '

Lesson_0_BlankProject.eep: Lesson_0_BlankProject.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Lesson_0_BlankProject.elf  "Lesson_0_BlankProject.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Lesson_0_BlankProject.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Lesson_0_BlankProject.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Lesson_0_BlankProject.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
