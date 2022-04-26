
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
#include <stdio.h>
static int print_help()
{
	printf("Use the last letter of command line to select:\n");
	printf("h: help\n");
	printf("e: elf2hex\n");
	printf("r: rocc_test\n");
	printf("s: spike\n");
	printf("d: spike disasm\n");
	printf("l: spike log\n");
	printf("t: termios\n");
	printf("x: xspike\n");
	printf("Thanks for using Rui's version of Spike!\n");
	printf("2021-03-01\n");
	return 0;

}

/*================================================================*/
extern int elf2hex_main(int argc, char** argv);
extern int rocc_test_main(int argc, char** argv);
extern int spike_main(int argc, char** argv);
extern int spike_dasm_main(int argc, char** argv);
extern int spike_log_main(int argc, char** argv);
extern int termios_main(int argc, char** argv);
extern int xspike_main(int argc, char** argv);

int main(int argc, char **argv)
{
	int ret;
	char c;

	if(argc <= 1)
	{
		ret = print_help();
		return ret;
	}
	argc--;
	c=argv[argc][0];

	switch (c)
	{
	case 'h':
		ret = print_help();
		break;
	case 'e':
		ret = elf2hex_main(argc,argv);
		break;
	case 'r':
		ret = rocc_test_main(argc,argv);
		break;
	case 's':
		ret = spike_main(argc,argv);
		break;
	case 'd':
		ret = spike_dasm_main(argc,argv);
		break;
	case 'l':
		ret = spike_log_main(argc,argv);
		break;
	case 't':
		ret = termios_main(argc,argv);
		break;
	case 'x':
		ret = xspike_main(argc,argv);
		break;
	default:
		ret = print_help();
		break;
	}
	return ret;
}

/*================================================================*/

/* end of soc.c */

