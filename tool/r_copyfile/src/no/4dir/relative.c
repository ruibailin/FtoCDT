/*
 * relative.c
 *
 *  Created on: Apr 15, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "../3str/insert.h"
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

static int delete_all_slash_dot(char *dir);
static int delete_all_slash_dot(char *dir)
{
	int i;
	int num;
	num = 0;
	while(1)
	{
		i= delete_one_slash_dot(dir);
		if(i == 0) break;
		num ++;
	}
	return num;		//how many ./ and ../ removed
}
/*================================================================*/

int cdir_is_rel_dir(char *dir);
int cdir_is_rel_dir(char *dir)
{
	if(dir[0] != DIR_SPERATOR)
		return 1;
	return 0;
}

int cdir_del_dash_dot(char *dir);
int cdir_del_dash_dot(char *dir)
{
	int ret;

	ret = delete_all_slash_dot(dir);
	return ret;
}


int cdir_ful_to_abs(char *dir);
int cdir_ful_to_abs(char *dir)
{
	int ret;
	int i;

	ret=0;
	if(dir[0] != DIR_SPERATOR)
	{
		ret++;
		cstr_before(dir,"/");
	}

	i = os_strlen(dir);
	if(dir[i-1] != DIR_SPERATOR)
	{
		ret++;
		cstr_append(dir,"/");
	}

	ret += delete_all_slash_dot(dir);
	return ret;
}

int cdir_rel_to_ful(char *ful, char *rel);
int cdir_rel_to_ful(char *ful, char *rel)
{
	int ret;
	ret = 0;
	if(rel[0] == DIR_SPERATOR)
		cstr_append(ful,rel+1);
	else
		cstr_append(ful,rel);
	return ret;
}
/*================================================================*/
/* end of relative.c */
