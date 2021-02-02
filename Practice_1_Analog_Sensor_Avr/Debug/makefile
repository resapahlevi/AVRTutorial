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
Practice_1_Analog_Sensor_Avr.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: Practice_1_Analog_Sensor_Avr.elf secondary-outputs

# Tool invocations
Practice_1_Analog_Sensor_Avr.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Practice_1_Analog_Sensor_Avr.map -mmcu=atmega328p -o "Practice_1_Analog_Sensor_Avr.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Practice_1_Analog_Sensor_Avr.lss: Practice_1_Analog_Sensor_Avr.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Practice_1_Analog_Sensor_Avr.elf  >"Practice_1_Analog_Sensor_Avr.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Practice_1_Analog_Sensor_Avr.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Practice_1_Analog_Sensor_Avr.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Practice_1_Analog_Sensor_Avr.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
