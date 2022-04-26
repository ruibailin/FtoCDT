/*
 * main.c
 *
 *  Created on: Apr 8, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
#include "../os/2exp.h"

#if UNIT_TEST
extern void test_cbuf();
extern void test_char();
extern void test_cset();
extern void test_cstr();
extern void test_cdir();
extern void test_file();
extern void test_list();
void test_cmd(int argc, char **argv);
void test_all()
{
	os_print("");
	os_debug("");
	os_alarm("");
	os_panic("");
	test_cbuf();
	test_char();
	test_cset();
	test_cstr();
	test_cdir();
	test_file();
	test_list();
}
#endif

static void print_help()
{
	os_printf("Usage: r_copyfile output  dest sour\n");
	os_printf("where: \n");
	os_printf("      output: print of make, such as make > output \n");
	os_printf("      dest: destination path where you want to put source file.\n");
	os_printf("      sour: source path where you want to read source file.\n");
}

extern void parse_n_file(char *file_name);
/*================================================================*/
#include "./1buf/1buf.h"
#include "./2chr/2chr.h"
#include "./2set/2set.h"
#include "./3str/3str.h"
#include "./4dir/4dir.h"
#include "./4fil/4fil.h"
#include "./5lis/5lis.h"
#include "./6cmd/6cmd.h"

int no_main(int argc, char **argv)
{
#if 0
	test_all();
	test_cmd(argc, argv);
#endif

	if(argc < 4 )
	{
		print_help();
		return 0;
	}

	cdir_set_base_dest_name(argv[2]);
	cdir_set_work_dest_name(argv[2]);
	cdir_set_base_sour_name(argv[3]);
	cdir_set_work_sour_name(argv[3]);

	parse_n_file(argv[1]);


	return 0;
}
/*================================================================*/
/* end of main.c */
