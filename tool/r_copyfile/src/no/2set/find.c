/*
 * find.c
 *
 *  Created on: Apr 15, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int cset_find_first_s(char *str,char *set);
int cset_find_first_s(char *str,char *set)
{
	char *ptr;
	char c;
	int ret;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		ret = char_is_group(c,set);
		if(ret == 1)
			break;
		if(c == '\0')
			break;
		ptr++;
	}
	return (ptr-str);
}

int cset_find_first_no_s(char *str,char *set);
int cset_find_first_no_s(char *str,char *set)
{
	char *ptr;
	char c;
	int ret;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		ret = char_is_group(c,set);
		if(ret == 0)
			break;
		if(c == '\0')
			break;
		ptr++;
	}
	return (ptr-str);
}

/*================================================================*/
int cset_find_s_len(char *str,char *set);
int cset_find_s_len(char *str,char *set)
{
	int len1,len2;

	len1 = cset_find_first_s(str,set);
	len2 = cset_find_first_no_s(str,set);
	if(len1 < len2)				//___***
		return (len2-len1);
	len1 = cset_find_first_no_s(str+len2,set);	//***___***
	return len1;
}

int cset_find_no_s_len(char *str,char *set,char f);
int cset_find_no_s_len(char *str,char *set,char f)
{
	int len1,len2;

	len1 = cset_find_first_no_s(str,set);
	len2 = cset_find_first_s(str,set);
	if(len1 < len2)				//****___
		return (len2-len1);
	len1 = cset_find_first_s(str+len2,set);	//___****___
	return len1;
}

/*================================================================*/
//used to find ' ', '\t' etc in a string
int cset_find_first(char *str, char *set);
int cset_find_first(char *str, char *set)
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
			return pos;
	}
	return pos;
}

int cset_find_second(char *str, char *set);
int cset_find_second(char *str, char *set)
{
	char *p;
	int pos1,pos2;

	p = str;
	pos1 = cset_find_first(p,set);

	pos2 = os_strlen(str);

	if(pos1 == pos2)
		return pos1;

	p = str+pos1+1;
	pos2 = cset_find_first(p,set);
	pos2 += pos1;
	return pos2;
}

int cset_find_last(char *str, char *set);
int cset_find_last(char *str, char *set)
{
	int pos1,pos;
	int strlen;
	char c;
	int ret;

	pos1 = cset_find_first(str,set);

	strlen = os_strlen(str);

	for(pos=strlen;pos>pos1;pos--)
	{
		c = str[pos];
		ret = char_is_group(c,set);
		if(ret == 0)
			return pos;
	}
	return pos1;
}
/*================================================================*/
/* end of find.c */
