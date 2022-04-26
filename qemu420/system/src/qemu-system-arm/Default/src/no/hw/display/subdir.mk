################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/hw/display/ads7846.c \
../src/no/hw/display/ati.c \
../src/no/hw/display/ati_2d.c \
../src/no/hw/display/ati_dbg.c \
../src/no/hw/display/bcm2835_fb.c \
../src/no/hw/display/blizzard.c \
../src/no/hw/display/bochs-display.c \
../src/no/hw/display/cirrus_vga.c \
../src/no/hw/display/edid-generate.c \
../src/no/hw/display/edid-region.c \
../src/no/hw/display/exynos4210_fimd.c \
../src/no/hw/display/framebuffer.c \
../src/no/hw/display/i2c-ddc.c \
../src/no/hw/display/omap_dss.c \
../src/no/hw/display/omap_lcdc.c \
../src/no/hw/display/pl110.c \
../src/no/hw/display/pxa2xx_lcd.c \
../src/no/hw/display/ramfb-standalone.c \
../src/no/hw/display/ramfb.c \
../src/no/hw/display/sii9022.c \
../src/no/hw/display/ssd0303.c \
../src/no/hw/display/ssd0323.c \
../src/no/hw/display/tc6393xb.c \
../src/no/hw/display/vga-pci.c \
../src/no/hw/display/vga.c \
../src/no/hw/display/vhost-user-gpu-pci.c \
../src/no/hw/display/vhost-user-gpu.c \
../src/no/hw/display/virtio-gpu-3d.c \
../src/no/hw/display/virtio-gpu-base.c \
../src/no/hw/display/virtio-gpu-pci.c \
../src/no/hw/display/virtio-gpu.c \
../src/no/hw/display/vmware_vga.c 

OBJS += \
./src/no/hw/display/ads7846.o \
./src/no/hw/display/ati.o \
./src/no/hw/display/ati_2d.o \
./src/no/hw/display/ati_dbg.o \
./src/no/hw/display/bcm2835_fb.o \
./src/no/hw/display/blizzard.o \
./src/no/hw/display/bochs-display.o \
./src/no/hw/display/cirrus_vga.o \
./src/no/hw/display/edid-generate.o \
./src/no/hw/display/edid-region.o \
./src/no/hw/display/exynos4210_fimd.o \
./src/no/hw/display/framebuffer.o \
./src/no/hw/display/i2c-ddc.o \
./src/no/hw/display/omap_dss.o \
./src/no/hw/display/omap_lcdc.o \
./src/no/hw/display/pl110.o \
./src/no/hw/display/pxa2xx_lcd.o \
./src/no/hw/display/ramfb-standalone.o \
./src/no/hw/display/ramfb.o \
./src/no/hw/display/sii9022.o \
./src/no/hw/display/ssd0303.o \
./src/no/hw/display/ssd0323.o \
./src/no/hw/display/tc6393xb.o \
./src/no/hw/display/vga-pci.o \
./src/no/hw/display/vga.o \
./src/no/hw/display/vhost-user-gpu-pci.o \
./src/no/hw/display/vhost-user-gpu.o \
./src/no/hw/display/virtio-gpu-3d.o \
./src/no/hw/display/virtio-gpu-base.o \
./src/no/hw/display/virtio-gpu-pci.o \
./src/no/hw/display/virtio-gpu.o \
./src/no/hw/display/vmware_vga.o 

C_DEPS += \
./src/no/hw/display/ads7846.d \
./src/no/hw/display/ati.d \
./src/no/hw/display/ati_2d.d \
./src/no/hw/display/ati_dbg.d \
./src/no/hw/display/bcm2835_fb.d \
./src/no/hw/display/blizzard.d \
./src/no/hw/display/bochs-display.d \
./src/no/hw/display/cirrus_vga.d \
./src/no/hw/display/edid-generate.d \
./src/no/hw/display/edid-region.d \
./src/no/hw/display/exynos4210_fimd.d \
./src/no/hw/display/framebuffer.d \
./src/no/hw/display/i2c-ddc.d \
./src/no/hw/display/omap_dss.d \
./src/no/hw/display/omap_lcdc.d \
./src/no/hw/display/pl110.d \
./src/no/hw/display/pxa2xx_lcd.d \
./src/no/hw/display/ramfb-standalone.d \
./src/no/hw/display/ramfb.d \
./src/no/hw/display/sii9022.d \
./src/no/hw/display/ssd0303.d \
./src/no/hw/display/ssd0323.d \
./src/no/hw/display/tc6393xb.d \
./src/no/hw/display/vga-pci.d \
./src/no/hw/display/vga.d \
./src/no/hw/display/vhost-user-gpu-pci.d \
./src/no/hw/display/vhost-user-gpu.d \
./src/no/hw/display/virtio-gpu-3d.d \
./src/no/hw/display/virtio-gpu-base.d \
./src/no/hw/display/virtio-gpu-pci.d \
./src/no/hw/display/virtio-gpu.d \
./src/no/hw/display/vmware_vga.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/hw/display/%.o: ../src/no/hw/display/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DNEED_CPU_H=1 -D_REENTRANT=1 -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -D__STDC_LIMIT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_CONSTANT_MACROS -DCONFIG_KVM_IS_POSSIBLE=1 -DHAVE_COPY_FILE_RANGE -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/stubs" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/backends" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dump" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fsdev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/bt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/cpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ipack" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/rocker" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-bridge" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pcmcia" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/smbios" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/io" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qapi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/replay" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/slirp/src" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg/i386" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/ui" -I/usr/include/glib-2.0 -I/usr/include/libusb-1.0 -I/usr/include/libxml2 -I/usr/include/pixman-1 -I/usr/include/SDL2 -I/usr/include/x86_64-linux-gnu -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas/libvixl" -O2 -g -Wall -c -fmessage-length=0   -fPIE -m64 -mcx16 -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv -std=gnu99  -Wendif-labels -Wno-missing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits -fstack-protector-strong -MMD -MP -MT -MF -fPIC -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


