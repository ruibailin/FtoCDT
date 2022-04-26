################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/hw/watchdog/trace.c 

OBJS += \
./src/no/hw/watchdog/trace.o 

C_DEPS += \
./src/no/hw/watchdog/trace.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/hw/watchdog/%.o: ../src/no/hw/watchdog/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_GNU_SOURCE=1 -DPIE=1 -DFILE_OFFSET_BITS=64 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/riscv" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/target/riscv" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/stubs" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no" -I/usr/include/libusb-1.0 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/net" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/ui" -I/usr/include/SDL2 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/qapi" -I/usr/include/libxml2 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/scsi" -I/usr/include/x86_64-linux-gnu -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/block" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/io" -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/glib-2.0 -I/usr/include/pixman-1 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/include" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


