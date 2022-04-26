
/*------------------------------------
 * r_copyfile.c
 * Create:  2021-01-24
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 * This program will copy all source and head files to a designated directory.
 * input:
 * d.list: lists of all *.d files
 * c.list: lists of all *.c files
 * h.list: lists of all *.h files
 * cpp.list: lists of all *.cpp files
 * cc.list:lists of all *.cc files
 * hpp.list:lists of all *.hpp files
 *------------------------------------
 */


/*================================================================*/
#include "./os/2exp.h"
extern int no_main(int argc, char **argv);

int main(int argc, char **argv)
{
	int ret;
	char *s;

	ret = no_main(argc, argv);

	return ret;
}

/*================================================================*/

/* end of r_copyfile.c */

