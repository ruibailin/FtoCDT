/*
 * gcc_ld.c
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "gcc.h"
#include "gcc_cc.h"
/*================================================================*/
char *ccmd_gcc_ld_get_project_name(char *cmd,char *name);
char *ccmd_gcc_ld_get_project_name(char *cmd,char *name)
{
	int ret1,ret2;
	char *p;

	ret1 = ccmd_is_gcc_cc(cmd);
	ret2 = ccmd_is_gcc_ld(cmd);
	if((ret1|ret2)==0)
		return NULL;				//no project name
	ret1 = cstr_find(cmd, " -o ");
	if(ret1 < 0)
	{
		os_alarm("No project name:%s\n",cmd);
		return NULL;
	}
	p = cmd + ret1 +os_strlen(" -o ");
	p = char_goto_first_no_c(p,' ');
	char_copy_no_c_string(name, p,' ');

	p = name_goto_file_name(name);
	cstr_copy_to_1(name,p);
	return name;
}

int ccmd_gcc_ld_get_dest_work_dir(char *cmd);
int ccmd_gcc_ld_get_dest_work_dir(char *cmd)
{
	char *exe_name,*buf;
	int ret;

	exe_name = dir_malloc_name_buf();

	buf = ccmd_gcc_ld_get_project_name(cmd,exe_name);

	if(buf == NULL)
	{
		ret = 0;
	}
	else
	{
		cdir_make_dest_work_dir(exe_name);
		ret = 1;
	}
	dir_free_name_buf(exe_name);
	return ret;
}

int ccmd_gcc_ld_get_obj_list(char *cmd);
int ccmd_gcc_ld_get_obj_list(char *cmd)
{
	int obj_list;
	char *obj_file;
	char *p;
	int ret;
	int size;

	obj_list = list_new_list();

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;

		ret = cstr_find(p,".o ");
		if(ret < 0)
			break;
		p += ret;
		p = char_goto_last_c(p,' ');
		p = char_goto_first_no_c(p,' ');
		size = char_find_no_c_len(p,' ');

		obj_file = cbuf_malloc(size+3);		//.o -->.cpp or .cc or .c
		p = char_copy_no_c_string(obj_file, p,' ');
		list_add_record(obj_list,obj_file);
	}

	return obj_list;
}


int ccmd_gcc_ld_get_sys_lib_file_list(char *cmd,int lib_file_list);
int ccmd_gcc_ld_get_sys_lib_file_list(char *cmd,int lib_file_list)
{

	char *lib_file;
	char *p;
	int ret;
	int size;

	if(lib_file_list == 0)
	lib_file_list = list_new_list();

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;

		ret = cstr_cmp(p,"-l");
		if(ret != 0)
			continue;
		p += os_strlen("-l");
		size = char_find_no_c_len(p,' ');
		lib_file = cbuf_malloc(size);
		p = char_copy_no_c_string(lib_file, p,' ');

		ret = list_search_name(lib_file_list, lib_file);
		if(ret != 0)
		{
			cbuf_free(lib_file);
			continue;
		}
		list_add_record(lib_file_list,lib_file);
	}

	return lib_file_list;
}

int ccmd_gcc_ld_get_lib_file_list(char *cmd,int lib_file_list);
int ccmd_gcc_ld_get_lib_file_list(char *cmd,int lib_file_list)
{

	char *lib_file;
	char *p;
	int ret;
	int size;

	if(lib_file_list == 0)
	lib_file_list = list_new_list();

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;

		ret = cstr_cmp(p,"-l");
		if(ret != 0)
			continue;
		p += os_strlen("-l");
		size = char_find_no_c_len(p,' ');
		lib_file = cbuf_malloc(size);
		p = char_copy_no_c_string(lib_file, p,' ');

		ret = list_search_name(lib_file_list, lib_file);
		if(ret != 0)
		{
			cbuf_free(lib_file);
			continue;
		}
		list_add_record(lib_file_list,lib_file);
	}

	return lib_file_list;
}

int ccmd_gcc_ld_get_lib_dir_list(char *cmd,int lib_dir_list);
int ccmd_gcc_ld_get_lib_dir_list(char *cmd,int lib_dir_list)
{

	char *lib_dir;
	char *p;
	int ret;
	int size;

	if( lib_dir_list == 0)
		lib_dir_list = list_new_list();

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;

		ret = cstr_cmp(p,"-L");
		if(ret != 0)
			continue;

		p += os_strlen("-L");
		size = char_find_no_c_len(p,' ');
		lib_dir = cbuf_malloc(size);
		p = char_copy_no_c_string(lib_dir, p,' ');
		ret = list_search_name(lib_dir_list, lib_dir);
		if(ret != 0)
		{
			cbuf_free(lib_dir);
			continue;
		}
		list_add_record(lib_dir_list,lib_dir);
	}

	return lib_dir_list;
}
/*================================================================*/
/* end of gcc_ld.c */
