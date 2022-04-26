################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/X86/X86ATTInstPrinter.c \
../src/no/capstone/arch/X86/X86Disassembler.c \
../src/no/capstone/arch/X86/X86DisassemblerDecoder.c \
../src/no/capstone/arch/X86/X86IntelInstPrinter.c \
../src/no/capstone/arch/X86/X86Mapping.c \
../src/no/capstone/arch/X86/X86Module.c 

OBJS += \
./src/no/capstone/arch/X86/X86ATTInstPrinter.o \
./src/no/capstone/arch/X86/X86Disassembler.o \
./src/no/capstone/arch/X86/X86DisassemblerDecoder.o \
./src/no/capstone/arch/X86/X86IntelInstPrinter.o \
./src/no/capstone/arch/X86/X86Mapping.o \
./src/no/capstone/arch/X86/X86Module.o 

C_DEPS += \
./src/no/capstone/arch/X86/X86ATTInstPrinter.d \
./src/no/capstone/arch/X86/X86Disassembler.d \
./src/no/capstone/arch/X86/X86DisassemblerDecoder.d \
./src/no/capstone/arch/X86/X86IntelInstPrinter.d \
./src/no/capstone/arch/X86/X86Mapping.d \
./src/no/capstone/arch/X86/X86Module.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/X86/%.o: ../src/no/capstone/arch/X86/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


