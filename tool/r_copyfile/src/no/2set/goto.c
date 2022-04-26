/*
 * goto.c
 *
 *  Created on: May 11, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *cset_goto_first_s(char *str,char *set);
char *cset_goto_first_s(char *str,char *set)
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
	return ptr;
}

char *cset_goto_first_no_s(char *str,char *set);
char *cset_goto_first_no_s(char *str,char *set)
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
	return ptr;
}

/*================================================================*/
char *cset_goto_last_s(char *str,char *set);
char *cset_goto_last_s(char *str,char *set)
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
		ptr--;
	}
	return ptr;
}

char *cset_goto_last_no_s(char *str,char *set);
char *cset_goto_last_no_s(char *str,char *set)
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
		ptr--;
	}
	return ptr;
}

/*================================================================*/
char *cset_goto_s_string(char *str,char *set);
char *cset_goto_s_string(char *str,char *set)
{
	char *ptr1, *ptr2;

	ptr1 = cset_goto_first_s(str,set);
	ptr2 = cset_goto_first_no_s(str,set);

	if( ptr1 < ptr2)	 //ffff****
		return ptr1;
	else
		return ptr1;	//****ffff

}

char *cset_goto_no_s_string(char *str,char *set);
char *cset_goto_no_s_string(char *str,char *set)
{
	char *ptr1, *ptr2;

	ptr1 = cset_goto_first_s(str,set);
	ptr2 = cset_goto_first_no_s(str,set);

	if( ptr1 < ptr2)		//ffff****
		return ptr2;
	else
		return ptr2;		//****ffff
}

/*================================================================*/
/* end of goto.c */
