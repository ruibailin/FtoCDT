################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/chardev/char-fd.c \
../src/no/chardev/char-fe.c \
../src/no/chardev/char-file.c \
../src/no/chardev/char-io.c \
../src/no/chardev/char-mux.c \
../src/no/chardev/char-null.c \
../src/no/chardev/char-parallel.c \
../src/no/chardev/char-pipe.c \
../src/no/chardev/char-pty.c \
../src/no/chardev/char-ringbuf.c \
../src/no/chardev/char-serial.c \
../src/no/chardev/char-socket.c \
../src/no/chardev/char-stdio.c \
../src/no/chardev/char-udp.c \
../src/no/chardev/char.c \
../src/no/chardev/msmouse.c \
../src/no/chardev/testdev.c \
../src/no/chardev/wctablet.c 

OBJS += \
./src/no/chardev/char-fd.o \
./src/no/chardev/char-fe.o \
./src/no/chardev/char-file.o \
./src/no/chardev/char-io.o \
./src/no/chardev/char-mux.o \
./src/no/chardev/char-null.o \
./src/no/chardev/char-parallel.o \
./src/no/chardev/char-pipe.o \
./src/no/chardev/char-pty.o \
./src/no/chardev/char-ringbuf.o \
./src/no/chardev/char-serial.o \
./src/no/chardev/char-socket.o \
./src/no/chardev/char-stdio.o \
./src/no/chardev/char-udp.o \
./src/no/chardev/char.o \
./src/no/chardev/msmouse.o \
./src/no/chardev/testdev.o \
./src/no/chardev/wctablet.o 

C_DEPS += \
./src/no/chardev/char-fd.d \
./src/no/chardev/char-fe.d \
./src/no/chardev/char-file.d \
./src/no/chardev/char-io.d \
./src/no/chardev/char-mux.d \
./src/no/chardev/char-null.d \
./src/no/chardev/char-parallel.d \
./src/no/chardev/char-pipe.d \
./src/no/chardev/char-pty.d \
./src/no/chardev/char-ringbuf.d \
./src/no/chardev/char-serial.d \
./src/no/chardev/char-socket.d \
./src/no/chardev/char-stdio.d \
./src/no/chardev/char-udp.d \
./src/no/chardev/char.d \
./src/no/chardev/msmouse.d \
./src/no/chardev/testdev.d \
./src/no/chardev/wctablet.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/chardev/%.o: ../src/no/chardev/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DNEED_CPU_H=1 -D_REENTRANT=1 -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -D__STDC_LIMIT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_CONSTANT_MACROS -DCONFIG_KVM_IS_POSSIBLE=1 -DHAVE_COPY_FILE_RANGE -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/stubs" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/backends" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dump" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fsdev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/bt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/cpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ipack" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/rocker" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-bridge" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pcmcia" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/smbios" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/io" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qapi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/replay" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/slirp/src" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg/i386" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/ui" -I/usr/include/glib-2.0 -I/usr/include/libusb-1.0 -I/usr/include/libxml2 -I/usr/include/pixman-1 -I/usr/include/SDL2 -I/usr/include/x86_64-linux-gnu -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas/libvixl" -O2 -g -Wall -c -fmessage-length=0   -fPIE -m64 -mcx16 -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv -std=gnu99  -Wendif-labels -Wno-missing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits -fstack-protector-strong -MMD -MP -MT -MF -fPIC -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


