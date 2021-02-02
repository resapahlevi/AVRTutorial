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
IO_Port_AVR.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: IO_Port_AVR.elf secondary-outputs

# Tool invocations
IO_Port_AVR.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,IO_Port_AVR.map -mmcu=atmega328p -o "IO_Port_AVR.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

IO_Port_AVR.lss: IO_Port_AVR.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S IO_Port_AVR.elf  >"IO_Port_AVR.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: IO_Port_AVR.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p IO_Port_AVR.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) IO_Port_AVR.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
