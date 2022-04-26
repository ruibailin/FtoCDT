/*
 * replace.c
 *
 *  Created on: Apr 15, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "../2chr/2chr.h"
#include "find.h"
/*================================================================*/
//used to replace ' ', '\t' etc in a string
int cset_replace_one(char *str, char *set,char r);
int cset_replace_one(char *str, char *set,char r)
{
	int pos;
	int strlen;
	char c;
	int ret;

	strlen = os_strlen(str);

	for(pos=0;pos<strlen;pos++)
	{
		c = str[pos];
		ret = char_is_group(c,set);
		if(ret == 1)
		{
			str[pos] = r;
			break;
		}
	}
	return pos-1;
}

int cset_replace_pair(char *str, char *set,char r);
int cset_replace_pair(char *str, char *set,char r)
{
	int pos1,pos2;

	pos1 = cset_find_first(str,set);
	pos2 = cset_find_second(str,set);
	if(pos1<0)
		return pos1;
	if(pos2<0)
		return pos2;
	if(pos1 == pos2)
		return -1;
	str[pos1] = r;
	str[pos2] = r;
	return 1;
}


int cset_replace_all(char *str, char *set,char r);
int cset_replace_all(char *str, char *set,char r)
{
	int pos;
	int strlen;
	char c;

	int num;
	int ret;

	num = 0;
	strlen = os_strlen(str);
	for(pos=0;pos<strlen;pos++)
	{
		c = str[pos];
		ret = char_is_group(c,set);
		if(ret == 1)
		{
			num++;
			str[pos] = r;
		}
	}
	return num;
}
/*================================================================*/
/* end of replace.c */
