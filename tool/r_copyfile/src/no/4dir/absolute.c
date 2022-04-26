/*
 * absolute.c
 *
 *  Created on: Apr 15, 2021
 *      Author: steve
 *  There is no . and .. in  absolute dir
 */


#include "0ctr.h"
#include "../3str/compare.h"
#include "../3str/insert.h"
/*================================================================*/
//absolute dir is: leading and ending with DIR_SPERATOR,and no . and ..
int cdir_is_abs_dir(char *dir);
int cdir_is_abs_dir(char *dir)
{
	int i;
	if(dir[0] != DIR_SPERATOR)
		return 0;

	i = os_strlen(dir);
	if(dir[i] != DIR_SPERATOR)
		return 0;
	i = 1;
	while(1)
	{
		if(dir[i] == '\0')
			break;
		if(dir[i] == '.')
		{
			if(dir[i+1] == '.')
			return 0;
			if(dir[i+1] == DIR_SPERATOR)
			return 0;
		}
		i++;
	}
	return 1;
}

int cdir_is_user_dir(char *dir);
int cdir_is_user_dir(char *dir)
{
	int ret;
	char c;
	ret = cstr_cmp(dir,"../");
	if(ret == 0)
		return 1;
	ret = cstr_cmp(dir,"./");
	if(ret == 0)
		return 1;
	ret = cstr_cmp(dir,".");
	if(ret == 0)
		return 1;
	ret = cstr_cmp(dir,"/home/");
	if(ret == 0)
		return 1;
	c = dir[0];
	if(c == '/')
		return 0;
	else
		return 1;
}

/*================================================================*/
int cdir_get_t_levels(char *dir);
int cdir_get_t_levels(char *dir)
{
	int i,l;

	l=0;
	i=1;
	while(1)
	{
		if(dir[i] == '\0')
			break;
		if(dir[i] == DIR_SPERATOR)
			l++;
		i++;
	}
	return l;			//how many levels
}

int cdir_get_l_name(char *dir,int level,char *name);
int cdir_get_l_name(char *dir,int level,char *name)
{
	char *p1,*p2;
	int i,j,l;

	l=0;
	i=0;
	p1 = NULL;
	p2 = NULL;
	while(1)
	{
		if(l == level)
			p1 = &dir[i];
		if(l == (level+1))
			p2 = &dir[i];
		if(dir[i] == '\0')
			break;
		if(dir[i] == DIR_SPERATOR)
			l++;
		i++;
	}

	if(p2 == NULL)
	{
		name[0]= '\0';
		return 0;		//no this level
	}

	j = p2-p1;

	for(i=0;i<j;i++)
		name[i] = p1[i];
	name[i]='\0';
	return 1;			//success copy
}


int cdir_make_abs_dir(char *dir);
int cdir_make_abs_dir(char *dir)
{
	  int  i,j,len;
	  int ret;
	  char c;
	  ret = 0;
	  len = os_strlen(dir);
	  for(i=1;i<len;i++)
	  {
		  c=dir[i];
		  if(c != DIR_SPERATOR)
			  continue;
		  dir[i]='\0';
		  j = os_find_dir(dir);
		  if(j)
		  {
			  dir[i]=DIR_SPERATOR;
			  continue;
		  }
		  j = os_make_dir(dir);
		  if(j)
			  ret++;
		  dir[i]=DIR_SPERATOR;
	  }
	return ret;		//0: no dir created.
}

/*================================================================*/
/* end of absolute.c */
