/*
 * copy.c
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *char_copy_c_string(char *d, char *s,char f);
char *char_copy_c_string(char *d, char *s,char f)
{
	char c;

	while(1)
	{
		c = s[0];
		if(c != f)
			break;
		if(c == '\0')
			break;
		if(c == '\n')
			break;
		d[0] = c;
		s++;
		d++;
	}
	d[0] = '\0';
	return s;
}

char *char_copy_no_c_string(char *d, char *s,char f);
char *char_copy_no_c_string(char *d, char *s,char f)
{
	char c;

	while(1)
	{
		c = s[0];
		if(c == f)
			break;
		if(c == '\0')
			break;
		if(c == '\n')
			break;
		d[0] = c;
		s++;
		d++;
	}
	d[0] = '\0';
	return s;
}
/*================================================================*/
/* end of copy.c */
