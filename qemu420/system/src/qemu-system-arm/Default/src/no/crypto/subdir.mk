################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/crypto/aes.c \
../src/no/crypto/afsplit.c \
../src/no/crypto/block-luks.c \
../src/no/crypto/block-qcow.c \
../src/no/crypto/block.c \
../src/no/crypto/cipher.c \
../src/no/crypto/desrfb.c \
../src/no/crypto/hash-glib.c \
../src/no/crypto/hash.c \
../src/no/crypto/hmac-glib.c \
../src/no/crypto/hmac.c \
../src/no/crypto/init.c \
../src/no/crypto/ivgen-essiv.c \
../src/no/crypto/ivgen-plain.c \
../src/no/crypto/ivgen-plain64.c \
../src/no/crypto/ivgen.c \
../src/no/crypto/pbkdf.c \
../src/no/crypto/random-platform.c \
../src/no/crypto/secret.c \
../src/no/crypto/tlscreds.c \
../src/no/crypto/tlscredsanon.c \
../src/no/crypto/tlscredspsk.c \
../src/no/crypto/tlscredsx509.c \
../src/no/crypto/tlssession.c \
../src/no/crypto/xts.c 

OBJS += \
./src/no/crypto/aes.o \
./src/no/crypto/afsplit.o \
./src/no/crypto/block-luks.o \
./src/no/crypto/block-qcow.o \
./src/no/crypto/block.o \
./src/no/crypto/cipher.o \
./src/no/crypto/desrfb.o \
./src/no/crypto/hash-glib.o \
./src/no/crypto/hash.o \
./src/no/crypto/hmac-glib.o \
./src/no/crypto/hmac.o \
./src/no/crypto/init.o \
./src/no/crypto/ivgen-essiv.o \
./src/no/crypto/ivgen-plain.o \
./src/no/crypto/ivgen-plain64.o \
./src/no/crypto/ivgen.o \
./src/no/crypto/pbkdf.o \
./src/no/crypto/random-platform.o \
./src/no/crypto/secret.o \
./src/no/crypto/tlscreds.o \
./src/no/crypto/tlscredsanon.o \
./src/no/crypto/tlscredspsk.o \
./src/no/crypto/tlscredsx509.o \
./src/no/crypto/tlssession.o \
./src/no/crypto/xts.o 

C_DEPS += \
./src/no/crypto/aes.d \
./src/no/crypto/afsplit.d \
./src/no/crypto/block-luks.d \
./src/no/crypto/block-qcow.d \
./src/no/crypto/block.d \
./src/no/crypto/cipher.d \
./src/no/crypto/desrfb.d \
./src/no/crypto/hash-glib.d \
./src/no/crypto/hash.d \
./src/no/crypto/hmac-glib.d \
./src/no/crypto/hmac.d \
./src/no/crypto/init.d \
./src/no/crypto/ivgen-essiv.d \
./src/no/crypto/ivgen-plain.d \
./src/no/crypto/ivgen-plain64.d \
./src/no/crypto/ivgen.d \
./src/no/crypto/pbkdf.d \
./src/no/crypto/random-platform.d \
./src/no/crypto/secret.d \
./src/no/crypto/tlscreds.d \
./src/no/crypto/tlscredsanon.d \
./src/no/crypto/tlscredspsk.d \
./src/no/crypto/tlscredsx509.d \
./src/no/crypto/tlssession.d \
./src/no/crypto/xts.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/crypto/%.o: ../src/no/crypto/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DNEED_CPU_H=1 -D_REENTRANT=1 -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -D__STDC_LIMIT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_CONSTANT_MACROS -DCONFIG_KVM_IS_POSSIBLE=1 -DHAVE_COPY_FILE_RANGE -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/stubs" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/backends" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dump" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fsdev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/bt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/cpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ipack" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/rocker" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-bridge" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pcmcia" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/smbios" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/io" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qapi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/replay" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/slirp/src" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg/i386" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/ui" -I/usr/include/glib-2.0 -I/usr/include/libusb-1.0 -I/usr/include/libxml2 -I/usr/include/pixman-1 -I/usr/include/SDL2 -I/usr/include/x86_64-linux-gnu -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas/libvixl" -O2 -g -Wall -c -fmessage-length=0   -fPIE -m64 -mcx16 -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv -std=gnu99  -Wendif-labels -Wno-missing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits -fstack-protector-strong -MMD -MP -MT -MF -fPIC -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


