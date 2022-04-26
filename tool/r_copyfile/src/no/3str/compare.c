/*
 * cmp.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
//if length is 0, return 0,

int cstr_equal(char *s1,char *s2);
int cstr_equal(char *s1,char *s2)
{
	while(1)
	{
		if(s1[0] == '\0')
		{
			if(s2[0] == '\0')
				return 1;
			else
				return 0;
		}
		if(s2[0] == '\0')
		{
			if(s1[0] == '\0')
				return 1;
			else
				return 0;
		}
		if(s1[0]!=s2[0])
			return 0;
		s1++;
		s2++;
	}
}


//if length is 0, return 0; if equal, also 0

int cstr_cmp(char *s1,char *s2);
int cstr_cmp(char *s1,char *s2)
{
	while(1)
	{
		if(s1[0] == '\0')
			return 0;
		if(s2[0] == '\0')
			return 0;
		if(s1[0]!=s2[0])
			return (s1[0]-s2[0]);
		s1++;
		s2++;
	}
}

int nstr_cmp(char *s1,char *s2,int n);
int nstr_cmp(char *s1,char *s2,int n)
{
	while(1)
	{
		if(n<=0)
			return 0;
		if(s1[0] == '\0')
			return 0;
		if(s2[0] == '\0')
			return 0;
		if(s1[0]!=s2[0])
			return (s1[0]-s2[0]);
		s1++;
		s2++;
		n--;
	}
}
/*================================================================*/
//used to find a string contained in another string
int cstr_cmp_offset(char *s1,int offset,char *s2);
int cstr_cmp_offset(char *s1,int offset,char *s2)
{
	char *str;
	int ret;

	str = s1+offset;
	ret = cstr_cmp(str,s2);
	return ret;
}

int nstr_cmp_offset(char *s1,int offset,char *s2,int n);
int nstr_cmp_offset(char *s1,int offset,char *s2,int n)
{
	char *str;
	int ret;

	str = s1+offset;
	ret = nstr_cmp(str,s2,n);
	return ret;
}
/*================================================================*/
//find a file from a dir
int cstr_cmp_tail(char *s1,char *s2);
int cstr_cmp_tail(char *s1,char *s2)
{
	int len1,len2;
	int i,j;
	int ret;
	len1=os_strlen(s1);
	len2=os_strlen(s2);

	i = len1;
	j = len2;
	while(1)
	{
		if(s1[i]!=s2[j])
			break;
		if(i== 0)
			return 0;
		if(j== 0)
			return 0;
		i--;
		j--;
	}

	ret=s1[i]-s2[i];
	return ret;
}

//find a file from a dir
int nstr_cmp_tail(char *s1,char *s2,int n);
int nstr_cmp_tail(char *s1,char *s2,int n)
{
	int len1,len2;
	int i,j;
	int ret;
	len1=os_strlen(s1);
	len2=n;

	i = len1;
	j = len2;
	while(1)
	{
		if(s1[i]!=s2[j])
			break;
		if(i== 0)
			return 0;
		if(j== 0)
			return 0;
		i--;
		j--;
	}

	ret=s1[i]-s2[i];
	return ret;
}
/*================================================================*/
//used to find a relevent dir from a full dir
int cstr_cmp_tail_offset(char *s1,int offset,char *s2);
int cstr_cmp_tail_offset(char *s1,int offset,char *s2)
{
	int len1,len2;
	int i,j;
	int ret;
	len1=os_strlen(s1);
	len2=os_strlen(s2);
	i = len1-offset;
	if(i<1)
		return -1;
	j = len2;
	while(1)
	{
		if(s1[i]!=s2[j])
			break;
		if(i== 0)
			return 0;
		if(j== 0)
			return 0;
		i--;
		j--;
	}

	ret=s1[i]-s2[i];
	return ret;
}


//used to find a relevent dir from a full dir
int nstr_cmp_tail_offset(char *s1,int offset,char *s2,int n);
int nstr_cmp_tail_offset(char *s1,int offset,char *s2,int n)
{
	int len1,len2;
	int i,j;
	int ret;
	len1=os_strlen(s1);
	len2=n;

	i = len1-offset;
	if(i<1)
		return -1;
	j = len2;
	while(1)
	{
		if(s1[i]!=s2[j])
			break;
		if(n==0)
			return 0;
		if(i== len1)
			return 0;
		if(j== len2)
			return 0;
		i--;
		j--;
		n--;
	}

	ret=s1[i]-s2[i];
	return ret;
}
/*================================================================*/
/* end of cmp.c */
