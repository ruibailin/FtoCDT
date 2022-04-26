/*
 * find.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
#include "compare.h"
//ret: <0, no found, otherwise, position
int cstr_find(char *lstr,char *sstr);
int cstr_find(char *lstr,char *sstr)
{
	int llen,slen;
	int i;
	int ret;
	llen=os_strlen(lstr);
	slen=os_strlen(sstr);

	for(i=0;i<llen-slen+1;i++)
	{
		ret = cstr_cmp(lstr+i,sstr);
		if(ret == 0)
			return i;
	}
	return -1;
}

int nstr_find(char *lstr,char *sstr,int n);
int nstr_find(char *lstr,char *sstr,int n)
{
	int llen,slen;
	int i;
	int ret;
	llen=os_strlen(lstr);
	slen=n;

	for(i=0;i<llen-slen+1;i++)
	{
		ret = nstr_cmp(lstr+i,sstr,n);
		if(ret == 0)
			return i;
	}
	return -1;
}

//ret: <0, no found, otherwise, position
int cstr_find_tail(char *lstr,char *sstr);
int cstr_find_tail(char *lstr,char *sstr)
{
	int llen,slen;
	int i;
	int ret;
	llen=os_strlen(lstr);
	slen=os_strlen(sstr);

	for(i=0;i<llen-slen+1;i++)
	{
		ret = cstr_cmp(lstr+llen-slen-i,sstr);
		if(ret == 0)
			return i;
	}
	return -1;
}


int nstr_find_tail(char *lstr,char *sstr,int n);
int nstr_find_tail(char *lstr,char *sstr,int n)
{
	int llen,slen;
	int i;
	int ret;
	llen=os_strlen(lstr);
	slen=n;

	for(i=0;i<llen-slen+1;i++)
	{
		ret = nstr_cmp(lstr+llen-slen-i,sstr,n);
		if(ret == 0)
			return i;
	}
	return -1;
}
/*================================================================*/
//ret: 0, no found, >0, times
int cstr_find_all(char *lstr,char *sstr);
int cstr_find_all(char *lstr,char *sstr)
{
	int offset,slen;;
	int num,ret;
	char *p;

	slen = os_strlen(sstr);
	num = 0;
	p = lstr;
	offset = 0;
	while(1)
	{
		ret = cstr_find(p,sstr);
		if(ret <0 )
			break;
		num++;
		offset += ret;
		p=lstr+offset+slen;
	}
	return num;
}

int nstr_find_all(char *lstr,char *sstr,int n);
int nstr_find_all(char *lstr,char *sstr,int n)
{
	int offset,slen;;
	int num,ret;
	char *p;

	slen = n;
	num = 0;
	p = lstr;
	offset = 0;
	while(1)
	{
		ret = nstr_find(p,sstr,n);
		if(ret <0 )
			break;
		num++;
		offset += ret;
		p=lstr+offset+slen;
	}
	return num;
}

int cstr_find_whole_word(char *lstr,char *sstr);
int cstr_find_whole_word(char *lstr,char *sstr)
{
	int llen,slen;
	int i;
	int ret;
	llen=os_strlen(lstr);
	slen=os_strlen(sstr);

	ret = cstr_cmp(lstr,sstr);
	if(ret == 0)
		if(lstr[slen] == ' ')
			return 0;

	for(i=slen;i<llen-slen+1;i++)
	{
		ret = cstr_cmp(lstr+i,sstr);
		if(ret != 0)
			continue;
		if(lstr[i-1] != ' ')
			continue;
		if(lstr[i+slen] != ' ')
			continue;
		return i;
	}
	return -1;
}

int nstr_find_whole_word(char *lstr,char *sstr,int n);
int nstr_find_whole_word(char *lstr,char *sstr,int n)
{
	int llen,slen;
	int i;
	int ret;
	llen=os_strlen(lstr);
	slen=n;

	ret = nstr_cmp(lstr,sstr,n);
	if(ret == 0)
		if(lstr[slen] == ' ')
			return 0;

	for(i=slen;i<llen-slen+1;i++)
	{
		ret = nstr_cmp(lstr+i,sstr,n);
		if(ret != 0)
			continue;
		if(lstr[i-1] != ' ')
			continue;
		if(lstr[i+slen] != ' ')
			continue;
		return i;
	}
	return -1;
}
/*================================================================*/
/* end of find.c */
