/*
 * group.c
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int char_is_group(char c, char *set);
int char_is_group(char c, char *set)
{
	int i;
	i=0;
	while(1)
	{
		if(c == set[i])
			return 1;
		if(set[i] == '\0')
			break;
		i++;
	}
	return 0;
}

//another way for is digit
static char set_digit[]="0123456789";
int char_is_digit(char c);
int char_is_digit(char c)
{
	return char_is_group(c,set_digit);
}

/*================================================================*/
/* end of group.c */
