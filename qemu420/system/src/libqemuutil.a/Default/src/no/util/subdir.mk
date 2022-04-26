################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/util/aio-posix.c \
../src/no/util/aio-wait.c \
../src/no/util/aiocb.c \
../src/no/util/async.c \
../src/no/util/base64.c \
../src/no/util/bitmap.c \
../src/no/util/bitops.c \
../src/no/util/buffer.c \
../src/no/util/bufferiszero.c \
../src/no/util/cacheinfo.c \
../src/no/util/compatfd.c \
../src/no/util/coroutine-ucontext.c \
../src/no/util/crc32c.c \
../src/no/util/cutils.c \
../src/no/util/drm.c \
../src/no/util/envlist.c \
../src/no/util/error.c \
../src/no/util/event_notifier-posix.c \
../src/no/util/fifo8.c \
../src/no/util/filemonitor-inotify.c \
../src/no/util/getauxval.c \
../src/no/util/guest-random.c \
../src/no/util/hbitmap.c \
../src/no/util/hexdump.c \
../src/no/util/host-utils.c \
../src/no/util/id.c \
../src/no/util/iov.c \
../src/no/util/iova-tree.c \
../src/no/util/keyval.c \
../src/no/util/lockcnt.c \
../src/no/util/log.c \
../src/no/util/main-loop.c \
../src/no/util/memfd.c \
../src/no/util/mmap-alloc.c \
../src/no/util/module.c \
../src/no/util/notify.c \
../src/no/util/osdep.c \
../src/no/util/oslib-posix.c \
../src/no/util/pagesize.c \
../src/no/util/path.c \
../src/no/util/qdist.c \
../src/no/util/qemu-co-shared-resource.c \
../src/no/util/qemu-config.c \
../src/no/util/qemu-coroutine-io.c \
../src/no/util/qemu-coroutine-lock.c \
../src/no/util/qemu-coroutine-sleep.c \
../src/no/util/qemu-coroutine.c \
../src/no/util/qemu-error.c \
../src/no/util/qemu-openpty.c \
../src/no/util/qemu-option.c \
../src/no/util/qemu-print.c \
../src/no/util/qemu-progress.c \
../src/no/util/qemu-sockets.c \
../src/no/util/qemu-thread-posix.c \
../src/no/util/qemu-timer-common.c \
../src/no/util/qemu-timer.c \
../src/no/util/qht.c \
../src/no/util/qsp.c \
../src/no/util/range.c \
../src/no/util/rcu.c \
../src/no/util/readline.c \
../src/no/util/stats64.c \
../src/no/util/systemd.c \
../src/no/util/thread-pool.c \
../src/no/util/throttle.c \
../src/no/util/timed-average.c \
../src/no/util/trace.c \
../src/no/util/unicode.c \
../src/no/util/uri.c \
../src/no/util/uuid.c \
../src/no/util/vfio-helpers.c 

OBJS += \
./src/no/util/aio-posix.o \
./src/no/util/aio-wait.o \
./src/no/util/aiocb.o \
./src/no/util/async.o \
./src/no/util/base64.o \
./src/no/util/bitmap.o \
./src/no/util/bitops.o \
./src/no/util/buffer.o \
./src/no/util/bufferiszero.o \
./src/no/util/cacheinfo.o \
./src/no/util/compatfd.o \
./src/no/util/coroutine-ucontext.o \
./src/no/util/crc32c.o \
./src/no/util/cutils.o \
./src/no/util/drm.o \
./src/no/util/envlist.o \
./src/no/util/error.o \
./src/no/util/event_notifier-posix.o \
./src/no/util/fifo8.o \
./src/no/util/filemonitor-inotify.o \
./src/no/util/getauxval.o \
./src/no/util/guest-random.o \
./src/no/util/hbitmap.o \
./src/no/util/hexdump.o \
./src/no/util/host-utils.o \
./src/no/util/id.o \
./src/no/util/iov.o \
./src/no/util/iova-tree.o \
./src/no/util/keyval.o \
./src/no/util/lockcnt.o \
./src/no/util/log.o \
./src/no/util/main-loop.o \
./src/no/util/memfd.o \
./src/no/util/mmap-alloc.o \
./src/no/util/module.o \
./src/no/util/notify.o \
./src/no/util/osdep.o \
./src/no/util/oslib-posix.o \
./src/no/util/pagesize.o \
./src/no/util/path.o \
./src/no/util/qdist.o \
./src/no/util/qemu-co-shared-resource.o \
./src/no/util/qemu-config.o \
./src/no/util/qemu-coroutine-io.o \
./src/no/util/qemu-coroutine-lock.o \
./src/no/util/qemu-coroutine-sleep.o \
./src/no/util/qemu-coroutine.o \
./src/no/util/qemu-error.o \
./src/no/util/qemu-openpty.o \
./src/no/util/qemu-option.o \
./src/no/util/qemu-print.o \
./src/no/util/qemu-progress.o \
./src/no/util/qemu-sockets.o \
./src/no/util/qemu-thread-posix.o \
./src/no/util/qemu-timer-common.o \
./src/no/util/qemu-timer.o \
./src/no/util/qht.o \
./src/no/util/qsp.o \
./src/no/util/range.o \
./src/no/util/rcu.o \
./src/no/util/readline.o \
./src/no/util/stats64.o \
./src/no/util/systemd.o \
./src/no/util/thread-pool.o \
./src/no/util/throttle.o \
./src/no/util/timed-average.o \
./src/no/util/trace.o \
./src/no/util/unicode.o \
./src/no/util/uri.o \
./src/no/util/uuid.o \
./src/no/util/vfio-helpers.o 

