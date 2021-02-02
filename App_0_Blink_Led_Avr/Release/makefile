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
App_0_Blink_Led_Avr.lss \

FLASH_IMAGE += \
App_0_Blink_Led_Avr.hex \

EEPROM_IMAGE += \
App_0_Blink_Led_Avr.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: App_0_Blink_Led_Avr.elf secondary-outputs

# Tool invocations
App_0_Blink_Led_Avr.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,App_0_Blink_Led_Avr.map -mmcu=atmega328p -o "App_0_Blink_Led_Avr.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

App_0_Blink_Led_Avr.lss: App_0_Blink_Led_Avr.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S App_0_Blink_Led_Avr.elf  >"App_0_Blink_Led_Avr.lss"
	@echo 'Finished building: $@'
	@echo ' '

App_0_Blink_Led_Avr.hex: App_0_Blink_Led_Avr.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex App_0_Blink_Led_Avr.elf  "App_0_Blink_Led_Avr.hex"
	@echo 'Finished building: $@'
	@echo ' '

App_0_Blink_Led_Avr.eep: App_0_Blink_Led_Avr.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex App_0_Blink_Led_Avr.elf  "App_0_Blink_Led_Avr.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: App_0_Blink_Led_Avr.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p App_0_Blink_Led_Avr.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) App_0_Blink_Led_Avr.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
