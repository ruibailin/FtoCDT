/*
 * delete.c
 *
 *  Created on: Apr 15, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
//used to delete ' ', '\t' etc in a string
int cset_delete_first_s(char *str, char *set);
int cset_delete_first_s(char *str, char *set)
{
	char *s;
	char c;
	int ret;

	s = str;
	c = s[0];
	if(c == '\0')
		return 0;
	while(1)
	{
		c = s[1];
		if(c == '\0')
			return 0;
		ret = char_is_group(c,set);
		if( ret == 0)
		{
			s++;
			continue;
		}
		char_cut_first_c(s);
		break;
	}
	return 1;
}


int cset_delete_all_s(char *str, char *set);
int cset_delete_all_s(char *str, char *set)
{

	char *p;
	int num;
	int ret;

	num = 0;
	p = str;
	while(1)
	{
		ret = cset_delete_first_s(p,set);
		if(ret == 0)
			break;
		num ++;
	}
	return num;
}

/*================================================================*/
//used to delete ' ', '\t' etc in a string
int cset_delete(char *str, char *set);
int cset_delete(char *str, char *set)
{
	char *s;
	char c;
	int ret;

	s = str;
	c = s[0];
	if(c == '\0')
		return 0;
	while(1)
	{
		c = s[1];
		if(c == '\0')
			return 0;
		ret = char_is_group(c,set);
		if( ret == 0)
		{
			s++;
			continue;
		}
		char_cut_first_c(s);
		break;
	}
	return 1;
}


int cset_delete_all(char *str, char *set);
int cset_delete_all(char *str, char *set)
{

	char *p;
	int num;
	int ret;

	num = 0;
	p = str;
	while(1)
	{
		ret = cset_delete(p,set);
		if(ret == 0)
			break;
		num ++;
	}
	return num;
}

/*================================================================*/
/* end of delete.c */
