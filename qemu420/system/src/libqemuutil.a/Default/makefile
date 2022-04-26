################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm

# All of the sources participating in the build are defined here
-include sources.mk
-include src/no/util/subdir.mk
-include src/no/ui/subdir.mk
-include src/no/trace/subdir.mk
-include src/no/target/sparc/subdir.mk
-include src/no/target/s390x/subdir.mk
-include src/no/target/riscv/subdir.mk
-include src/no/target/ppc/subdir.mk
-include src/no/target/mips/subdir.mk
-include src/no/target/i386/subdir.mk
-include src/no/target/hppa/subdir.mk
-include src/no/target/arm/subdir.mk
-include src/no/stubs/subdir.mk
-include src/no/scsi/subdir.mk
-include src/no/qom/subdir.mk
-include src/no/qobject/subdir.mk
-include src/no/qapi/subdir.mk
-include src/no/net/subdir.mk
-include src/no/nbd/subdir.mk
-include src/no/monitor/subdir.mk
-include src/no/migration/subdir.mk
-include src/no/io/subdir.mk
-include src/no/hw/xen/subdir.mk
-include src/no/hw/watchdog/subdir.mk
-include src/no/hw/virtio/subdir.mk
-include src/no/hw/vfio/subdir.mk
-include src/no/hw/usb/subdir.mk
-include src/no/hw/tpm/subdir.mk
-include src/no/hw/timer/subdir.mk
-include src/no/hw/sparc64/subdir.mk
-include src/no/hw/sparc/subdir.mk
-include src/no/hw/sd/subdir.mk
-include src/no/hw/scsi/subdir.mk
-include src/no/hw/s390x/subdir.mk
-include src/no/hw/rtc/subdir.mk
-include src/no/hw/riscv/subdir.mk
-include src/no/hw/rdma/vmw/subdir.mk
-include src/no/hw/rdma/subdir.mk
-include src/no/hw/ppc/subdir.mk
-include src/no/hw/pci-host/subdir.mk
-include src/no/hw/pci/subdir.mk
-include src/no/hw/nvram/subdir.mk
-include src/no/hw/net/subdir.mk
-include src/no/hw/misc/macio/subdir.mk
-include src/no/hw/misc/subdir.mk
-include src/no/hw/mips/subdir.mk
-include src/no/hw/mem/subdir.mk
-include src/no/hw/isa/subdir.mk
-include src/no/hw/intc/subdir.mk
-include src/no/hw/input/subdir.mk
-include src/no/hw/ide/subdir.mk
-include src/no/hw/i386/xen/subdir.mk
-include src/no/hw/i386/subdir.mk
-include src/no/hw/i2c/subdir.mk
-include src/no/hw/hppa/subdir.mk
-include src/no/hw/gpio/subdir.mk
-include src/no/hw/dma/subdir.mk
-include src/no/hw/display/subdir.mk
-include src/no/hw/core/subdir.mk
-include src/no/hw/char/subdir.mk
-include src/no/hw/block/dataplane/subdir.mk
-include src/no/hw/block/subdir.mk
-include src/no/hw/audio/subdir.mk
-include src/no/hw/arm/subdir.mk
-include src/no/hw/alpha/subdir.mk
-include src/no/hw/acpi/subdir.mk
-include src/no/hw/9pfs/subdir.mk
-include src/no/crypto/subdir.mk
-include src/no/chardev/subdir.mk
-include src/no/block/subdir.mk
-include src/no/authz/subdir.mk
-include src/no/audio/subdir.mk
-include src/no/accel/tcg/subdir.mk
-include src/no/accel/kvm/subdir.mk
-include src/no/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: libqemuutil

# Tool invocations
libqemuutil: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -shared -o "libqemuutil" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(LIBRARIES)$(CC_DEPS)$(C++_DEPS)$(C_UPPER_DEPS)$(CXX_DEPS)$(OBJS)$(CPP_DEPS)$(C_DEPS) libqemuutil
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
