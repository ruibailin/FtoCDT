/*
 * ins.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
void cstr_append(char *s1,char *s2);
void cstr_append(char *s1,char *s2)
{
	char c;
	int len1,len2;
	int i,j,k;

	len1=os_strlen(s1);
	len2=os_strlen(s2);

	i=len1;
	j=0;
	for(k=0;k<len2;k++)
	{
		c = s2[j];
		s1[i] = c;
		i++;
		j++;
	}
	s1[i] = '\0';
}

void nstr_append(char *s1,char *s2,int n);
void nstr_append(char *s1,char *s2,int n)
{
	char c;
	int len1,len2;
	int i,j,k;

	len1=os_strlen(s1);
	len2=n;

	i=len1;
	j=0;
	for(k=0;k<len2;k++)
	{
		c = s2[j];
		s1[i] = c;
		i++;
		j++;
	}
	s1[i] = '\0';
}
/*================================================================*/
void cstr_before(char *s1,char *s2);
void cstr_before(char *s1,char *s2)
{
	char c;
	int len1,len2;
	int i,j,k;

	len1=os_strlen(s1);
	len2=os_strlen(s2);

	i=len1+len2;
	j=len1;
	s1[i] = '\0';
	for(k=0;k<len1;k++)
	{
		i--;
		j--;
		c = s1[j];
		s1[i] = c;
	}
	for(k=0;k<len2;k++)
	{
		c = s2[k];
		s1[k] = c;
	}
}

void nstr_before(char *s1,char *s2,int n);
void nstr_before(char *s1,char *s2,int n)
{
	char c;
	int len1,len2;
	int i,j,k;

	len1=os_strlen(s1);
	len2=n;

	i=len1+len2;
	j=len1;
	s1[i] = '\0';
	for(k=0;k<len1;k++)
	{
		i--;
		j--;
		c = s1[j];
		s1[i] = c;
	}
	for(k=0;k<len2;k++)
	{
		c = s2[k];
		s1[k] = c;
	}
}

void cstr_insert(char *s1,int offset,char *s2);
void cstr_insert(char *s1,int offset,char *s2)
{
	char *p;
	int len1;

	len1 = os_strlen(s1);
	if(len1 < offset)
		return;
	p = s1+offset;
	cstr_before(p,s2);
}

void nstr_insert(char *s1,int offset,char *s2,int n);
void nstr_insert(char *s1,int offset,char *s2,int n)
{
	char *p;
	int len1;

	len1 = os_strlen(s1);
	if(len1 < offset)
		return;
	p = s1+offset;
	nstr_before(p,s2,n);
}
/*================================================================*/
/* end of ins.c */
