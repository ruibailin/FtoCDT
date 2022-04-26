/*
 * copy.c
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *cset_copy_s_string(char *d, char *s,char *set);
char *cset_copy_s_string(char *d, char *s,char *set)
{
	char c;
	int ret;

	while(1)
	{
		c = s[0];
		ret = char_is_group(c,set);
		if(ret == 0)
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

char *cset_copy_no_s_string(char *d, char *s,char *set);
char *cset_copy_no_s_string(char *d, char *s,char *set)
{
	char c;
	int ret;

	while(1)
	{
		c = s[0];
		ret = char_is_group(c,set);
		if(ret == 1)
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
int cset_cpy(char *d, char *s, char *ignore_set,char *seperator_set);
int cset_cpy(char *d, char *s, char *ignore_set,char *seperator_set)
{
	int i,j;
	char c;
	int ignore, stop;
	int first_non_stop;

	i = 0;
	j = 0;
	first_non_stop = 0;
	while(1)
	{
		c = s[i];
		if(c == '\0')
			break;
		i++;
		ignore = char_is_group(c,ignore_set);
		if(ignore)
			continue;
		stop = char_is_group(c,seperator_set);
		if(stop)
		{
			if(first_non_stop == 0)			//skip leading seperator_set;
				continue;
			else
				break;
		}
		if(first_non_stop == 0)
			first_non_stop = 1;

		d[j] = c;
		j++;
		d[j] = '\0';
	}
	return j;
}

/*================================================================*/
static int find_last_seprator(char *s, int pos, char *seperator_set);
static int find_last_seprator(char *s, int pos, char *seperator_set)
{
	char c;
	int i,stop;

	for(i=pos;i>0;i--)
	{
		c = s[i];
		stop = char_is_group(c,seperator_set);
		if(stop)
			return i;
	}
	return 0;
}

static int find_next_seprator(char *s, int pos, char *seperator_set);
static int find_next_seprator(char *s, int pos, char *seperator_set)
{
	char c;
	int i,stop;

	for(i=pos;;i++)
	{
		c = s[i];
		if(c == '\0')
			break;
		stop = char_is_group(c,seperator_set);
		if(stop)
			return i;
	}
	return i;
}

int cset_get_word_len(char *s, int pos,char *seperator_set);
int cset_get_word_len(char *s, int pos,char *seperator_set)
{
	int ret, ret1,ret2;
	ret1 = find_last_seprator(s,pos,seperator_set);
	ret2 = find_next_seprator(s,pos,seperator_set);
	ret = ret2-ret1;
	return ret;
}


//ret: number chars of copy
int cset_cpy_word(char *d, char *s, int pos,char *ignore_set,char *seperator_set);
int cset_cpy_word(char *d, char *s, int pos,char *ignore_set,char *seperator_set)
{
	char *p;
	int ret;
	int start;

	start = find_last_seprator(s, pos, seperator_set);
	p = s+start+1;

	ret = cset_cpy(d, p, ignore_set, seperator_set);
	return ret;
}
/*================================================================*/
/* end of copy.c */
