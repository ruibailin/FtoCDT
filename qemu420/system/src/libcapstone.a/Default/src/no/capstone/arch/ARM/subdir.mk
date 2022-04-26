################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/ARM/ARMDisassembler.c \
../src/no/capstone/arch/ARM/ARMInstPrinter.c \
../src/no/capstone/arch/ARM/ARMMapping.c \
../src/no/capstone/arch/ARM/ARMModule.c 

OBJS += \
./src/no/capstone/arch/ARM/ARMDisassembler.o \
./src/no/capstone/arch/ARM/ARMInstPrinter.o \
./src/no/capstone/arch/ARM/ARMMapping.o \
./src/no/capstone/arch/ARM/ARMModule.o 

C_DEPS += \
./src/no/capstone/arch/ARM/ARMDisassembler.d \
./src/no/capstone/arch/ARM/ARMInstPrinter.d \
./src/no/capstone/arch/ARM/ARMMapping.d \
./src/no/capstone/arch/ARM/ARMModule.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/ARM/%.o: ../src/no/capstone/arch/ARM/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


