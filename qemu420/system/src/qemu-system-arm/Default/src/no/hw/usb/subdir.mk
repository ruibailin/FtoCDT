################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/hw/usb/bus.c \
../src/no/hw/usb/chipidea.c \
../src/no/hw/usb/combined-packet.c \
../src/no/hw/usb/core.c \
../src/no/hw/usb/desc-msos.c \
../src/no/hw/usb/desc.c \
../src/no/hw/usb/dev-audio.c \
../src/no/hw/usb/dev-bluetooth.c \
../src/no/hw/usb/dev-hid.c \
../src/no/hw/usb/dev-hub.c \
../src/no/hw/usb/dev-mtp.c \
../src/no/hw/usb/dev-network.c \
../src/no/hw/usb/dev-serial.c \
../src/no/hw/usb/dev-smartcard-reader.c \
../src/no/hw/usb/dev-storage.c \
../src/no/hw/usb/dev-uas.c \
../src/no/hw/usb/dev-wacom.c \
../src/no/hw/usb/hcd-ehci-pci.c \
../src/no/hw/usb/hcd-ehci-sysbus.c \
../src/no/hw/usb/hcd-ehci.c \
../src/no/hw/usb/hcd-musb.c \
../src/no/hw/usb/hcd-ohci-pci.c \
../src/no/hw/usb/hcd-ohci.c \
../src/no/hw/usb/hcd-uhci.c \
../src/no/hw/usb/hcd-xhci-nec.c \
../src/no/hw/usb/hcd-xhci.c \
../src/no/hw/usb/host-libusb.c \
../src/no/hw/usb/libhw.c \
../src/no/hw/usb/tusb6010.c 

OBJS += \
./src/no/hw/usb/bus.o \
./src/no/hw/usb/chipidea.o \
./src/no/hw/usb/combined-packet.o \
./src/no/hw/usb/core.o \
./src/no/hw/usb/desc-msos.o \
./src/no/hw/usb/desc.o \
./src/no/hw/usb/dev-audio.o \
./src/no/hw/usb/dev-bluetooth.o \
./src/no/hw/usb/dev-hid.o \
./src/no/hw/usb/dev-hub.o \
./src/no/hw/usb/dev-mtp.o \
./src/no/hw/usb/dev-network.o \
./src/no/hw/usb/dev-serial.o \
./src/no/hw/usb/dev-smartcard-reader.o \
./src/no/hw/usb/dev-storage.o \
./src/no/hw/usb/dev-uas.o \
./src/no/hw/usb/dev-wacom.o \
./src/no/hw/usb/hcd-ehci-pci.o \
./src/no/hw/usb/hcd-ehci-sysbus.o \
./src/no/hw/usb/hcd-ehci.o \
./src/no/hw/usb/hcd-musb.o \
./src/no/hw/usb/hcd-ohci-pci.o \
./src/no/hw/usb/hcd-ohci.o \
./src/no/hw/usb/hcd-uhci.o \
./src/no/hw/usb/hcd-xhci-nec.o \
./src/no/hw/usb/hcd-xhci.o \
./src/no/hw/usb/host-libusb.o \
./src/no/hw/usb/libhw.o \
./src/no/hw/usb/tusb6010.o 

C_DEPS += \
./src/no/hw/usb/bus.d \
./src/no/hw/usb/chipidea.d \
./src/no/hw/usb/combined-packet.d \
./src/no/hw/usb/core.d \
./src/no/hw/usb/desc-msos.d \
./src/no/hw/usb/desc.d \
./src/no/hw/usb/dev-audio.d \
./src/no/hw/usb/dev-bluetooth.d \
./src/no/hw/usb/dev-hid.d \
./src/no/hw/usb/dev-hub.d \
./src/no/hw/usb/dev-mtp.d \
./src/no/hw/usb/dev-network.d \
./src/no/hw/usb/dev-serial.d \
./src/no/hw/usb/dev-smartcard-reader.d \
./src/no/hw/usb/dev-storage.d \
./src/no/hw/usb/dev-uas.d \
./src/no/hw/usb/dev-wacom.d \
./src/no/hw/usb/hcd-ehci-pci.d \
./src/no/hw/usb/hcd-ehci-sysbus.d \
./src/no/hw/usb/hcd-ehci.d \
./src/no/hw/usb/hcd-musb.d \
./src/no/hw/usb/hcd-ohci-pci.d \
./src/no/hw/usb/hcd-ohci.d \
./src/no/hw/usb/hcd-uhci.d \
./src/no/hw/usb/hcd-xhci-nec.d \
./src/no/hw/usb/hcd-xhci.d \
./src/no/hw/usb/host-libusb.d \
./src/no/hw/usb/libhw.d \
./src/no/hw/usb/tusb6010.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/hw/usb/%.o: ../src/no/hw/usb/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DNEED_CPU_H=1 -D_REENTRANT=1 -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -D__STDC_LIMIT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_CONSTANT_MACROS -DCONFIG_KVM_IS_POSSIBLE=1 -DHAVE_COPY_FILE_RANGE -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/stubs" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/backends" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dump" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fsdev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/bt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/cpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ipack" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/rocker" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-bridge" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pcmcia" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/smbios" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/io" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qapi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/replay" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/slirp/src" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg/i386" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/ui" -I/usr/include/glib-2.0 -I/usr/include/libusb-1.0 -I/usr/include/libxml2 -I/usr/include/pixman-1 -I/usr/include/SDL2 -I/usr/include/x86_64-linux-gnu -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas/libvixl" -O2 -g -Wall -c -fmessage-length=0   -fPIE -m64 -mcx16 -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv -std=gnu99  -Wendif-labels -Wno-missing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits -fstack-protector-strong -MMD -MP -MT -MF -fPIC -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


