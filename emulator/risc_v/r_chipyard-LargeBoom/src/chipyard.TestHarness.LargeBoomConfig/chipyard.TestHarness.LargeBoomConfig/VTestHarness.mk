# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /home/steve/code/code/sonicboom/chipyard/sims/verilator/simulator-chipyard-LargeBoomConfig

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	 -O1 -std=c++11 -I/include -I/home/steve/code/code/sonicboom/chipyard/tools/DRAMSim2 -DTEST_HARNESS=VTestHarness -DVERILATOR \
        -I/home/steve/code/code/sonicboom/chipyard/riscv-tools-install/include/ \
	-I/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig -include /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig.plusArgs -include /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/verilator.h \
	-include /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/chipyard.TestHarness.LargeBoomConfig/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/steve/code/code/sonicboom/chipyard/sims/verilator -lpthread \
        /home/steve/code/code/sonicboom/chipyard/riscv-tools-install/lib/libfesvr.a \
	/home/steve/code/code/sonicboom/chipyard/tools/DRAMSim2/libdramsim.a \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDRAM \
	SimDTM \
	SimJTAG \
	SimSerial \
	SimUART \
	emulator \
	mm \
	mm_dramsim2 \
	remote_bitbang \
	uart \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDRAM.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/SimDRAM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimDTM.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/SimDTM.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/SimJTAG.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimSerial.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/SimSerial.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimUART.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/SimUART.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/emulator.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/mm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mm_dramsim2.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/mm_dramsim2.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/remote_bitbang.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
uart.o: /home/steve/code/code/sonicboom/chipyard/sims/verilator/generated-src/chipyard.TestHarness.LargeBoomConfig/uart.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/steve/code/code/sonicboom/chipyard/sims/verilator/simulator-chipyard-LargeBoomConfig: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) -no-pie $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
