
/*------------------------------------
 * soc.c
 * Create:  2021-01-24
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 *
 *
 *
 *
 *------------------------------------
 */


/*================================================================*/
extern int no_main(int argc, char **argv);


//when debug in eclipse, we need to use file name with absolute directory.
#if 1
const char *cfg_file_name="/home/steve/code/code/emulator/arm/c_soc/Build (GNU)/armemu.conf";
const char *elf_bin_name="/home/steve/code/code/emulator/arm/c_soc/Build (GNU)/test.bin";
const char *blk_dev_name="/home/steve/code/code/emulator/arm/c_soc/Build (GNU)/bdev.bin";
#else
const char *cfg_file_name="armemu.conf";
const char *elf_bin_name="test.bin";
const char *blk_dev_name="bdev.bin";
#endif

#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv) {
	int ret;

	ret=no_main(argc,argv);
	return ret;
}

/*================================================================*/

/* end of soc.c */

