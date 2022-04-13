################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./Axis.o" \
"./cnc_ctrl_v1.o" \
"./DRV8871_pwm.o" \
"./Encoder.o" \
"./GCode.o" \
"./Kinematics.o" \
"./maslowRingBuffer.o" \
"./Motion.o" \
"./Motor.o" \
"./MotorGearboxEncoder.o" \
"./myEEPROM.o" \
"./NutsAndBolts.o" \
"./PID_v1.o" \
"./Probe.o" \
"./Report.o" \
"./Settings.o" \
"./SimavrSerial.o" \
"./Spindle.o" \
"./System.o" \
"./Testing.o" \
"./timer_isr.o" \
"./utility/Servo.o" \
$(GEN_CMDS__FLAG) \
-Wl,--start-group \
-Wl,-T"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/variants/EK-TM4C123GXL/lm4fcpp_blizzard.ld" \
-ltivac_EK-TM4C123GXL_core \
-ldriverlib \
-lm \
-lc \
-lgcc \
-Wl,--end-group \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include utility/subdir_vars.mk
-include subdir_rules.mk
-include utility/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
cnc_ctrl_v1.out \

EXE_OUTPUTS__QUOTED += \
"cnc_ctrl_v1.out" \

BIN_OUTPUTS += \
cnc_ctrl_v1.bin \

BIN_OUTPUTS__QUOTED += \
"cnc_ctrl_v1.bin" \


# All Target
all: $(OBJS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "cnc_ctrl_v1.out" secondary-outputs

dependents:
	-cd C:/ti/workspace_v11/tivac_EK-TM4C123GXL_core/Debug && $(MAKE) clean all

# Tool invocations
cnc_ctrl_v1.out: $(OBJS) $(GEN_CMDS) C:/ti/workspace_v11/tivac_EK-TM4C123GXL_core/Debug/libtivac_EK-TM4C123GXL_core.a
	@echo 'Building target: "$@"'
	@echo 'Invoking: GNU Linker'
	"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703/bin/arm-none-eabi-gcc-8.3.1.exe" -mfpu=fpv4-sp-d16 -Dprintf=iprintf -DF_CPU=80000000L -DENERGIA_EK_TM4C123GXL -DENERGIA_ARCH_TIVAC -DENERGIA=23 -DARDUINO=10610 -O0 -ffunction-sections -fdata-sections -g -gdwarf-3 -gstrict-dwarf -w -Wall --param max-inline-insns-single=500 -mabi=aapcs -mcpu=cortex-m4 -Wl,-Map,"cnc_ctrl_v1.map" --entry ResetISR -nostartfiles -nostdlib -Wl,--gc-sections -L"C:/ti/workspace_v11/tivac_EK-TM4C123GXL_core/Debug" -L"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/hardware/tivac/1.0.4/system/driverlib" -Os -specs=nano.specs -specs=rdimon.specs -specs=nosys.specs -Wl,--check-sections -Wl,--unresolved-symbols=report-all -Wl,--warn-common -fsingle-precision-constant -mfloat-abi=hard -o"cnc_ctrl_v1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

cnc_ctrl_v1.bin: $(EXE_OUTPUTS)
	@echo 'Building secondary target: "$@"'
	@echo 'Invoking: GNU Objcopy Utility'
	"C:/Users/tdurrer/AppData/Local/Energia15/packages/energia/tools/arm-none-eabi-gcc/8.3.1-20190703/bin/arm-none-eabi-objcopy.exe" -O binary $(EXE_OUTPUTS__QUOTED) "cnc_ctrl_v1.bin"
	@echo 'Finished building secondary target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(EXE_OUTPUTS__QUOTED)
	-$(RM) "Axis.o" "DRV8871_pwm.o" "Encoder.o" "GCode.o" "Kinematics.o" "Motion.o" "Motor.o" "MotorGearboxEncoder.o" "NutsAndBolts.o" "PID_v1.o" "Probe.o" "Report.o" "Settings.o" "SimavrSerial.o" "Spindle.o" "System.o" "Testing.o" "cnc_ctrl_v1.o" "maslowRingBuffer.o" "myEEPROM.o" "timer_isr.o" "utility\Servo.o" 
	-$(RM) "Axis.d" "DRV8871_pwm.d" "Encoder.d" "GCode.d" "Kinematics.d" "Motion.d" "Motor.d" "MotorGearboxEncoder.d" "NutsAndBolts.d" "PID_v1.d" "Probe.d" "Report.d" "Settings.d" "SimavrSerial.d" "Spindle.d" "System.d" "Testing.d" "cnc_ctrl_v1.d" "maslowRingBuffer.d" "myEEPROM.d" "timer_isr.d" "utility\Servo.d" 
	-@echo 'Finished clean'
	-@echo ' '

secondary-outputs: $(BIN_OUTPUTS)

.PHONY: all clean dependents
.SECONDARY:
C:/ti/workspace_v11/tivac_EK-TM4C123GXL_core/Debug/libtivac_EK-TM4C123GXL_core.a:

-include ../makefile.targets

