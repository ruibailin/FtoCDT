/*------------------------------------
 * hello.c
 * Create:  2021-03-24
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 *The QEMU emulator supports the VersatilePB platform, 
 *that contains an ARM926EJ-S core and, among other peripherals, four UART serial ports; 
 *the first serial port in particular (UART0) works  as a terminal when using the -nographic or “-serial stdio” qemu option. 
 *The memory map of the VersatilePB board is implemented in QEMU in this board-specific C source; 
 *from the address where the UART0 is mapped: 0x101f1000. 
 *------------------------------------
 */


/*================================================================*/


volatile unsigned int * const UART0DR = (unsigned int *)0x101f1000;
 
void print_uart0(const char *s) {
 while(*s != '\0') { /* Loop until end of string */
 *UART0DR = (unsigned int)(*s); /* Transmit char */
 s++; /* Next char */
 }
}
 
void c_entry() {
 print_uart0("Hello world!\n");
 print_uart0("Presented by Steve Rui\n");
 print_uart0("2021-03-24\n");
}

/*================================================================*/

/* end of hello.c */