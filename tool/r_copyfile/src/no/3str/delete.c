/*
 * delete.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#include "0ctr.h"
#include "find.h"
#include "cut.h"
/*================================================================*/
int cstr_delete(char *lstr,char *sstr);
int cstr_delete(char *lstr,char *sstr)
{
	int slen;
	int offset;

	offset = cstr_find(lstr,sstr);
	if(offset < 0)
		return -1;
	slen = os_strlen(sstr);
	cstr_cut_offset(lstr,offset,slen);
	return 0;
}


int nstr_delete(char *lstr,char *sstr,int n);
int nstr_delete(char *lstr,char *sstr,int n)
{
	int offset;

	offset = nstr_find(lstr,sstr,n);
	if(offset < 0)
		return -1;
	cstr_cut_offset(lstr,offset,n);
	return 0;
}
//don't delete sstr after delete
//ex: aabcbabccabcaa, delete abc --> abcaa, not aa
//ret: delete times
int cstr_delete_all(char *lstr,char *sstr);
int cstr_delete_all(char *lstr,char *sstr)
{
	char * rest;
	int slen;
	int offset;
	int ret;

	ret = 0;
	offset = 0;
	rest = lstr;
	slen = os_strlen(sstr);
	while(1)
	{
		offset = cstr_find(rest,sstr);
		if(offset < 0)
			return ret;
		cstr_cut_offset(rest,offset,slen);
		rest += offset;
		ret ++;
	}
	return ret;
}


int nstr_delete_all(char *lstr,char *sstr,int n);
int nstr_delete_all(char *lstr,char *sstr,int n)
{
	char *rest;
	int offset;
	int ret;

	ret = 0;
	offset = 0;
	rest = lstr;
	while(1)
	{
		offset = nstr_find(rest,sstr,n);
		if(offset < 0)
			return ret;
		cstr_cut_offset(rest,offset,n);
		rest += offset;
		ret ++;
	}
	return ret;
}
/*================================================================*/
/* end of delete.c */
