################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/capstone/MCInst.c \
../src/no/capstone/MCInstrDesc.c \
../src/no/capstone/MCRegisterInfo.c \
../src/no/capstone/SStream.c \
../src/no/capstone/cs.c \
../src/no/capstone/utils.c 

OBJS += \
./src/no/capstone/MCInst.o \
./src/no/capstone/MCInstrDesc.o \
./src/no/capstone/MCRegisterInfo.o \
./src/no/capstone/SStream.o \
./src/no/capstone/cs.o \
./src/no/capstone/utils.o 

C_DEPS += \
./src/no/capstone/MCInst.d \
./src/no/capstone/MCInstrDesc.d \
./src/no/capstone/MCRegisterInfo.d \
./src/no/capstone/SStream.d \
./src/no/capstone/cs.d \
./src/no/capstone/utils.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/capstone/%.o: ../src/no/capstone/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone" -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


