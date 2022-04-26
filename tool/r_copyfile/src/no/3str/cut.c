/*
 * cut.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
//cut n chars from head;
int cstr_cut(char *s1,int num);
int cstr_cut(char *s1,int num)
{
	char c;
	int slen;
	int i,j;

	slen=os_strlen(s1);
	if(slen< num)
	{
		s1[0] = '\0';
		return slen;
	}

	j=num;
	slen -= num;
	for(i=0;i<slen;i++)
	{
		c = s1[j];
		s1[i] = c;
		j++;
	}
	s1[i] = '\0';
	return num;
}
/*================================================================*/
//cut n chars from head+offset;
int cstr_cut_offset(char *s1,int offset,int num);
int cstr_cut_offset(char *s1,int offset,int num)
{
	char *p;
	int slen;
	slen=os_strlen(s1);
	if(slen< offset)
		return -1;
	if((slen-offset)< num)
	{
		s1[offset] = '\0';
		return slen-offset;
	}

	p = s1+offset;
	return cstr_cut(p,num);
}
/*================================================================*/
//use to cut file type or file name from a dir
int cstr_cut_tail(char *s1,int num);
int cstr_cut_tail(char *s1,int num)
{
	int slen;

	slen=os_strlen(s1);
	if(slen< num)
	{
		s1[0] = '\0';
		return slen;
	}

	slen -= num;
	s1[slen] = '\0';
	return num;
}
/*================================================================*/
/* end of cut.c */
