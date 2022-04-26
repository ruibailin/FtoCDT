/*
 * delete.c
 *
 *  Created on: Apr 30, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "cut.h"
/*================================================================*/
int char_delete_first_c(char *str,char f);
int char_delete_first_c(char *str,char f)
{
	char *s;
	char c;

	s = str;
	while(1)
	{
		c = s[0];
		if(c == '\0')
			break;
		if(c == f)
		{
			char_cut_first_c(s);
			return 1;
		}
		s++;
	}
	return 0;
}


int char_delete_all_c(char *str,char f);
int char_delete_all_c(char *str,char f)
{
	int ret,num;


	num = 0;
	while(1)
	{
		ret = char_delete_first_c(str,f);
		if(ret == 0)
			break;
		num ++;
	}
	return num;
}

/*================================================================*/
/* end of delete.c */
