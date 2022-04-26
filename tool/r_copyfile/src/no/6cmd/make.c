/*
 * make.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
void ccmd_make_dir(char *cmd);
void ccmd_make_dir(char *cmd)
{
	char *p;
	int ret;
	char *tmp_dir;

	ret = cstr_find(cmd," Leaving directory ");
	if(ret >= 0)
	{
		p = cmd;
		p += ret;
		p += os_strlen(" Leaving directory ");
		p = char_goto_first_c(p, '\'');
		p = char_goto_first_no_c(p, '\'');
		tmp_dir = dir_malloc_name_buf();
		p = char_copy_no_c_string(tmp_dir, p,'\'');
		cdir_ful_to_abs(tmp_dir);
		cstr_append(tmp_dir,"../");
		cdir_ful_to_abs(tmp_dir);
		cdir_set_work_sour_name(tmp_dir);
		dir_free_name_buf(tmp_dir);
		return;
	}
	ret = cstr_find(cmd," Entering directory ");
	if(ret < 0)
		return;
	p = cmd;
	p += ret;
	p += os_strlen(" Entering directory ");
	p = char_goto_first_c(p, '\'');
	p = char_goto_first_no_c(p, '\'');
	tmp_dir = dir_malloc_name_buf();
	p = char_copy_no_c_string(tmp_dir, p,'\'');
	cdir_ful_to_abs(tmp_dir);
	cdir_set_work_sour_name(tmp_dir);
	dir_free_name_buf(tmp_dir);
}

void ccmd_make_sub_dir(char *cmd);
void ccmd_make_sub_dir(char *cmd)
{

}

void ccmd_mv(char *cmd);
void ccmd_mv(char *cmd)
{

}

/*================================================================*/
void ccmd_make_get_sour_work_dir(char *fp,int line);
void ccmd_make_get_sour_work_dir(char *fp,int line)
{
	char *line_buf,*ptr;
	int i;

	cfil_goto_text_line(fp,0);

	line_buf = cfil_malloc_read_buf();
	i=0;
	while(1)
	{
		if(i == line)
		{
			cfil_free_read_buf(line_buf);
			break;
		}
		ptr = cfil_read_text_line(fp, line_buf);
		line_buf = ptr;
		if(ptr == NULL)
			break;
		ccmd_make_dir(line_buf);
		i++;
	}
}


/*================================================================*/
/* end of make.c */
