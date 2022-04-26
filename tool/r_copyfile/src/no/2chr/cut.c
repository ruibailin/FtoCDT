/*
 * cut.c
 *
 *  Created on: Apr 30, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int char_cut_first_c(char *str);
int char_cut_first_c(char *str)
{
	char *s,*d;
	char c;

	s = str;
	d = str;
	c = s[0];
	if(c == '\0')
		return 0;
	while(1)
	{
		c = s[1];
		if(c == '\0')
			break;
		d[0] = c;
		s++;
		d++;
	}
	d[0]='\0';
	return 1;
}

int char_cut_last_c(char *str);
int char_cut_last_c(char *str)
{
	char *s;
	char c;

	s = str;
	c = s[0];
	if(c == '\0')
		return 0;
	while(1)
	{
		c = s[1];
		if(c == '\0')
			break;
		s++;
	}
	s[0] = '\0';
	return 1;
}

/*================================================================*/
/* end of cut.c */
