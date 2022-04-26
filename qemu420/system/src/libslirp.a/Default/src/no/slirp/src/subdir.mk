################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/no/slirp/src/arp_table.c \
../src/no/slirp/src/bootp.c \
../src/no/slirp/src/cksum.c \
../src/no/slirp/src/dhcpv6.c \
../src/no/slirp/src/dnssearch.c \
../src/no/slirp/src/if.c \
../src/no/slirp/src/ip6_icmp.c \
../src/no/slirp/src/ip6_input.c \
../src/no/slirp/src/ip6_output.c \
../src/no/slirp/src/ip_icmp.c \
../src/no/slirp/src/ip_input.c \
../src/no/slirp/src/ip_output.c \
../src/no/slirp/src/mbuf.c \
../src/no/slirp/src/misc.c \
../src/no/slirp/src/ncsi.c \
../src/no/slirp/src/ndp_table.c \
../src/no/slirp/src/sbuf.c \
../src/no/slirp/src/slirp.c \
../src/no/slirp/src/socket.c \
../src/no/slirp/src/state.c \
../src/no/slirp/src/stream.c \
../src/no/slirp/src/tcp_input.c \
../src/no/slirp/src/tcp_output.c \
../src/no/slirp/src/tcp_subr.c \
../src/no/slirp/src/tcp_timer.c \
../src/no/slirp/src/tftp.c \
../src/no/slirp/src/udp.c \
../src/no/slirp/src/udp6.c \
../src/no/slirp/src/util.c \
../src/no/slirp/src/version.c \
../src/no/slirp/src/vmstate.c 

OBJS += \
./src/no/slirp/src/arp_table.o \
./src/no/slirp/src/bootp.o \
./src/no/slirp/src/cksum.o \
./src/no/slirp/src/dhcpv6.o \
./src/no/slirp/src/dnssearch.o \
./src/no/slirp/src/if.o \
./src/no/slirp/src/ip6_icmp.o \
./src/no/slirp/src/ip6_input.o \
./src/no/slirp/src/ip6_output.o \
./src/no/slirp/src/ip_icmp.o \
./src/no/slirp/src/ip_input.o \
./src/no/slirp/src/ip_output.o \
./src/no/slirp/src/mbuf.o \
./src/no/slirp/src/misc.o \
./src/no/slirp/src/ncsi.o \
./src/no/slirp/src/ndp_table.o \
./src/no/slirp/src/sbuf.o \
./src/no/slirp/src/slirp.o \
./src/no/slirp/src/socket.o \
./src/no/slirp/src/state.o \
./src/no/slirp/src/stream.o \
./src/no/slirp/src/tcp_input.o \
./src/no/slirp/src/tcp_output.o \
./src/no/slirp/src/tcp_subr.o \
./src/no/slirp/src/tcp_timer.o \
./src/no/slirp/src/tftp.o \
./src/no/slirp/src/udp.o \
./src/no/slirp/src/udp6.o \
./src/no/slirp/src/util.o \
./src/no/slirp/src/version.o \
./src/no/slirp/src/vmstate.o 

C_DEPS += \
./src/no/slirp/src/arp_table.d \
./src/no/slirp/src/bootp.d \
./src/no/slirp/src/cksum.d \
./src/no/slirp/src/dhcpv6.d \
./src/no/slirp/src/dnssearch.d \
./src/no/slirp/src/if.d \
./src/no/slirp/src/ip6_icmp.d \
./src/no/slirp/src/ip6_input.d \
./src/no/slirp/src/ip6_output.d \
./src/no/slirp/src/ip_icmp.d \
./src/no/slirp/src/ip_input.d \
./src/no/slirp/src/ip_output.d \
./src/no/slirp/src/mbuf.d \
./src/no/slirp/src/misc.d \
./src/no/slirp/src/ncsi.d \
./src/no/slirp/src/ndp_table.d \
./src/no/slirp/src/sbuf.d \
./src/no/slirp/src/slirp.d \
./src/no/slirp/src/socket.d \
./src/no/slirp/src/state.d \
./src/no/slirp/src/stream.d \
./src/no/slirp/src/tcp_input.d \
./src/no/slirp/src/tcp_output.d \
./src/no/slirp/src/tcp_subr.d \
./src/no/slirp/src/tcp_timer.d \
./src/no/slirp/src/tftp.d \
./src/no/slirp/src/udp.d \
./src/no/slirp/src/udp6.d \
./src/no/slirp/src/util.d \
./src/no/slirp/src/version.d \
./src/no/slirp/src/vmstate.d 


# Each subdirectory must supply rules for building sources it contributes
src/no/slirp/src/%.o: ../src/no/slirp/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -DG_LOG_DOMAIN='"Slirp"' -D_FORTIFY_SOURCE=2 -D_LARGEFILE_SOURCE=1 -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE=1 -DPIE=1 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include/ -I/usr/include/glib-2.0 -I/usr/include/pixman-1/ -I"/home/steve/code/work/qemu420/system/src/libcapstone.a/src/no/capstone/include" -I"/home/steve/code/work/qemu420/system/src/libfdt.a/src/no/dtc/libfdt" -I"/home/steve/code/work/qemu420/system/src/libslirp.a/src/no/slirp/src" -O0 -g -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


