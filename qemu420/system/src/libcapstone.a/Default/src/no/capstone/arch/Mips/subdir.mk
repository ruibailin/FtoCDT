################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/Mips/MipsDisassembler.c \
../src/no/capstone/arch/Mips/MipsInstPrinter.c \
../src/no/capstone/arch/Mips/MipsMapping.c \
../src/no/capstone/arch/Mips/MipsModule.c 

OBJS += \
./src/no/capstone/arch/Mips/MipsDisassembler.o \
./src/no/capstone/arch/Mips/MipsInstPrinter.o \
./src/no/capstone/arch/Mips/MipsMapping.o \
./src/no/capstone/arch/Mips/MipsModule.o 

C_DEPS += \
./src/no/capstone/arch/Mips/MipsDisassembler.d \
./src/no/capstone/arch/Mips/MipsInstPrinter.d \
./src/no/capstone/arch/Mips/MipsMapping.d \
./src/no/capstone/arch/Mips/MipsModule.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/Mips/%.o: ../src/no/capstone/arch/Mips/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


