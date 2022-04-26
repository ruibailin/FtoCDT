/*
 * test.c
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
/*================================================================*/

static int inc;
static void test_basic()
{
	int node;
	inc = list_new_list();
	node = list_alloc_list_node(inc);
	list_free_list_node(inc);
	list_free_list(inc);
}

static void test_batch()
{
	int ret;
	char *name;
	inc = list_new_list();
	name = dir_malloc_name_buf();
	cstr_copy(name,"/home/steve/code/code/board/ncurses/ncurses-6.2/ncurses/fifo_defs.h");
	list_add_record(inc,name);
	name = dir_malloc_name_buf();
	cstr_copy(name,"/home/steve/code/code/board/ncurses/ncurses-6.2/ncurses/fallback.c");
	list_add_record(inc,name);
	name = dir_malloc_name_buf();
	cstr_copy(name,"/home/steve/code/code/board/ncurses/ncurses-6.2/ncurses/fallback.c");
	list_add_record(inc,name);
	name = dir_malloc_name_buf();
	cstr_copy(name,"/home/steve/code/code/board/ncurses/ncurses-6.2/menu/m_post.c");
	list_add_record(inc,name);
	ret = list_search_name(inc,"/home/steve/code/code/board/ncurses/ncurses-6.2/menu/m_opts.c");
	if(ret != 0)
		os_printf("File is found,%d",list_get_name(ret));
//	list_save_name(inc,"/home/steve/code/code/emulator/tool/r_curses/src/test/list.txt");
	list_print_name(inc);
//	list_copy_file(inc);
//	list_del_name(inc,"/home/steve/code/code/board/ncurses/ncurses-6.2/menu/m_post.c");
//	list_print_name(inc);
	list_clr_record(inc);
}


void test_list()
{
	test_basic();
	test_batch();
}
/*================================================================*/
#endif
/* end of test.c */
