/*
 * ar.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int ccmd_is_ar(char *cmd);
int ccmd_is_ar(char *cmd)
{
	int ret;
	ret = cstr_cmp(cmd,"ar ");
	if(ret != 0)
		return 0;
	ret = cstr_find(cmd,".o ");
	if(ret >= 0)
		return 1;
	ret = cstr_find(cmd,".a ");
	if(ret >= 0)
		return 1;	// lib
	ret = cstr_find(cmd,".so ");
	if(ret >= 0)
		return 1;	// lib
	os_printf("Special AR:%s\n",cmd);
	return 0;
}

void ccmd_ar(char *cmd);
void ccmd_ar(char *cmd)
{

}

void ccmd_attr(char *cmd);
void ccmd_attr(char *cmd)
{

}
/*================================================================*/
int ccmd_find_ar_line(void *fp,int start_line);
int ccmd_find_ar_line(void *fp,int start_line)
{
	char *line_buf;
	int line_num;
	int ret;

	cfil_goto_text_line(fp,start_line);
	line_num = start_line;
	line_buf = cfil_malloc_read_buf();
	while(1)
	{
		line_buf = cfil_read_text_line(fp, line_buf);
		if(line_buf == NULL)
		{
			line_num = -1;		//no found
			return line_num;
		}

		ret = ccmd_is_ar(line_buf);
		if(ret)
		{
			cfil_free_read_buf(line_buf);
			return line_num;
		}
		line_num++;
	}
}


char *ccmd_ar_get_project_name(char *cmd,char *name);
char *ccmd_ar_get_project_name(char *cmd,char *name)
{
	int ret1,pos;
	char *p;

	ret1 = ccmd_is_ar(cmd);
	if((ret1)==0)
		return NULL;				//no project name
	pos = cstr_find(cmd, ".a ");
	if(ret1 < 0)
	{
		os_alarm("No project name:%s\n",cmd);
		return NULL;
	}
	p = cmd;
	p += pos;
	p = char_goto_last_c(p,' ');
	p = char_goto_first_no_c(p,' ');

	char_copy_no_c_string(name, p,' ');

	p = name_goto_file_name(name);
	cstr_copy_to_1(name,p);

	return name;
}

int ccmd_ar_get_dest_work_dir(char *cmd);
int ccmd_ar_get_dest_work_dir(char *cmd)
{
	char *exe_name,*buf;
	int ret;

	exe_name = dir_malloc_name_buf();

	buf = ccmd_ar_get_project_name(cmd,exe_name);

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
/*================================================================*/
/* end of ar.c */
