/*
 * goto.c
 *
 *  Created on: May 13, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *name_goto_path_level(char *full,int level);
char *name_goto_path_level(char *full,int level)
{
	int lev;
	char c,*s;

	s = full;

	lev = 0;
	while(1)			//find '/'
	{
		if(lev == level)
			break;
		c = s[0];
		if(c == DIR_SPERATOR)
		{
			lev++;
		}
		if(c == '\0')
			break;
		s++;
	}
	return s;
}


char *name_goto_file_name(char *full);
char *name_goto_file_name(char *full)
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
			p++;		//skip '/'
			return p;
		}
		p--;
	}
	return p;
}


char *name_goto_file_prefix(char *full);
char *name_goto_file_prefix(char *full)
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
			p++;		//skip '/'
			return p;
		}
		p--;
	}
	return p;
}

char *name_goto_file_suffix(char *full);
char *name_goto_file_suffix(char *full)
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
		{
			p = full+len;
			return p;
		}
		p--;
	}
	p++; 			//SKIP '.'
	return p;
}

/*================================================================*/
/* end of goto.c */
