################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/PowerPC/PPCDisassembler.c \
../src/no/capstone/arch/PowerPC/PPCInstPrinter.c \
../src/no/capstone/arch/PowerPC/PPCMapping.c \
../src/no/capstone/arch/PowerPC/PPCModule.c 

OBJS += \
./src/no/capstone/arch/PowerPC/PPCDisassembler.o \
./src/no/capstone/arch/PowerPC/PPCInstPrinter.o \
./src/no/capstone/arch/PowerPC/PPCMapping.o \
./src/no/capstone/arch/PowerPC/PPCModule.o 

C_DEPS += \
./src/no/capstone/arch/PowerPC/PPCDisassembler.d \
./src/no/capstone/arch/PowerPC/PPCInstPrinter.d \
./src/no/capstone/arch/PowerPC/PPCMapping.d \
./src/no/capstone/arch/PowerPC/PPCModule.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/PowerPC/%.o: ../src/no/capstone/arch/PowerPC/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


