/*
 * copy.c
 *
 *  Created on: May 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *name_copy_file_path_name(char *full, char *path);
char *name_copy_file_path_name(char *full, char *path)
{
	int i;
	char c,*s,*d;

	i = os_strlen(full);
	s = full + i;
	d = path + i;

	while(1)			//find '/'
	{
		if(i == 0)		//no dir
		{
			path[0] = '\0';
			return path;
		}
		c = s[0];
		if(c == DIR_SPERATOR)
			break;
		s--;
		d--;
		i--;
		continue;
	}

	d[1]= '\0';
	while(1)			//copy path '/'
	{
		if(i == 0)
			break;
		c = s[0];
		d[0] = c;
		s--;
		d--;
		i--;
		continue;
	}
	return path;
}


char *name_copy_file_name(char *full, char *file);
char *name_copy_file_name(char *full, char *file)
{
	int i;
	char c,*s;

	i = os_strlen(full);
	s = full + i;

	while(1)			//find '/'
	{
		if(i == 0)		//no dir
		{
			cstr_copy_to_1(file,full);
			return file;
		}
		c = s[0];
		if(c == DIR_SPERATOR)
			break;
		s--;
		i--;
		continue;
	}

	s++;				//skip '/'
	cstr_copy_to_1(file,s);
	return file;
}

char *name_copy_file_prefix(char *full, char *pre);
char *name_copy_file_prefix(char *full, char *pre)
{
	int i;
	char c,*s;

	name_copy_file_name(full, pre);

	i = os_strlen(pre);
	s = pre + i;
	while(1)
	{
		if(i == 0)
			break;
		c = s[0];
		if(c == '.')
		{
			s[0] = '\0';
			break;
		}
		s--;
		i--;
	}
	return pre;
}

char *name_copy_file_suffix(char *full, char *suf);
char *name_copy_file_suffix(char *full, char *suf)
{
	int i;

	name_copy_file_name(full, suf);
	i = char_find_first_c(suf, '.');
	i++;							//skip '.'
	cstr_cut(suf,i);
	return suf;
}

/*================================================================*/
/* end of copy.c */
