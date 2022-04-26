/*
 * exe_h.c
 *
 *  Created on: May 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
static void check_h_name(char *name);
static void check_h_name(char *name)
{
	char *p,c;
	char *sn, *dn;
	int ret;

	p = name_goto_file_suffix(name);
	c = p[0];
	if(c != 'c')
	{
		cfil_copy_sour_file(name);
		return;
	}

	sn = name;
	dn = cdir_malloc_name_buf();
	cdir_change_sour_to_dest(sn,dn);
	cdir_make_abs_dir(dn);
	name_set_file_suffix(dn,"inc");
//	os_printf("change name to %s from %s\n",dn,sn);
	ret = os_find_file(dn);
	if( ret == 0)
		ret = cfil_copy_text_file(sn,dn);
//	else
//		os_printf("%s exists, no replace\n",dn);
	cdir_free_name_buf(dn);
}
static void parse_d_file_line(char *line_buf);
static void parse_d_file_line(char *line_buf)
{
	char c;
	char *h_name, *f_name;
	int ret;

	c = line_buf[0];

	if(c == ' ')
		return;
	if(c == '\0')
		return;
	if(c == '\n')
		return;

	h_name=cdir_malloc_name_buf();
	char_copy_no_c_string(h_name, line_buf, ':');
	os_trim(h_name);
	ret = cdir_is_sour_file(h_name);
	if(ret == 1)
	{
		name_unify_file_path(h_name);
		check_h_name(h_name);
		cdir_free_name_buf(h_name);
		return;
	}
	ret = cdir_is_user_dir(h_name);
	if(ret == 0)
	{								//system include file, skip
		cdir_free_name_buf(h_name);
		return;
	}
	//relative path, need to add work source path.
	f_name = cdir_malloc_name_buf();
	cdir_copy_work_sour_path(f_name);
	name_add_root_with_file(f_name, h_name);
	name_unify_file_path(f_name);
	ret = os_find_file(f_name);
	if(ret == 0)
	{
		os_alarm("wrong way to find d file:%s \n",f_name);
	}
	check_h_name(f_name);
	cdir_free_name_buf(f_name);
	cdir_free_name_buf(h_name);
}

static void d_set_work_path(char *file_name,char *line_buf);
static void d_set_work_path(char *file_name,char *line_buf)
{
	char *full;
	char *rel;
	int len1;
	full=cdir_malloc_name_buf();
	rel=cdir_malloc_name_buf();
	char_copy_no_c_string(rel, line_buf, ':');  //io/task.o
	os_trim(rel);
	name_set_file_suffix(rel,"d");		//io/task.d
	cstr_copy_to_1(full,file_name);
	len1=cstr_find(full,rel);		//home/steve/code/code/qemu/4_2_0/qemu-4.2.0/io/task.d,
	if(len1<0)
	{
		cdir_free_name_buf(rel);
		cdir_free_name_buf(full);
		os_alarm("wrong d file format: %s\n",file_name);
		return;
	}
	full[len1]='\0';				//home/steve/code/code/qemu/4_2_0/qemu-4.2.0/
	name_unify_path(full);			//in case of "/io/task.d, then will lose '/'
	cdir_set_work_sour_name(full);
	cdir_free_name_buf(rel);
	cdir_free_name_buf(full);
}

static void parse_d_file_c(char *file_name);
static void parse_d_file_c(char *file_name)
{
	void *fp;
	char *line_buf;

	fp = os_fopen(file_name,"r");

	if(fp == NULL)
	{
		os_print("no dep file:%s\n",file_name);
		return;
	}

	line_buf = cfil_malloc_read_buf();
	line_buf = cfil_read_text_line(fp, line_buf);	//skip first line
	d_set_work_path(file_name,line_buf);
	if(line_buf == NULL)
		return;
	cfil_free_read_buf(line_buf);

	line_buf = cfil_malloc_read_buf();
	while(1)
	{
		line_buf = cfil_read_text_line(fp, line_buf);
		if(line_buf == NULL)
		{
			os_fclose(fp);
			return;
		}
		parse_d_file_line(line_buf);
	}
	cfil_free_read_buf(line_buf);
	os_fclose(fp);
	return;
}

static void parse_d_file(char *file_name);
static void parse_d_file(char *file_name)
{
	char *save;
	save = cdir_malloc_name_buf();
	cdir_copy_work_sour_path(save);
	parse_d_file_c(file_name);
	cdir_set_work_sour_name(save);
	cdir_free_name_buf(save);
}
/*================================================================*/
static int find_d_by_c_obj(void *fp,char *name);
static int find_d_by_c_obj(void *fp,char *name)
{
	int ret;
	int i, lev;
	char *p;

    ret = cfil_cmd_two_strings(fp,"cc ",name,".d");
    if(ret >= 0)
    	return ret;

    lev = name_get_file_path_levels(name);
    if(lev == 0)
       	return 0;

    for(i=1;i<lev+1;i++)
    {
  	   p = name_goto_path_level(name, i);
        ret = cfil_cmd_two_strings(fp,"cc ",p,".d");
        if(ret >= 0)
        	return ret;
    }
   	return -1;
}

static int find_d_by_cpp_obj(void *fp,char *name);
static int find_d_by_cpp_obj(void *fp,char *name)
{
	int ret;
	int i, lev;
	char *p;

    ret = cfil_cmd_two_strings(fp,"c++ ",name,".d");
    if(ret >= 0)
    	return ret;

    lev = name_get_file_path_levels(name);
    if(lev == 0)
       	return 0;

    for(i=1;i<lev+1;i++)
    {
  	   p = name_goto_path_level(name, i);
        ret = cfil_cmd_two_strings(fp,"c++ ",p,".d");
        if(ret >= 0)
        	return ret;
    }
   	return -1;
}

void exe_find_d_file(void *fp,int obj_list);
void exe_find_d_file(void *fp,int obj_list)
{
	char *name;
	int node;
	int ret;

	char *line_buf, *cmd , *d_file;
   	node = obj_list;
	while(1)
	{
	   	node = list_get_next(node);
		if(node == obj_list)
			break;
		name = list_get_name(node);

       ret = find_d_by_c_obj(fp, name);
       if(ret < 0)
       {
           ret = find_d_by_cpp_obj(fp, name);
           if(ret < 0)
           {
        	   os_printf("Con't find the obj %s \n",name);
        	   continue;
           }
       }

		line_buf = cfil_malloc_read_buf();
		cmd = cfil_read_text_line(fp, line_buf);
		line_buf = cmd;

		d_file = cdir_malloc_name_buf();
		ccmd_gcc_cc_find_d_file(cmd,obj_list,d_file);
		parse_d_file(d_file);

		cdir_free_name_buf(d_file);
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
		parse_d_file(name);
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
	parse_d_file(full);
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
		parse_d_file(name);
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
	parse_d_file(full);
	cdir_free_name_buf(full);
	return 1;
}

/*================================================================*/
void exe_copy_d_file(void *fp,int obj_list);
void exe_copy_d_file(void *fp,int obj_list)
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

		name_set_file_suffix(name,"d");
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

		name_set_file_suffix(name,"Po");  //other name
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

		name_set_file_suffix(name,"Tpo");
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
/*================================================================*/
/* end of exe_h.c */
