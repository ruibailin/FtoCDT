################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/AArch64/AArch64BaseInfo.c \
../src/no/capstone/arch/AArch64/AArch64Disassembler.c \
../src/no/capstone/arch/AArch64/AArch64InstPrinter.c \
../src/no/capstone/arch/AArch64/AArch64Mapping.c \
../src/no/capstone/arch/AArch64/AArch64Module.c 

OBJS += \
./src/no/capstone/arch/AArch64/AArch64BaseInfo.o \
./src/no/capstone/arch/AArch64/AArch64Disassembler.o \
./src/no/capstone/arch/AArch64/AArch64InstPrinter.o \
./src/no/capstone/arch/AArch64/AArch64Mapping.o \
./src/no/capstone/arch/AArch64/AArch64Module.o 

C_DEPS += \
./src/no/capstone/arch/AArch64/AArch64BaseInfo.d \
./src/no/capstone/arch/AArch64/AArch64Disassembler.d \
./src/no/capstone/arch/AArch64/AArch64InstPrinter.d \
./src/no/capstone/arch/AArch64/AArch64Mapping.d \
./src/no/capstone/arch/AArch64/AArch64Module.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/AArch64/%.o: ../src/no/capstone/arch/AArch64/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


