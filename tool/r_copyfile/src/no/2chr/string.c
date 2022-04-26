/*
 * string.c
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int char_find(char *str,char f);
int char_find(char *str,char f)
{
	int pos;
	char c;

	for(pos=0;;pos++)
	{
		c = str[pos];
		if(c == f)
			return pos;
		if(c == '\0')
			break;
	}
	return -1;
}

int char_find_last(char *str,int offset,char f);
int char_find_last(char *str,int offset,char f)
{
	int pos;
	char c;

	for(pos=offset;pos>=0;pos--)
	{
		c = str[pos];
		if(c == f)
			return pos;
	}
	return -1;
}

int char_find_next(char *str,int offset,char f);
int char_find_next(char *str,int offset,char f)
{
	int pos;
	char c;

	for(pos=offset;;pos++)
	{
		c = str[pos];
		if(c == f)
			return pos;
		if(c == '\0')
			break;
	}
	return -1;
}


int char_find_tail(char *str,char f);
int char_find_tail(char *str,char f)
{
	int pos;
	int strlen;
	char c;

	strlen = os_strlen(str);
	for(pos=0;pos<strlen;pos++)
	{
		c = str[strlen-pos];
		if(c == f)
			break;
	}
	return pos-1;
}

char char_get_char(char *str,int pos);
char char_get_char(char *str,int pos)
{
	int strlen;
	strlen = os_strlen(str);
	if(strlen < pos)
		return '\0';
	return str[pos];
}

char char_set_char(char *str,int pos,char s);
char char_set_char(char *str,int pos,char s)
{
	int strlen;
	char c;
	strlen = os_strlen(str);
	if(strlen < pos)
		return '\0';
	c = str[pos];
	str[pos] = s;
	return c;
}
/*================================================================*/
/* end of string.c */
