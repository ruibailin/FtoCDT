/*
 * set.c
 *
 *  Created on: May 13, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
#include "goto.h"
#include "copy.h"
void name_set_file_path(char *full, char *path);
void name_set_file_path(char *full, char *path)
{
	char *p;
	char name[MAX_FILE_LEN];

	name_copy_file_name(full,name);
	p = full;
	cstr_copy_to_1(p,path);
	cstr_append(p,name);
}

void name_set_file_name(char *full, char *name);
void name_set_file_name(char *full, char *name)
{
	char *p;
	p = name_goto_file_prefix(full);
	cstr_copy_to_1(p,name);
}

void name_set_file_prefix(char *full, char *pre);
void name_set_file_prefix(char *full, char *pre)
{
	char *p;
	char suf[MAX_FILE_SURFIX_LEN];

	name_copy_file_suffix(full,suf);
	p = name_goto_file_prefix(full);
	cstr_copy_to_1(p,pre);
	if(os_strlen(suf)==0)
		return;
	cstr_append(p,".");
	cstr_append(p,suf);
}


void name_set_file_suffix(char *full, char *suf);
void name_set_file_suffix(char *full, char *suf)
{
	char *p;

	p = name_goto_file_suffix(full);
	cstr_copy_to_1(p,suf);
}

/*================================================================*/
/* end of set.c */
