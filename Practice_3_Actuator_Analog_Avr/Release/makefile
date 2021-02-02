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
Practice_3_Actuator_Analog_Avr.lss \

FLASH_IMAGE += \
Practice_3_Actuator_Analog_Avr.hex \

EEPROM_IMAGE += \
Practice_3_Actuator_Analog_Avr.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: Practice_3_Actuator_Analog_Avr.elf secondary-outputs

# Tool invocations
Practice_3_Actuator_Analog_Avr.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Practice_3_Actuator_Analog_Avr.map -mmcu=atmega328p -o "Practice_3_Actuator_Analog_Avr.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Practice_3_Actuator_Analog_Avr.lss: Practice_3_Actuator_Analog_Avr.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Practice_3_Actuator_Analog_Avr.elf  >"Practice_3_Actuator_Analog_Avr.lss"
	@echo 'Finished building: $@'
	@echo ' '

Practice_3_Actuator_Analog_Avr.hex: Practice_3_Actuator_Analog_Avr.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Practice_3_Actuator_Analog_Avr.elf  "Practice_3_Actuator_Analog_Avr.hex"
	@echo 'Finished building: $@'
	@echo ' '

Practice_3_Actuator_Analog_Avr.eep: Practice_3_Actuator_Analog_Avr.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex Practice_3_Actuator_Analog_Avr.elf  "Practice_3_Actuator_Analog_Avr.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Practice_3_Actuator_Analog_Avr.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Practice_3_Actuator_Analog_Avr.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Practice_3_Actuator_Analog_Avr.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
