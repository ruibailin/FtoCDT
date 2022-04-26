################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/SystemZ/SystemZDisassembler.c \
../src/no/capstone/arch/SystemZ/SystemZInstPrinter.c \
../src/no/capstone/arch/SystemZ/SystemZMCTargetDesc.c \
../src/no/capstone/arch/SystemZ/SystemZMapping.c \
../src/no/capstone/arch/SystemZ/SystemZModule.c 

OBJS += \
./src/no/capstone/arch/SystemZ/SystemZDisassembler.o \
./src/no/capstone/arch/SystemZ/SystemZInstPrinter.o \
./src/no/capstone/arch/SystemZ/SystemZMCTargetDesc.o \
./src/no/capstone/arch/SystemZ/SystemZMapping.o \
./src/no/capstone/arch/SystemZ/SystemZModule.o 

C_DEPS += \
./src/no/capstone/arch/SystemZ/SystemZDisassembler.d \
./src/no/capstone/arch/SystemZ/SystemZInstPrinter.d \
./src/no/capstone/arch/SystemZ/SystemZMCTargetDesc.d \
./src/no/capstone/arch/SystemZ/SystemZMapping.d \
./src/no/capstone/arch/SystemZ/SystemZModule.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/SystemZ/%.o: ../src/no/capstone/arch/SystemZ/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


