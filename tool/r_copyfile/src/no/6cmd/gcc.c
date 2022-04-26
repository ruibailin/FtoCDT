/*
 * gcc.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int ccmd_is_gcc(char *cmd);
int ccmd_is_gcc(char *cmd)
{
	int ret;
	ret = cstr_cmp(cmd,"cc ");
	if(ret == 0)
		return 1;
	ret = cstr_cmp(cmd,"c++ ");
	if(ret == 0)
		return 1;
	ret = cstr_cmp(cmd,"gcc ");
	if(ret == 0)
		return 1;
	ret = cstr_cmp(cmd,"g++ ");
	if(ret == 0)
		return 1;
	return 0;
}

int ccmd_is_gcc_cc(char *cmd);
int ccmd_is_gcc_cc(char *cmd)
{
	int ret;
	ret = ccmd_is_gcc(cmd);
	if( ret == 0)
		return 0;
	ret = cstr_find(cmd ," -o ");
	if(ret < 0)
		return 0;
	ret = cstr_find(cmd ," -c ");
	if(ret > 0)
		return 1;
	ret = cstr_find(cmd ," -l");
	if(ret > 0)
		return 0;

	ret = cstr_find(cmd ,".o");
	if(ret < 0)
		return 0;

	ret = cstr_find(cmd ,".c");
	if(ret > 0)
		return 1;
	ret = cstr_find(cmd ,".cc");
	if(ret > 0)
		return 1;
	ret = cstr_find(cmd ,".cpp");
	if(ret > 0)
		return 1;
	os_printf("Special GCC CC:%s\n",cmd);
	return 0;
}

int ccmd_is_gcc_cc_ld(char *cmd);
int ccmd_is_gcc_cc_ld(char *cmd)
{
	int ret;
	ret = ccmd_is_gcc(cmd);
	if( ret == 0)
		return 0;
	ret = cstr_find(cmd ," -o ");
	if(ret < 0)
		return 0;
	ret = cstr_find(cmd ," -c ");
	if(ret > 0)
		return 0;
	ret = cstr_find(cmd ,".o");
	if(ret >= 0)
		return 0;

	ret = cstr_find(cmd ,".c");
	if(ret > 0)
		return 1;
	ret = cstr_find(cmd ,".cc");
	if(ret > 0)
		return 1;
	ret = cstr_find(cmd ,".cpp");
	if(ret > 0)
		return 1;
	os_printf("Special GCC CC LD:%s\n",cmd);
	return 0;
}

int ccmd_is_gcc_ld(char *cmd);
int ccmd_is_gcc_ld(char *cmd)
{
	int ret;
	ret = ccmd_is_gcc(cmd);
	if( ret == 0)
		return 0;
	ret = cstr_find(cmd ," -o ");
	if(ret < 0)
		return 0;
	ret = cstr_find(cmd ," -c ");
	if(ret > 0)
		return 0;
	ret = cstr_find(cmd ,".c");
	if(ret >= 0)
		return 0;


	ret = cstr_find(cmd ," -l");
	if(ret >= 0)
		return 1;
	ret = cstr_find(cmd ,".o");
	if(ret >= 0)
		return 1;
	os_printf("Special GCC LD:%s\n",cmd);
	return 0;
}

int ccmd_is_gcc_ar(char *cmd);
int ccmd_is_gcc_ar(char *cmd)
{
	int ret;
	ret = ccmd_is_gcc(cmd);
	if(ret == 0)
		return 0;
	ret = cstr_find(cmd ," -o ");
	if(ret < 0)
		return 0;
	ret = cstr_find(cmd ," -c ");
	if(ret > 0)
		return 0;
	ret = cstr_find(cmd ,".c");
	if(ret >= 0)
		return 0;

	ret = cstr_find(cmd,".o ");
	if(ret < 0)
		return 0;
	ret = cstr_find(cmd,".a ");
	if(ret >= 0)
		return 1;	// lib
	ret = cstr_find(cmd,".so ");
	if(ret >= 0)
		return 1;	// lib
	os_printf("Special GCC AR:%s\n",cmd);
	return 0;
}
/*================================================================*/
int ccmd_find_gcc_cc_line(void *fp,int start_line);
int ccmd_find_gcc_cc_line(void *fp,int start_line)
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
		line_num++;
		ret = ccmd_is_gcc_cc(line_buf);
		if(ret)
		{
			cfil_free_read_buf(line_buf);
			return line_num;
		}
	}
}

int ccmd_find_gcc_ld_line(void *fp,int start_line);
int ccmd_find_gcc_ld_line(void *fp,int start_line)
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

		ret = ccmd_is_gcc_ld(line_buf);
		if(ret)
		{
			cfil_free_read_buf(line_buf);
			return line_num;
		}
		ret = ccmd_is_gcc_ar(line_buf);
		if(ret)
		{
			cfil_free_read_buf(line_buf);
			return line_num;
		}
		line_num++;
	}
}

/*================================================================*/

void ccmd_gcc_cc(char *cmd,int obj_list);
void ccmd_gcc_cc(char *cmd,int obj_list)
{

}


void ccmd_gcc_ld(char *cmd);
void ccmd_gcc_ld(char *cmd)
{

}

void ccmd_gcc_ar(char *cmd);
void ccmd_gcc_ar(char *cmd)
{

}


void ccmd_gcc(char *cmd,int obj_list);
void ccmd_gcc(char *cmd,int obj_list)
{
	int ret;

	ret = ccmd_is_gcc_cc(cmd);
	if(ret)
	{
		ccmd_gcc_cc(cmd,obj_list);
		return;
	}

	ret = ccmd_is_gcc_ld(cmd);
	if(ret)
	{
		ccmd_gcc_ld(cmd);
		return;
	}

	ret = ccmd_is_gcc_ar(cmd);
	if(ret)
	{
		ccmd_gcc_ar(cmd);
		return;
	}

	os_printf("Special GCC cmd:%s\n",cmd);
	return;
}

/*================================================================*/


/*================================================================*/
/* end of gcc.c */
