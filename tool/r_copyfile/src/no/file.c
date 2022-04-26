/*
 * file.c
 *
 *  Created on: May 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "exe_c.h"
#include "exe_h.h"
/*================================================================*/
static void save_obj_list(int obj_list);
static void save_obj_list(int obj_list)
{
	char *save, *work;

	save = dir_malloc_name_buf();
	work = cdir_get_work_dest_name();
	cstr_copy_from_2(save,work);
	cdir_rel_to_ful(save, "/../../");
	cdir_ful_to_abs(save);
	cstr_append(save, "obj_list.txt");
	list_save_name(obj_list,save);
	dir_free_name_buf(save);
}

static void save_ld_flag(char *cmd);
static void save_ld_flag(char *cmd)
{
	int lib_list;
	char *save , *work;
	lib_list = 0;
	lib_list = ccmd_gcc_ld_get_lib_dir_list(cmd,lib_list);
	lib_list = ccmd_gcc_ld_get_lib_file_list(cmd,lib_list);


	save = dir_malloc_name_buf();

	work = cdir_get_work_dest_name();
	cstr_copy_from_2(save,work);
	cdir_rel_to_ful(save, "/../../");
	cdir_ful_to_abs(save);
	cstr_append(save, "lib.txt");
	list_save_name(lib_list,save);

	dir_free_name_buf(save);
	list_clr_record(lib_list);

}

/*================================================================*/
static int parse_n_exe(void *fp, int start);
static int parse_n_exe(void *fp, int start)
{
	int obj_list;
	char *cmd,*buf;

	int end;
	end = ccmd_find_gcc_ld_line(fp, start);
	if(end < start)
		return end;

	cfil_goto_text_line(fp,end);
	buf = cfil_malloc_read_buf();
	cmd = cfil_read_text_line(fp, buf);
	buf = cmd;

	ccmd_gcc_ld_get_dest_work_dir(cmd);
	ccmd_make_get_sour_work_dir(fp,end);
	save_ld_flag(cmd);

	obj_list = ccmd_gcc_ld_get_obj_list(cmd);
	save_obj_list(obj_list);
	exe_save_cc_flag(fp,obj_list);

	exe_copy_c_file(fp,obj_list);
	exe_find_c_file(fp,obj_list);
	list_clr_record(obj_list);

	obj_list = ccmd_gcc_ld_get_obj_list(cmd);
	exe_copy_d_file(fp,obj_list);
	exe_find_d_file(fp,obj_list);
	list_clr_record(obj_list);

	cfil_free_read_buf(buf);
	return end;
}


static int parse_n_lib(void *fp, int start);
static int parse_n_lib(void *fp, int start)
{
	int obj_list;
	char *cmd,*buf;

	int end;
	end = ccmd_find_ar_line(fp, start);
	if(end < start)
		return end;

	cfil_goto_text_line(fp,end);
	buf = cfil_malloc_read_buf();
	cmd = cfil_read_text_line(fp, buf);
	buf = cmd;

	ccmd_ar_get_dest_work_dir(cmd);
	ccmd_make_get_sour_work_dir(fp,end);
	save_ld_flag(cmd);

	obj_list = ccmd_gcc_ld_get_obj_list(cmd);
	save_obj_list(obj_list);
	exe_save_cc_flag(fp,obj_list);

	exe_copy_c_file(fp,obj_list);
	exe_find_c_file(fp,obj_list);
	list_clr_record(obj_list);

	obj_list = ccmd_gcc_ld_get_obj_list(cmd);
	exe_copy_d_file(fp,obj_list);
	exe_find_d_file(fp,obj_list);
	list_clr_record(obj_list);

	cfil_free_read_buf(buf);
	return end;
}

//make -n >output.txt
void parse_n_file(char *file_name);
void parse_n_file(char *file_name)
{
	void *fp;

	int start,end;

	fp = os_fopen(file_name,"r");

	if(fp == NULL)
	{
		os_print("no make output file:%s\n",file_name);
		return;
	}

	start = 0;
	while(1)
	{
		end = parse_n_lib(fp,start);
		if(end < (start+1))
			break;
		start = end+1;
	}

	start = 0;
	while(1)
	{
		end = parse_n_exe(fp,start);
		if(end < (start+1))
			break;
		start = end+1;
	}

	os_fclose(fp);
	return;
}

/*================================================================*/
/* end of file.c */
