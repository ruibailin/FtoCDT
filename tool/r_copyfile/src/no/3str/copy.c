/*
 * copy.c
 *
 *  Created on: Apr 22, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
void cstr_copy(char *to,char *from);
void cstr_copy(char *to,char *from)
{
	char c;

	while(1)
	{
		c = from[0];
		to[0] = c;
		if(c == '\0')
			break;
		from++;
		to++;
	}
}

void nstr_copy(char *to,char *from, int num);
void nstr_copy(char *to,char *from, int num)
{
	char c;

	while(1)
	{
		if(num <= 0)
		{
			to[0] = '\0';
			break;
		}
		c = from[0];
		to[0] = c;
		if(c == '\0')
			break;
		from++;
		to++;
		num --;
	}
}

void cstr_copy_to_1(char *to,char *from);
void cstr_copy_to_1(char *to,char *from)
{
	char c;

	while(1)
	{
		c = from[0];
		to[0] = c;
		if(c == '\0')
			break;
		from++;
		to++;
	}
}

void nstr_copy_to_1(char *to,char *from, int num);
void nstr_copy_to_1(char *to,char *from, int num)
{
	char c;

	while(1)
	{
		if(num <= 0)
		{
			to[0] = '\0';
			break;
		}
		c = from[0];
		to[0] = c;
		if(c == '\0')
			break;
		from++;
		to++;
		num --;
	}
}

void cstr_copy_from_2(char *to,char *from);
void cstr_copy_from_2(char *to,char *from)
{
	char c;

	while(1)
	{
		c = from[0];
		to[0] = c;
		if(c == '\0')
			break;
		from++;
		to++;
	}
}

void nstr_copy_from_2(char *to,char *from, int num);
void nstr_copy_from_2(char *to,char *from, int num)
{
	char c;

	while(1)
	{
		if(num <= 0)
		{
			to[0] = '\0';
			break;
		}
		c = from[0];
		to[0] = c;
		if(c == '\0')
			break;
		from++;
		to++;
		num --;
	}
}
/*================================================================*/
/* end of copy.c */
