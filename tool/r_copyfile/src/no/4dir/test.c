/*
 * test.c
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
/*================================================================*/
static char sd[]="/home/steve/code/code/board";
static char dd[]="/home/steve/code/code/emulator";
static char sf[]="/home/steve/code/code/board/ncurses/build/test.c";
static char df[128];
static void test_work()
{
	int ret;
	char *name;
	name = cdir_set_base_sour_name(sd);
	name = cdir_get_base_sour_name();
	os_printf("%s\n",name);
	ret = cdir_is_sour_file(sf);
	ret = cdir_get_base_sour_len();

	name = cdir_set_base_dest_name(dd);
	name = cdir_get_base_dest_name();
	os_printf("%s\n",name);
	ret = cdir_get_base_dest_len();

	name = cdir_set_work_sour_name(sd);
	name = cdir_get_work_sour_name();
	os_printf("%s\n",name);

	cdir_make_sour_file_fname(df, "./tarce/../agend/work.c");
	cdir_make_dest_work_dir("trace");
	name = cdir_change_sour_to_dest(sf,df);
	os_printf("%s\n",name);

}


static char buf[128];
static char mkdir[]="/home/steve/code/code/emulator/rn/src/temp/work/";
static void test_abs()
{
	int ret;
	char *name;
	ret = cdir_is_abs_dir(dd);
	ret = cdir_is_user_dir(dd);
	ret = cdir_get_t_levels(sd);
	ret = cdir_get_l_name(sd,3,buf);
	ret = cdir_make_abs_dir(mkdir);
}

static char rel[]="./build/test/../../borad/../test.h";
static void test_rel()
{
	int ret;
	ret = cdir_is_rel_dir(rel);
	ret = cdir_rel_to_ful(buf,mkdir);
	ret = cdir_rel_to_ful(buf,rel);
	ret = cdir_ful_to_abs(buf);
}

void test_cdir()
{
	test_work();
	test_abs();
	test_rel();
}

/*================================================================*/
#endif
/* end of test.c */
