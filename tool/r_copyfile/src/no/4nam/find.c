/*
 * find.c
 *
 *  Created on: May 13, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int name_find_full_path(char *full);
int name_find_full_path(char *full)
{
	int i,len;
	char c, *p;

	len = os_strlen(full);
	p = full+len;

	for(i=0;i<len;i++)
	{
		c = p[0];
		if(c == '/')
		{
			break;
		}
		p--;
	}
	return len-i;
}

int name_find_file_prefix(char *full);
int name_find_file_prefix(char *full)
{
	int i,len;
	char c, *p;

	len = os_strlen(full);
	p = full+len;

	for(i=0;i<len;i++)
	{
		c = p[0];
		if(c == '/')
		{
			break;
		}
		p--;
	}
	return len-i;
}

int name_find_file_suffix(char *full);
int name_find_file_suffix(char *full)
{
	int i,len;
	char c, *p;

	len = os_strlen(full);
	p = full+len;

	for(i=0;i<len;i++)
	{
		c = p[0];
		if(c == '.')
			break;
		if(c == '/')
			return len;
		p--;
	}
	return len-i;
}

/*================================================================*/
/* end of find.c */
