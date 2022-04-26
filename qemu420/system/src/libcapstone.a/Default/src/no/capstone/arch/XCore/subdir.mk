################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/arch/XCore/XCoreDisassembler.c \
../src/no/capstone/arch/XCore/XCoreInstPrinter.c \
../src/no/capstone/arch/XCore/XCoreMapping.c \
../src/no/capstone/arch/XCore/XCoreModule.c 

OBJS += \
./src/no/capstone/arch/XCore/XCoreDisassembler.o \
./src/no/capstone/arch/XCore/XCoreInstPrinter.o \
./src/no/capstone/arch/XCore/XCoreMapping.o \
./src/no/capstone/arch/XCore/XCoreModule.o 

C_DEPS += \
./src/no/capstone/arch/XCore/XCoreDisassembler.d \
./src/no/capstone/arch/XCore/XCoreInstPrinter.d \
./src/no/capstone/arch/XCore/XCoreMapping.d \
./src/no/capstone/arch/XCore/XCoreModule.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/arch/XCore/%.o: ../src/no/capstone/arch/XCore/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


