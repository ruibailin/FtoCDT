/*
 * line.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "6cmd.h"
/*================================================================*/
static void goto_a_cmd(char *line);
static void goto_a_cmd(char *line)
{
	int ret;
	ret = cstr_cmp(line,"ar ");
	if(ret == 0)
	{
		ccmd_ar(line);
		return;
	}
	ret = cstr_cmp(line,"AR ");
	if(ret == 0)
	{
		ccmd_ar(line);
		return;
	}
	ret = cstr_cmp(line,"a ");
	if(ret == 0)
	{
		ccmd_attr(line);
		return;
	}
	os_printf("a: %s\n",line);
}

static void goto_c_cmd(char *line);
static void goto_c_cmd(char *line)
{
	int ret;
	ret = cstr_cmp(line,"cat ");
	if(ret == 0)
	{
		ccmd_cat(line);
		return;
	}
	ret = cstr_cmp(line,"cp ");
	if(ret == 0)
	{
		ccmd_cp(line);
		return;
	}
	os_printf("c: %s\n",line);
}

static void goto_g_cmd(char *line,int obj_list);
static void goto_g_cmd(char *line,int obj_list)
{
	int ret;
	ret = cstr_cmp(line,"gcc ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
	ret = cstr_cmp(line,"g++ ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
	ret = cstr_cmp(line,"GCC ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}

	ret = cstr_cmp(line,"G++ ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
	os_printf("g: %s\n",line);
}


static void goto_m_cmd(char *line);
static void goto_m_cmd(char *line)
{
	int ret;

	ret = cstr_cmp(line,"make[");
	if(ret == 0)
	{
		ccmd_make_dir(line);
		return;
	}
	ret = cstr_cmp(line,"make  all-recursive");
	if(ret == 0)
	{
		return;
	}
	ret = cstr_cmp(line,"Making all in ");
	if(ret == 0)
	{
		ccmd_make_sub_dir(line);
		return;
	}
	ret = cstr_cmp(line,"mv -f ");
	if(ret == 0)
	{
		ccmd_mv(line);
		return;
	}
	os_printf("m: %s\n",line);
}

static void goto_r_cmd(char *line);
static void goto_r_cmd(char *line)
{
	int ret;
	ret = cstr_cmp(line,"ranlib ");
	if(ret == 0)
	{
		ccmd_ranlib(line);
		return;
	}
	ret = cstr_cmp(line,"rm ");
	if(ret == 0)
	{
		ccmd_rm(line);
		return;
	}
	os_printf("r: %s\n",line);
}

static void goto_shell_cmd(char *line,int obj_list);
static void goto_shell_cmd(char *line,int obj_list)
{
	int ret;

	ret = cstr_cmp(line,"/bin/sh -e ");
	if(ret == 0)
	{
		ccmd_shell(line);
		return;
	}
	ret = cstr_cmp(line,"/usr/bin/g++ ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
	ret = cstr_cmp(line,"/usr/bin/gcc ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
	os_printf("shell: %s\n",line);
}


static void goto_micro_cmd(char *line,int obj_list);
static void goto_micro_cmd(char *line,int obj_list)
{
	int ret;

	ret = cstr_cmp(line,"$(CC) ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}

	ret = cstr_cmp(line,"$(GCC) ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}


	ret = cstr_cmp(line,"$(G++) ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
	ret = cstr_cmp(line,"$(CPP) ");
	if(ret == 0)
	{
		ccmd_gcc(line,obj_list);
		return;
	}
}
/*================================================================*/
void cmd_parse_line(char *line,int obj_list);
void cmd_parse_line(char *line,int obj_list)
{
	char c;
	c = line[0];
	switch (c)
	{
	case 'a':
	case 'A':
		goto_a_cmd(line);
		break;
	case 'c':
	case 'C':
		goto_c_cmd(line);
		break;
	case 'g':
	case 'G':
		goto_g_cmd(line,obj_list);
		break;
	case 'm':
	case 'M':
		goto_m_cmd(line);
		break;
	case 'r':
	case 'R':
		goto_r_cmd(line);
		break;
	case '/':
		goto_shell_cmd(line,obj_list);
		break;
	case '(':
		goto_shell_cmd(line,obj_list);
		break;
	case '.':
		c = line[1];
		if(c == '/')
			goto_shell_cmd(line,obj_list);
		else
			os_printf(".: %s\n",line);
		break;
	case '$':
		goto_micro_cmd(line,obj_list);
		break;
	default:
		os_printf("other cmd: %s\n",line);
		break;
	}
}

/*================================================================*/
/* end of line.c */
