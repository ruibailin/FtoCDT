/*
 * get.c
 *
 *  Created on: May 11, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int name_get_file_path_levels(char *full);
int name_get_file_path_levels(char *full)
{
	int lev;
	char c,*s;

	s = full;

	lev = 0;
	while(1)			//find '/'
	{
		c = s[0];
		if(c == DIR_SPERATOR)
			lev++;
		if(c == '\0')
			break;
		s++;
	}
	return lev;
}

int name_get_file_path_name_len(char *full);
int name_get_file_path_name_len(char *full)
{
	int i;
	char c,*s;

	i = os_strlen(full);
	s = full + i;

	while(1)			//find '/'
	{
		if(i == 0)		//no dir
			return 0;
		c = s[0];
		if(c == DIR_SPERATOR)
			break;
		s--;
		i--;
		continue;
	}
	return i;
}

int name_get_file_name_len(char *full);
int name_get_file_name_len(char *full)
{
	int i,len;
	char c,*s;

	len = os_strlen(full);
	i = len;
	s = full + i;

	while(1)			//find '/'
	{
		if(i == 0)		//no dir
		{
			return len;
		}
		c = s[0];
		if(c == DIR_SPERATOR)
			break;
		s--;
		i--;
		continue;
	}

	i++;				//skip '/'
	return len-i;
}

int name_get_file_suffix_len(char *full);
int name_get_file_suffix_len(char *full)
{
	int i,len;
	char c,*s;

	len = os_strlen(full);
	i = len;
	s = full + i;

	while(1)			//find '/'
	{
		if(i == 0)		//no path and no suffix
		{
			return 0;
		}
		c = s[0];
		if(c == DIR_SPERATOR)   //has path and no suffix
		{
			return 0;
		}
		if(c == '.')   			//has suffix
		{
			return len-i;
		}
		s--;
		i--;
		continue;
	}
}


int name_get_file_prefix_len(char *full);
int name_get_file_prefix_len(char *full)
{
	int f_l,s_l;

	f_l = name_get_file_name_len(full);
	s_l = name_get_file_suffix_len(full);
	if(s_l == 0)
	{
		return f_l;
	}

	return (f_l-s_l-1);			//skip '.'
}

/*================================================================*/
/* end of get.c */
