/*
 * replace.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
#include "find.h"
#include "cut.h"
#include "insert.h"
/*================================================================*/
int cstr_replace(char *lstr,char *ced, char *ce);
int cstr_replace(char *lstr,char *ced, char *ce)
{
	int offset, len;

	offset = cstr_find(lstr,ced);
	if(offset < 0)
		return -1;
	len = os_strlen(ced);
	cstr_cut_offset(lstr,offset,len);
	cstr_insert(lstr,offset,ce);
	return offset;
}


int nstr_replace(char *lstr,char *ced, int n,char *ce);
int nstr_replace(char *lstr,char *ced, int n,char *ce)
{
	int offset, len;

	offset = nstr_find(lstr,ced,n);
	if(offset < 0)
		return -1;
	len = n;
	cstr_cut_offset(lstr,offset,len);
	cstr_insert(lstr,offset,ce);
	return offset;
}


//times of replace
int cstr_replace_all(char *lstr,char *ced, char *ce);
int cstr_replace_all(char *lstr,char *ced, char *ce)
{
	char *p;
	int offset, len;
	int num;

	num = 0;
	p = lstr;
	len = os_strlen(ce);
	while(1)
	{
		offset = cstr_replace(p, ced, ce);
		if(offset < 0)
			break;
		p += (offset+len);
		num++;
	}
	return num;
}

int nstr_replace_all(char *lstr,char *ced, int n,char *ce);
int nstr_replace_all(char *lstr,char *ced, int n,char *ce)
{
	char *p;
	int offset, len;
	int num;

	num = 0;
	p = lstr;
	len = os_strlen(ce);
	while(1)
	{
		offset = nstr_replace(p, ced, n, ce);
		if(offset < 0)
			break;
		p += (offset+len);
		num++;
	}
	return num;
}
/*================================================================*/
/* end of replace.c */
