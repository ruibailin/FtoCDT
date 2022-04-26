/*
 * goto.c
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *char_goto_first_c(char *str,char f);
char *char_goto_first_c(char *str,char f)
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
	return ptr;
}

char *char_goto_first_no_c(char *str,char f);
char *char_goto_first_no_c(char *str,char f)
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
	return ptr;
}

/*================================================================*/
char *char_goto_last_c(char *str,char f);
char *char_goto_last_c(char *str,char f)
{
	char *ptr;
	char c;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		if(c == f)
			break;
		ptr--;
	}
	return ptr;
}

char *char_goto_last_no_c(char *str,char f);
char *char_goto_last_no_c(char *str,char f)
{
	char *ptr;
	char c;

	ptr = str;
	while(1)
	{
		c = ptr[0];
		if(c != f)
			break;
		ptr--;
	}
	return ptr;
}

/*================================================================*/
char *char_goto_c_string(char *str,char f);
char *char_goto_c_string(char *str,char f)
{
	char *ptr1, *ptr2;

	ptr1 = char_goto_first_c(str,f);
	ptr2 = char_goto_first_no_c(str,f);

	if( ptr1 < ptr2)	 //ffff****
		return ptr1;
	else
		return ptr1;	//****ffff

}

char *char_goto_no_c_string(char *str,char f);
char *char_goto_no_c_string(char *str,char f)
{
	char *ptr1, *ptr2;

	ptr1 = char_goto_first_c(str,f);
	ptr2 = char_goto_first_no_c(str,f);

	if( ptr1 < ptr2)		//ffff****
		return ptr2;
	else
		return ptr2;		//****ffff
}
/*================================================================*/
/* end of goto.c */
