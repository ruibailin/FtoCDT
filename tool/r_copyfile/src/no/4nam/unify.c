/*
 * unify.c
 *
 *  Created on: May 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
/*================================================================*/
static void shrink_string(char *str, int pos, int delta);
static void shrink_string(char *str, int pos, int delta)
{
	int i;
	char c;

	i=pos;
	while(1)
	{
		c = str[i+delta];
		str[i] = c;
		if(c == '\0')
			break;
		i++;
	}
}

static int delete_one_slash_dot(char *dir);
static int delete_one_slash_dot(char *dir)
{
	int len;
	int slash_pos1,slash_pos2;
	int i,d;
	char c;

	slash_pos1 = 0;
	slash_pos2 = 0;
	len = os_strlen(dir);
	for(i=0;i<len-1;i++)	//the shortest lengths of file name is 3
	{
		c = dir [i];
		if(c == '/')
		{
			if(slash_pos1 == slash_pos2)
			{
				slash_pos2 = i;
				continue;
			}
			else
			{
				slash_pos1 = slash_pos2;
				slash_pos2 = i;
				continue;
			}
		}
		if(c != '.')
			continue;

		c = dir[i+1];
		if(c == '/')
		{
			d = i+1-slash_pos2;
			shrink_string(dir, slash_pos2, d);  //remove "/."
			return 1;
		}

		if(c == '.')
		{
			d = i+2-slash_pos1;
			shrink_string(dir, slash_pos1, d);  //remove "/xxxx/.."
			return 1;
		}
	}
	return 0;
}

int name_unify_file_path(char *full);
int name_unify_file_path(char *full)
{
	int i;
	int num;
	num = 0;

	if(full[0] != DIR_SPERATOR)
	{
		cstr_before(full,"/");
	}

	while(1)
	{
		i= delete_one_slash_dot(full);
		if(i == 0)
			break;
		num ++;
	}
	return num;		//how many ./ and ../ removed
}


int name_unify_path(char *full);
int name_unify_path(char *full)
{
	int i;
	int num;

	if(full[0] != DIR_SPERATOR)
	{
		cstr_before(full,"/");
	}

	i = os_strlen(full);
	if(full[i-1] != DIR_SPERATOR)
	{
		cstr_append(full,"/");
	}

	num = 0;
	while(1)
	{
		i= delete_one_slash_dot(full);
		if(i == 0)
			break;
		num ++;
	}
	return num;		//how many ./ and ../ removed
}
/*================================================================*/
/* end of unify.c */
