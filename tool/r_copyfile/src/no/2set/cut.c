/*
 * cut.c
 *
 *  Created on: May 10, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int cset_cut_first_s(char *str,char *set);
int cset_cut_first_s(char *str,char *set)
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

int cset_cut_last_s(char *str,char *set);
int cset_cut_last_s(char *str,char *set)
{
	char *s;
	char c;
	int i,ret;

	i = os_strlen(str);
	s = str+i;
	c = s[0];
	if(c == '\0')
		return 0;
	while(1)
	{
		if(i == 0)
			return 0;
		c = s[0];
		ret = char_is_group(c,set);
		if( ret == 0)
		{
			s--;
			i--;
			continue;
		}
		char_cut_first_c(s);
		break;
	}
	return 1;
}


/*================================================================*/
/* end of cut.c */
