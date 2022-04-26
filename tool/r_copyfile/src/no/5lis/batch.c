/*
 * batch.c
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
void list_save_name(int list, char *save);
void list_save_name(int list, char *save)
{
	void *fp;
	char *name;
	int next,ret;

	os_printf("save list %d: %s \n",list,save);
	ret = os_find_file(save);
	if(ret == 1)
		return;

	cdir_make_abs_dir(save);
	fp = os_fopen(save, "w");
	if(fp == NULL)
		return;

	next = list_get_next(list);
	while(1)
	{
		if(next == list)
			break;
		name = list_get_name(next);
        os_fputs(fp,name);
        os_fputs(fp,"\n");
    	next = list_get_next(next);
	}
	os_fclose(fp);
}

int list_search_name(int list, char *fname);
int list_search_name(int list, char *fname)
{
	char *name;
	int next;
	int ret;

	next = list_get_next(list);
	ret = 0;
	while(1)
	{
		if(next == list)
			break;
		name = list_get_name(next);
        ret = cstr_equal(name,fname);
        if(ret)
        	return ret;
    	next = list_get_next(next);
	}
	return 0;
}


void list_print_name(int list);
void list_print_name(int list)
{
	char *name;
	int next;

	next = list_get_next(list);
	while(1)
	{
		if(next == list)
			break;
		name = list_get_name(next);
        os_printf("pri: %d: %s \n", list,name);
    	next = list_get_next(next);
	}
}

void list_copy_file(int list);
void list_copy_file(int list)
{
	char *name;
	int next;

	next = list_get_next(list);
	while(1)
	{
		if(next == list)
			break;
		name = list_get_name(next);
        os_printf("list copy file: %d: %s \n", list,name);
//		cfil_copy_sour_file(name);
    	next = list_get_next(next);
	}
}

void list_clr_record(int list);
void list_clr_record(int list)
{
	char *name;
	int node;

	if(list == 0)
		return;

	while(1)
	{
    	node = list_free_list_node(list);
		if(node == list)
			break;
		name = list_get_name(node);
//        os_printf("clr: %d: %s \n", list,name);
		cbuf_free(name);
	}
	list_free_list(list);
}

/*================================================================*/
int list_add_record(int list,char *name);
int list_add_record(int list,char *name)
{
	int next;

	next = list_alloc_list_node(list);
	list_set_name(next,name);
	return 1;
}

//can't use sequence cbuf_malloc!
int list_del_name(int list,char *name);
int list_del_name(int list,char *name)
{
	char *p;
	int node;

	node = list_search_name(list, name);
	if(node==0)
		return 0;			//no found

	p = list_get_name(node);
	cbuf_free(p);
	list_free_this_node(node);
	return 1;
}

/*================================================================*/
char *list_find_head_file(int dir_list,char *h_sname,char *h_fname);
char *list_find_head_file(int dir_list,char *h_sname,char *h_fname)
{
	char *name;
	int next;
	int ret;

	next = list_get_next(dir_list);
	while(1)
	{
		if(next == dir_list)
		{
			os_alarm("Can't find %s,please check!\n",h_sname);
			list_print_name(dir_list);
			return NULL;
		}
		name = list_get_name(next);
		cstr_copy(h_fname,name);
		name_unify_path(h_fname);
		name_add_root_with_file(h_fname,h_sname);
		ret = os_find_file(h_fname);
		if(ret)
			return h_fname;
    	next = list_get_next(next);
	}
	return h_fname;
}
/*================================================================*/
/* end of dump.c */
