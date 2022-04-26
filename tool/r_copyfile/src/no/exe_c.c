/*
 * exe_c.c
 *
 *  Created on: May 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
static int exe_find_c_by_obj(void *fp,char *name);
static int exe_find_c_by_obj(void *fp,char *name)
{
	int ret;
	int i, lev;
	char *p;

    ret = cfil_cmd_two_strings(fp,"cc ",name,".c");
    if(ret >= 0)
    	return ret;

    lev = name_get_file_path_levels(name);
    if(lev == 0)
       	return 0;

    for(i=1;i<lev+1;i++)
    {
  	   p = name_goto_path_level(name, i);
        ret = cfil_cmd_two_strings(fp,"cc ",p,".c");
        if(ret >= 0)
        	return ret;
    }
   	return -1;
}

static int exe_find_cpp_by_obj(void *fp,char *name);
static int exe_find_cpp_by_obj(void *fp,char *name)
{
	int ret;
	int i, lev;
	char *p;

    ret = cfil_cmd_two_strings(fp,"c++ ",name,".c");
    if(ret >= 0)
    	return ret;

    lev = name_get_file_path_levels(name);
    if(lev == 0)
       	return 0;

    for(i=1;i<lev+1;i++)
    {
  	   p = name_goto_path_level(name, i);
        ret = cfil_cmd_two_strings(fp,"c++ ",p,".c");
        if(ret >= 0)
        	return ret;
    }
   	return -1;
}

void exe_find_c_file(void *fp,int obj_list);
void exe_find_c_file(void *fp,int obj_list)
{
	char *name;
	int node;
	int ret;

	char *line_buf, *cmd;
   	node = obj_list;
	while(1)
	{
	   	node = list_get_next(node);
		if(node == obj_list)
			break;
		name = list_get_name(node);

       ret = exe_find_c_by_obj(fp, name);
       if(ret < 0)
       {
           ret = exe_find_cpp_by_obj(fp, name);
           if(ret < 0)
           {
        	   os_printf("Con't find the obj %s \n",name);
        	   continue;
           }
       }

		line_buf = cfil_malloc_read_buf();
		cmd = cfil_read_text_line(fp, line_buf);
		line_buf = cmd;
		ccmd_make_get_sour_work_dir(fp,ret);
		ccmd_gcc_cc_find_c_file(cmd,obj_list);
	    cfil_free_read_buf(line_buf);
	}
}

/*================================================================*/
static int find_in_work_path(char *name);
static int find_in_work_path(char *name)
{	char *full;
	int ret;

	ret = os_find_file(name);
	if(ret == 1)
	{
		cfil_copy_sour_file(name);
		return 1;
	}

	full =cdir_malloc_name_buf();
	cdir_copy_work_sour_path(full);
	name_add_root_with_file(full, name);
	name_unify_file_path(full);
	ret = os_find_file(full);
	if(ret == 0)
	{
		cdir_free_name_buf(full);
		return 0;
	}
	cfil_copy_sour_file(full);
	cdir_free_name_buf(full);
	return 1;
}

static int find_in_base_path(char *name);
static int find_in_base_path(char *name)
{	char *full;
	int ret;

	ret = os_find_file(name);
	if(ret == 1)
	{
		cfil_copy_sour_file(name);
		return 1;
	}

	full =cdir_malloc_name_buf();
	cdir_copy_base_sour_path(full);
	name_add_root_with_file(full, name);
	name_unify_file_path(full);
	ret = os_find_file(full);
	if(ret == 0)
	{
		cdir_free_name_buf(full);
		return 0;
	}
	cfil_copy_sour_file(full);
	cdir_free_name_buf(full);
	return 1;
}

void exe_copy_c_file(void *fp,int obj_list);
void exe_copy_c_file(void *fp,int obj_list)
{
	char *name;
	int node;
	int ret;

	node = obj_list;
	while(1)
	{
	   	node = list_get_next(node);
		if(node == obj_list)
			break;
		name = list_get_name(node);

		name_set_file_suffix(name,"c");
		ret = find_in_work_path(name);
		if(ret == 1)
		{
			cbuf_free(name);
			list_free_this_node(node);
			node = obj_list;
			continue;
		}
		ret = find_in_base_path(name);
		if(ret == 1)
		{
			cbuf_free(name);
			list_free_this_node(node);
			node = obj_list;
			continue;
		}

		name_set_file_suffix(name,"cc");
		ret = find_in_work_path(name);
		if(ret == 1)
		{
			cbuf_free(name);
			list_free_this_node(node);
			node = obj_list;
			continue;
		}
		ret = find_in_base_path(name);
		if(ret == 1)
		{
			cbuf_free(name);
			list_free_this_node(node);
			continue;
		}

		name_set_file_suffix(name,"cpp");
		ret = find_in_work_path(name);
		if(ret == 1)
		{
			cbuf_free(name);
			list_free_this_node(node);
			node = obj_list;
			continue;
		}
		ret = find_in_base_path(name);
		if(ret == 1)
		{
			cbuf_free(name);
			list_free_this_node(node);
			node = obj_list;
			continue;
		}
		name_set_file_suffix(name,"o");		//restore for search
		continue;
	}
}


void exe_save_cc_flag(void *fp,int obj_list);
void exe_save_cc_flag(void *fp,int obj_list)
{
	int flag_list;

	char *save, *work;

	char *name;
	int node;
	int ret;

	char *line_buf, *cmd;
	flag_list = 0;

	node = obj_list;
	line_buf = cfil_malloc_read_buf();
	while(1)
	{
	   	node = list_get_next(node);
		if(node == obj_list)
			break;
		name = list_get_name(node);

		//       os_printf("save: %d: %s \n", obj_list,name);
       ret = exe_find_c_by_obj(fp, name);
       if(ret < 0)
       {
           ret = exe_find_cpp_by_obj(fp, name);
           if(ret < 0)
           {
        	   os_printf("Con't find the obj %s \n",name);
        	   continue;
           }
       }

		cmd = cfil_read_text_line(fp, line_buf);
		line_buf = cmd;
		ccmd_make_get_sour_work_dir(fp,ret);
		flag_list = ccmd_gcc_cc_get_user_inc_dir_list(cmd,obj_list,flag_list);
		flag_list = ccmd_gcc_cc_get_sys_inc_dir_list(cmd,obj_list,flag_list);
		flag_list = ccmd_gcc_cc_get_def_macro_list(cmd,obj_list,flag_list);
	}

	save = dir_malloc_name_buf();

	work = cdir_get_work_dest_name();
	cstr_copy_from_2(save,work);
	cdir_rel_to_ful(save, "/../../");
	cdir_ful_to_abs(save);
	cstr_append(save, "cflag.txt");
	list_save_name(flag_list,save);


	dir_free_name_buf(save);
	list_clr_record(flag_list);
	cfil_free_read_buf(line_buf);
}
/*================================================================*/
/* end of exe_c.c */
