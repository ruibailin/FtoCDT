################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/Sparc/SparcDisassembler.c \
../src/no/capstone/arch/Sparc/SparcInstPrinter.c \
../src/no/capstone/arch/Sparc/SparcMapping.c \
../src/no/capstone/arch/Sparc/SparcModule.c 

OBJS += \
./src/no/capstone/arch/Sparc/SparcDisassembler.o \
./src/no/capstone/arch/Sparc/SparcInstPrinter.o \
./src/no/capstone/arch/Sparc/SparcMapping.o \
./src/no/capstone/arch/Sparc/SparcModule.o 

C_DEPS += \
./src/no/capstone/arch/Sparc/SparcDisassembler.d \
./src/no/capstone/arch/Sparc/SparcInstPrinter.d \
./src/no/capstone/arch/Sparc/SparcMapping.d \
./src/no/capstone/arch/Sparc/SparcModule.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/Sparc/%.o: ../src/no/capstone/arch/Sparc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


