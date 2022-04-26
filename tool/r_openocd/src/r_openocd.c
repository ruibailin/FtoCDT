
/*------------------------------------
 * r_openocd.c
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
	printf("j: jmsh\n");
	printf("r: remote_bitbang\n");
	printf("s: sql\n");
	printf("o: openocd\n");
	printf("Thanks for using Rui's version of Openocd!\n");
	printf("2021-04-01\n");
	return 0;

}

/*================================================================*/
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "openocd.h"


extern int jmsh_main(int argc, char *const argv[]);
extern int remote_bitbang_main(int argc, char *argv[]);
extern int sql_main(int argc, char **argv);
extern int openocd_main(int argc, char **argv);

int main(int argc, char *argv[])
{
	int ret;
	char c;

	/* disable buffering otherwise piping to logs causes problems work */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

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
		ret = jmsh_main(argc, argv);
		break;
	case 'r':
		ret = remote_bitbang_main(argc, argv);
		break;
	case 's':
		ret = sql_main(argc, argv);
		break;
	case 'o':
		ret = openocd_main(argc, argv);
		break;
	default:
		ret = print_help();
		break;
	}
	return ret;
}
