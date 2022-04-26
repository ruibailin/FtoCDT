################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/hw/intc/allwinner-a10-pic.c \
../src/no/hw/intc/arm_gic.c \
../src/no/hw/intc/arm_gic_common.c \
../src/no/hw/intc/arm_gicv2m.c \
../src/no/hw/intc/arm_gicv3.c \
../src/no/hw/intc/arm_gicv3_common.c \
../src/no/hw/intc/arm_gicv3_cpuif.c \
../src/no/hw/intc/arm_gicv3_dist.c \
../src/no/hw/intc/arm_gicv3_its_common.c \
../src/no/hw/intc/arm_gicv3_redist.c \
../src/no/hw/intc/armv7m_nvic.c \
../src/no/hw/intc/aspeed_vic.c \
../src/no/hw/intc/bcm2835_ic.c \
../src/no/hw/intc/bcm2836_control.c \
../src/no/hw/intc/exynos4210_combiner.c \
../src/no/hw/intc/exynos4210_gic.c \
../src/no/hw/intc/imx_avic.c \
../src/no/hw/intc/imx_gpcv2.c \
../src/no/hw/intc/intc.c \
../src/no/hw/intc/omap_intc.c \
../src/no/hw/intc/pl190.c \
../src/no/hw/intc/realview_gic.c \
../src/no/hw/intc/xilinx_intc.c 

OBJS += \
./src/no/hw/intc/allwinner-a10-pic.o \
./src/no/hw/intc/arm_gic.o \
./src/no/hw/intc/arm_gic_common.o \
./src/no/hw/intc/arm_gicv2m.o \
./src/no/hw/intc/arm_gicv3.o \
./src/no/hw/intc/arm_gicv3_common.o \
./src/no/hw/intc/arm_gicv3_cpuif.o \
./src/no/hw/intc/arm_gicv3_dist.o \
./src/no/hw/intc/arm_gicv3_its_common.o \
./src/no/hw/intc/arm_gicv3_redist.o \
./src/no/hw/intc/armv7m_nvic.o \
./src/no/hw/intc/aspeed_vic.o \
./src/no/hw/intc/bcm2835_ic.o \
./src/no/hw/intc/bcm2836_control.o \
./src/no/hw/intc/exynos4210_combiner.o \
./src/no/hw/intc/exynos4210_gic.o \
./src/no/hw/intc/imx_avic.o \
./src/no/hw/intc/imx_gpcv2.o \
./src/no/hw/intc/intc.o \
./src/no/hw/intc/omap_intc.o \
./src/no/hw/intc/pl190.o \
./src/no/hw/intc/realview_gic.o \
./src/no/hw/intc/xilinx_intc.o 

C_DEPS += \
./src/no/hw/intc/allwinner-a10-pic.d \
./src/no/hw/intc/arm_gic.d \
./src/no/hw/intc/arm_gic_common.d \
./src/no/hw/intc/arm_gicv2m.d \
./src/no/hw/intc/arm_gicv3.d \
./src/no/hw/intc/arm_gicv3_common.d \
./src/no/hw/intc/arm_gicv3_cpuif.d \
./src/no/hw/intc/arm_gicv3_dist.d \
./src/no/hw/intc/arm_gicv3_its_common.d \
./src/no/hw/intc/arm_gicv3_redist.d \
./src/no/hw/intc/armv7m_nvic.d \
./src/no/hw/intc/aspeed_vic.d \
./src/no/hw/intc/bcm2835_ic.d \
./src/no/hw/intc/bcm2836_control.d \
./src/no/hw/intc/exynos4210_combiner.d \
./src/no/hw/intc/exynos4210_gic.d \
./src/no/hw/intc/imx_avic.d \
./src/no/hw/intc/imx_gpcv2.d \
./src/no/hw/intc/intc.d \
./src/no/hw/intc/omap_intc.d \
./src/no/hw/intc/pl190.d \
./src/no/hw/intc/realview_gic.d \
./src/no/hw/intc/xilinx_intc.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/hw/intc/%.o: ../src/no/hw/intc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DNEED_CPU_H=1 -D_REENTRANT=1 -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -D__STDC_LIMIT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_CONSTANT_MACROS -DCONFIG_KVM_IS_POSSIBLE=1 -DHAVE_COPY_FILE_RANGE -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/stubs" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/backends" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dump" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fsdev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/bt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/cpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ipack" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/rocker" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-bridge" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pcmcia" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/smbios" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/io" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qapi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/replay" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/slirp/src" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg/i386" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/ui" -I/usr/include/glib-2.0 -I/usr/include/libusb-1.0 -I/usr/include/libxml2 -I/usr/include/pixman-1 -I/usr/include/SDL2 -I/usr/include/x86_64-linux-gnu -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas/libvixl" -O2 -g -Wall -c -fmessage-length=0   -fPIE -m64 -mcx16 -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv -std=gnu99  -Wendif-labels -Wno-missing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits -fstack-protector-strong -MMD -MP -MT -MF -fPIC -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