C_DEPS += \
./src/no/util/aio-posix.d \
./src/no/util/aio-wait.d \
./src/no/util/aiocb.d \
./src/no/util/async.d \
./src/no/util/base64.d \
./src/no/util/bitmap.d \
./src/no/util/bitops.d \
./src/no/util/buffer.d \
./src/no/util/bufferiszero.d \
./src/no/util/cacheinfo.d \
./src/no/util/compatfd.d \
./src/no/util/coroutine-ucontext.d \
./src/no/util/crc32c.d \
./src/no/util/cutils.d \
./src/no/util/drm.d \
./src/no/util/envlist.d \
./src/no/util/error.d \
./src/no/util/event_notifier-posix.d \
./src/no/util/fifo8.d \
./src/no/util/filemonitor-inotify.d \
./src/no/util/getauxval.d \
./src/no/util/guest-random.d \
./src/no/util/hbitmap.d \
./src/no/util/hexdump.d \
./src/no/util/host-utils.d \
./src/no/util/id.d \
./src/no/util/iov.d \
./src/no/util/iova-tree.d \
./src/no/util/keyval.d \
./src/no/util/lockcnt.d \
./src/no/util/log.d \
./src/no/util/main-loop.d \
./src/no/util/memfd.d \
./src/no/util/mmap-alloc.d \
./src/no/util/module.d \
./src/no/util/notify.d \
./src/no/util/osdep.d \
./src/no/util/oslib-posix.d \
./src/no/util/pagesize.d \
./src/no/util/path.d \
./src/no/util/qdist.d \
./src/no/util/qemu-co-shared-resource.d \
./src/no/util/qemu-config.d \
./src/no/util/qemu-coroutine-io.d \
./src/no/util/qemu-coroutine-lock.d \
./src/no/util/qemu-coroutine-sleep.d \
./src/no/util/qemu-coroutine.d \
./src/no/util/qemu-error.d \
./src/no/util/qemu-openpty.d \
./src/no/util/qemu-option.d \
./src/no/util/qemu-print.d \
./src/no/util/qemu-progress.d \
./src/no/util/qemu-sockets.d \
./src/no/util/qemu-thread-posix.d \
./src/no/util/qemu-timer-common.d \
./src/no/util/qemu-timer.d \
./src/no/util/qht.d \
./src/no/util/qsp.d \
./src/no/util/range.d \
./src/no/util/rcu.d \
./src/no/util/readline.d \
./src/no/util/stats64.d \
./src/no/util/systemd.d \
./src/no/util/thread-pool.d \
./src/no/util/throttle.d \
./src/no/util/timed-average.d \
./src/no/util/trace.d \
./src/no/util/unicode.d \
./src/no/util/uri.d \
./src/no/util/uuid.d \
./src/no/util/vfio-helpers.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/util/%.o: ../src/no/util/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_GNU_SOURCE=1 -DPIE=1 -DFILE_OFFSET_BITS=64 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/accel" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/accel/tcg" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/block/dataplane" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/vfio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/riscv" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/target/riscv" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/trace" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/linux-headers" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/stubs" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/acpi" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/audio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/block" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/char" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/core" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/display" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/i2c" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/ide" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/input" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/intc" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/misc" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/net" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/nvram" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/pci-host" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/pci" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/scsi" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/sd" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/timer" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/tpm" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/usb" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no" -I/usr/include/libusb-1.0 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/virtio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/hw/watchdog" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/migration" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/monitor" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/net" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/audio" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/ui" -I/usr/include/SDL2 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/qom" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/authz" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/qapi" -I/usr/include/libxml2 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/nbd" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/scsi" -I/usr/include/x86_64-linux-gnu -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/block" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/chardev" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/crypto" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/io" -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/glib-2.0 -I/usr/include/pixman-1 -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no/include" -I"/home/steve/code/work/qemu420/system/src/libqemuutil.a/src/no" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


