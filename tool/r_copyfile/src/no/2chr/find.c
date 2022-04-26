/*
 * find.c
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
//0:no found. 1:found
int char_find_c(char *str,char f);
int char_find_c(char *str,char f)
{
	char *ptr;
	char c;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		if(c == f)
			return 1;
		if(c == '\0')
			return 0;
		ptr++;
	}
	return 0;
}



int char_find_first_c(char *str,char f);
int char_find_first_c(char *str,char f)
{
	char *ptr;
	char c;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		if(c == f)
			break;
		if(c == '\0')
			break;
		ptr++;
	}
	return (ptr-str);
}

int char_find_first_no_c(char *str,char f);
int char_find_first_no_c(char *str,char f)
{
	char *ptr;
	char c;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		if(c != f)
			break;
		if(c == '\0')
			break;
		ptr++;
	}
	return (ptr-str);
}

/*================================================================*/
int char_find_c_len(char *str,char f);
int char_find_c_len(char *str,char f)
{
	int len1,len2;

	len1 = char_find_first_c(str,f);
	len2 = char_find_first_no_c(str,f);
	if(len1 < len2)				//___***
		return (len2-len1);
	len1 = char_find_first_no_c(str+len2,f);	//***___***
	return len1;
}

int char_find_no_c_len(char *str,char f);
int char_find_no_c_len(char *str,char f)
{
	int len1,len2;

	len1 = char_find_first_no_c(str,f);
	len2 = char_find_first_c(str,f);
	if(len1 < len2)				//****___
		return (len2-len1);
	len1 = char_find_first_c(str+len2,f);	//___****___
	return len1;
}
/*================================================================*/
/* end of find.c */
