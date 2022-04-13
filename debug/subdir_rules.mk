################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703/bin/arm-none-eabi-gcc-8.3.1.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Dprintf=iprintf -DF_CPU=80000000L -DENERGIA_EK_TM4C123GXL -DENERGIA_ARCH_TIVAC -DENERGIA=23 -DARDUINO=10610 -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system/driverlib" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system/inc" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/cores/tivac" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/variants/EK-TM4C123GXL" -I"C:/ti/workspace_v11/cnc_ctrl_v1" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/libraries/EEPROM/src" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703/arm-none-eabi/include" -O0 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall --param max-inline-insns-single=500 -mabi=aapcs -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)" -std=gnu++11 -fno-rtti -fno-threadsafe-statics -fno-exceptions $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

cnc_ctrl_v1.cpp: ../cnc_ctrl_v1.ino
	@echo 'Building file: "$<"'
	@echo 'Invoking: Resource Custom Build Step'
	
	@echo 'Finished building: "$<"'
	@echo ' '

%.o: ./%.cpp $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703/bin/arm-none-eabi-gcc-8.3.1.exe" -c -mcpu=cortex-m4 -march=armv7e-m -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -Dprintf=iprintf -DF_CPU=80000000L -DENERGIA_EK_TM4C123GXL -DENERGIA_ARCH_TIVAC -DENERGIA=23 -DARDUINO=10610 -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system/driverlib" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system/inc" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/cores/tivac" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/variants/EK-TM4C123GXL" -I"C:/ti/workspace_v11/cnc_ctrl_v1" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/libraries/EEPROM/src" -I"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703/arm-none-eabi/include" -O0 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall --param max-inline-insns-single=500 -mabi=aapcs -MMD -MP -MF"$(basename $(<F)).d_raw" -MT"$(@)" -std=gnu++11 -fno-rtti -fno-threadsafe-statics -fno-exceptions $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


