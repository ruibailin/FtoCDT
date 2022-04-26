################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/hw/timer/a9gtimer.c \
../src/no/hw/timer/allwinner-a10-pit.c \
../src/no/hw/timer/arm_mptimer.c \
../src/no/hw/timer/arm_timer.c \
../src/no/hw/timer/armv7m_systick.c \
../src/no/hw/timer/aspeed_timer.c \
../src/no/hw/timer/bcm2835_systmr.c \
../src/no/hw/timer/cadence_ttc.c \
../src/no/hw/timer/cmsdk-apb-dualtimer.c \
../src/no/hw/timer/cmsdk-apb-timer.c \
../src/no/hw/timer/digic-timer.c \
../src/no/hw/timer/exynos4210_mct.c \
../src/no/hw/timer/exynos4210_pwm.c \
../src/no/hw/timer/imx_epit.c \
../src/no/hw/timer/imx_gpt.c \
../src/no/hw/timer/mss-timer.c \
../src/no/hw/timer/nrf51_timer.c \
../src/no/hw/timer/omap_gptimer.c \
../src/no/hw/timer/omap_synctimer.c \
../src/no/hw/timer/pxa2xx_timer.c \
../src/no/hw/timer/stm32f2xx_timer.c \
../src/no/hw/timer/xilinx_timer.c 

OBJS += \
./src/no/hw/timer/a9gtimer.o \
./src/no/hw/timer/allwinner-a10-pit.o \
./src/no/hw/timer/arm_mptimer.o \
./src/no/hw/timer/arm_timer.o \
./src/no/hw/timer/armv7m_systick.o \
./src/no/hw/timer/aspeed_timer.o \
./src/no/hw/timer/bcm2835_systmr.o \
./src/no/hw/timer/cadence_ttc.o \
./src/no/hw/timer/cmsdk-apb-dualtimer.o \
./src/no/hw/timer/cmsdk-apb-timer.o \
./src/no/hw/timer/digic-timer.o \
./src/no/hw/timer/exynos4210_mct.o \
./src/no/hw/timer/exynos4210_pwm.o \
./src/no/hw/timer/imx_epit.o \
./src/no/hw/timer/imx_gpt.o \
./src/no/hw/timer/mss-timer.o \
./src/no/hw/timer/nrf51_timer.o \
./src/no/hw/timer/omap_gptimer.o \
./src/no/hw/timer/omap_synctimer.o \
./src/no/hw/timer/pxa2xx_timer.o \
./src/no/hw/timer/stm32f2xx_timer.o \
./src/no/hw/timer/xilinx_timer.o 

C_DEPS += \
./src/no/hw/timer/a9gtimer.d \
./src/no/hw/timer/allwinner-a10-pit.d \
./src/no/hw/timer/arm_mptimer.d \
./src/no/hw/timer/arm_timer.d \
./src/no/hw/timer/armv7m_systick.d \
./src/no/hw/timer/aspeed_timer.d \
./src/no/hw/timer/bcm2835_systmr.d \
./src/no/hw/timer/cadence_ttc.d \
./src/no/hw/timer/cmsdk-apb-dualtimer.d \
./src/no/hw/timer/cmsdk-apb-timer.d \
./src/no/hw/timer/digic-timer.d \
./src/no/hw/timer/exynos4210_mct.d \
./src/no/hw/timer/exynos4210_pwm.d \
./src/no/hw/timer/imx_epit.d \
./src/no/hw/timer/imx_gpt.d \
./src/no/hw/timer/mss-timer.d \
./src/no/hw/timer/nrf51_timer.d \
./src/no/hw/timer/omap_gptimer.d \
./src/no/hw/timer/omap_synctimer.d \
./src/no/hw/timer/pxa2xx_timer.d \
./src/no/hw/timer/stm32f2xx_timer.d \
./src/no/hw/timer/xilinx_timer.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/hw/timer/%.o: ../src/no/hw/timer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DNEED_CPU_H=1 -D_REENTRANT=1 -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -D__STDC_LIMIT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_CONSTANT_MACROS -DCONFIG_KVM_IS_POSSIBLE=1 -DHAVE_COPY_FILE_RANGE -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/stubs" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/arm-softmmu/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/backends" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/dump" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/fsdev" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/bt" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/cpu" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/ipack" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net/rocker" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-bridge" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/pcmcia" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/smbios" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/include" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/io" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net/can" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/net" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qapi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/replay" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/scsi" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/slirp/src" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/target/arm" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg/i386" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/tcg" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/ui" -I/usr/include/glib-2.0 -I/usr/include/libusb-1.0 -I/usr/include/libxml2 -I/usr/include/pixman-1 -I/usr/include/SDL2 -I/usr/include/x86_64-linux-gnu -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I"/home/steve/code/work/qemu420/system/src/qemu-system-arm/src/no/disas/libvixl" -O2 -g -Wall -c -fmessage-length=0   -fPIE -m64 -mcx16 -Wstrict-prototypes -Wredundant-decls -Wall -Wundef -Wwrite-strings -Wmissing-prototypes -fno-strict-aliasing -fno-common -fwrapv -std=gnu99  -Wendif-labels -Wno-missing-include-dirs -Wempty-body -Wnested-externs -Wformat-security -Wformat-y2k -Winit-self -Wignored-qualifiers -Wold-style-declaration -Wold-style-definition -Wtype-limits -fstack-protector-strong -MMD -MP -MT -MF -fPIC -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


