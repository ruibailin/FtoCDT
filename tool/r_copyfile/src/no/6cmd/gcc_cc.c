/*
 * gcc_cc.c
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int ccmd_gcc_cc_find_o_file(char *cmd,int obj_list);
int ccmd_gcc_cc_find_o_file(char *cmd,int obj_list)
{
	char *obj_file;
	char *p;
	int pos;
	int size;
	int ret;

	p = cmd;
	pos = cstr_find(p,".o ");
	if(pos < 0)
		return 0;	//no obj
	p += pos;
	p = char_goto_last_c(p,' ');
	p = char_goto_first_no_c(p,' ');
	size = char_find_no_c_len(p,' ');

	obj_file = cbuf_malloc(size+3);		//.o -->.cpp or .cc or .c
	p = char_copy_no_c_string(obj_file, p,' ');
	ret = list_search_name(obj_list, obj_file);
	cbuf_free(obj_file);
	if(ret == 0)
		return 0;
	else
		return 1;
}


int ccmd_gcc_cc_get_user_inc_dir_list(char *cmd,int obj_list,int inc_dir_list);
int ccmd_gcc_cc_get_user_inc_dir_list(char *cmd,int obj_list,int inc_dir_list)
{
	char *inc_dir_name,*tmp_name;
	char *p;
	int ret;
	int size;

	if(inc_dir_list == 0)
		inc_dir_list = list_new_list();


	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;
		ret = cstr_cmp(p,"-I");
		if(ret != 0)
			continue;
		p += os_strlen("-I");
		size = char_find_no_c_len(p,' ');

		inc_dir_name = cbuf_malloc(size + cdir_get_work_sour_len());

		tmp_name = cbuf_malloc(size);
		p = char_copy_no_c_string(tmp_name, p,' ');
		cdir_ful_to_abs(tmp_name);
		ret = cdir_is_user_dir(tmp_name);
		if(ret == 0)
		{
			cbuf_free(tmp_name);
			cbuf_free(inc_dir_name);
			continue;
		}
		cdir_make_sour_dir_fname(inc_dir_name, tmp_name);
		cbuf_free(tmp_name);

		ret = list_search_name(inc_dir_list, inc_dir_name);
		if(ret != 0)
		{
			cbuf_free(inc_dir_name);
			continue;
		}
		list_add_record(inc_dir_list,inc_dir_name);
	}

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;
		ret = cstr_cmp(p,"-iquote ");
		if(ret != 0)
			continue;
		p += os_strlen("-iquote ");
		size = char_find_no_c_len(p,' ');

		inc_dir_name = cbuf_malloc(size + cdir_get_work_sour_len());

		tmp_name = cbuf_malloc(size);
		p = char_copy_no_c_string(tmp_name, p,' ');
		cdir_ful_to_abs(tmp_name);
		ret = cdir_is_user_dir(tmp_name);
		if(ret == 0)
		{
			cbuf_free(tmp_name);
			cbuf_free(inc_dir_name);
			continue;
		}
		cdir_make_sour_dir_fname(inc_dir_name, tmp_name);
		cbuf_free(tmp_name);

		ret = list_search_name(inc_dir_list, inc_dir_name);
		if(ret != 0)
		{
			cbuf_free(inc_dir_name);
			continue;
		}
		list_add_record(inc_dir_list,inc_dir_name);
	}
	return inc_dir_list;
}

int ccmd_gcc_cc_get_sys_inc_dir_list(char *cmd,int obj_list,int inc_dir_list);
int ccmd_gcc_cc_get_sys_inc_dir_list(char *cmd,int obj_list,int inc_dir_list)
{
	char *inc_dir_name,*tmp_name;
	char *p;
	int ret;
	int size;

	if(inc_dir_list == 0)
		inc_dir_list = list_new_list();

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;
		ret = cstr_cmp(p,"-I");
		if(ret != 0)
			continue;
		p += os_strlen("-I");
		size = char_find_no_c_len(p,' ');

		inc_dir_name = cbuf_malloc(size + cdir_get_work_sour_len());

		tmp_name = cbuf_malloc(size+4);
		p = char_copy_no_c_string(tmp_name, p,' ');
		cdir_ful_to_abs(tmp_name);
		ret = cdir_is_user_dir(tmp_name);
		if(ret != 0)
		{
			cbuf_free(tmp_name);
			cbuf_free(inc_dir_name);
			continue;
		}
		cstr_copy(inc_dir_name, tmp_name);
		cbuf_free(tmp_name);

		ret = list_search_name(inc_dir_list, inc_dir_name);
		if(ret != 0)
		{
			cbuf_free(inc_dir_name);
			continue;
		}
		list_add_record(inc_dir_list,inc_dir_name);
	}

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;
		ret = cstr_cmp(p,"-iquote ");
		if(ret != 0)
			continue;
		p += os_strlen("-iquote ");
		size = char_find_no_c_len(p,' ');

		inc_dir_name = cbuf_malloc(size + cdir_get_work_sour_len());

		tmp_name = cbuf_malloc(size+4);
		p = char_copy_no_c_string(tmp_name, p,' ');
		cdir_ful_to_abs(tmp_name);
		ret = cdir_is_user_dir(tmp_name);
		if(ret != 0)
		{
			cbuf_free(tmp_name);
			cbuf_free(inc_dir_name);
			continue;
		}
		cstr_copy(inc_dir_name, tmp_name);
		cbuf_free(tmp_name);

		ret = list_search_name(inc_dir_list, inc_dir_name);
		if(ret != 0)
		{
			cbuf_free(inc_dir_name);
			continue;
		}
		list_add_record(inc_dir_list,inc_dir_name);
	}
	return inc_dir_list;
}


int ccmd_gcc_cc_get_def_macro_list(char *cmd,int obj_list,int def_list);
int ccmd_gcc_cc_get_def_macro_list(char *cmd,int obj_list,int def_list)
{
	char *def_macro;
	char *p;
	int ret;
	int size;

	if(def_list == 0)
		def_list = list_new_list();

	p = cmd;
	while(1)
	{
		p = char_goto_first_c(p, ' ');
		if(p[0] == '\0')
			break;
		p = char_goto_first_no_c(p, ' ');
		if(p[0] == '\0')
			break;
		ret = cstr_cmp(p,"-D");
		if(ret != 0)
			continue;
		p += os_strlen("-D");
		size = char_find_no_c_len(p,' ');

		def_macro = cbuf_malloc(size);
		p = char_copy_no_c_string(def_macro, p,' ');
		ret = list_search_name(def_list, def_macro);
		if(ret != 0)
		{
			cbuf_free(def_macro);
			continue;
		}
		list_add_record(def_list,def_macro);
	}

	return def_list;
}


int ccmd_gcc_cc_find_c_file(char *cmd,int obj_list);
int ccmd_gcc_cc_find_c_file(char *cmd,int obj_list)
{
	char *cs_fname, *cs_sname;
	char *cd_fname;
	char *p;
	int pos;
	int size;

	p = cmd;
	pos = cstr_find(p,".c");
	if(pos < 0)
	{
		os_alarm("Strange CC Line, %s\n", p);
		return 0;	//no c file?
	}
	p += pos;
	p = char_goto_last_c(p,' ');
	p = char_goto_first_no_c(p,' ');
	size = char_find_no_c_len(p,' ');

	cs_sname = cbuf_malloc(size+4);
	cs_fname = cbuf_malloc(size+4+cdir_get_work_sour_len());
	cd_fname = cbuf_malloc(size+4+cdir_get_work_dest_len() \
			                     +cdir_get_work_sour_len() \
								 -cdir_get_base_sour_len());


	p = char_copy_no_c_string(cs_sname, p,' ');

	pos = char_find(cs_sname,'\'');
	if(pos >= 0)
	{
		char_delete_all_c(cs_sname,'\'');
	}
	cdir_make_sour_file_fname(cs_fname, cs_sname);
	cdir_change_sour_to_dest(cs_fname,cd_fname);

	cdir_make_abs_dir(cd_fname);
	cfil_copy_text_file(cs_fname,cd_fname);

	cbuf_free(cd_fname);
	cbuf_free(cs_fname);
	cbuf_free(cs_sname);
	return 1;
}

int ccmd_gcc_cc_find_d_file(char *cmd, int obj_list,char *d_fname);
int ccmd_gcc_cc_find_d_file(char *cmd, int obj_list,char *d_fname)
{
	char *d_sname;
	char *p;
	int pos;
	int size;

	p = cmd;
	pos = cstr_find(p,".d ");
	if(pos < 0)
	{
		os_alarm("No .d file or other file name, %s\n", p);
		return 0;	//no d file?
	}
	p += pos;
	p = char_goto_last_c(p,' ');
	p = char_goto_first_no_c(p,' ');
	size = char_find_no_c_len(p,' ');

	d_sname = cbuf_malloc(size+4);
	p = char_copy_no_c_string(d_sname, p,' ');
	cdir_make_sour_file_fname(d_fname, d_sname);
	cbuf_free(d_sname);
	return 1;
}

/*================================================================*/
/* end of gcc_cc.c */
