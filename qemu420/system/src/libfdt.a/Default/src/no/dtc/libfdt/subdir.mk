################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/dtc/libfdt/fdt.c \
../src/no/dtc/libfdt/fdt_addresses.c \
../src/no/dtc/libfdt/fdt_empty_tree.c \
../src/no/dtc/libfdt/fdt_overlay.c \
../src/no/dtc/libfdt/fdt_ro.c \
../src/no/dtc/libfdt/fdt_rw.c \
../src/no/dtc/libfdt/fdt_strerror.c \
../src/no/dtc/libfdt/fdt_sw.c \
../src/no/dtc/libfdt/fdt_wip.c 

OBJS += \
./src/no/dtc/libfdt/fdt.o \
./src/no/dtc/libfdt/fdt_addresses.o \
./src/no/dtc/libfdt/fdt_empty_tree.o \
./src/no/dtc/libfdt/fdt_overlay.o \
./src/no/dtc/libfdt/fdt_ro.o \
./src/no/dtc/libfdt/fdt_rw.o \
./src/no/dtc/libfdt/fdt_strerror.o \
./src/no/dtc/libfdt/fdt_sw.o \
./src/no/dtc/libfdt/fdt_wip.o 

C_DEPS += \
./src/no/dtc/libfdt/fdt.d \
./src/no/dtc/libfdt/fdt_addresses.d \
./src/no/dtc/libfdt/fdt_empty_tree.d \
./src/no/dtc/libfdt/fdt_overlay.d \
./src/no/dtc/libfdt/fdt_ro.d \
./src/no/dtc/libfdt/fdt_rw.d \
./src/no/dtc/libfdt/fdt_strerror.d \
./src/no/dtc/libfdt/fdt_sw.d \
./src/no/dtc/libfdt/fdt_wip.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/dtc/libfdt/%.o: ../src/no/dtc/libfdt/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/steve/code/work/qemu420/system/src/libfdt.a/src/no/dtc/libfdt" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


