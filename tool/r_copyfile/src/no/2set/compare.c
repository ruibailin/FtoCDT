/*
 * compare.c
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
int cset_cmp(char *d, char *s, char *ignore_set,char *stop_set);
int cset_cmp(char *d, char *s, char *ignore_set,char *stop_set)
{
	int i,j;
	char c,cc;
	int ignore, stop;
	i = 0;
	j = 0;
	while(1)
	{
		c = s[i];
		if(c == '\0')
			return 0;
		i++;
		ignore = char_is_group(c,ignore_set);
		if(ignore)
			continue;
		stop = char_is_group(c,stop_set);
		if(stop)
			return 0;
		cc = d[j];
		if(cc == '\0')
			return 0;
		j++;
		ignore = char_is_group(cc,ignore_set);
		if(ignore)
			continue;
		stop = char_is_group(cc,stop_set);
		if(stop)
			return 0;
		if(cc != c)
			return (cc-c);
	}
	return 0;
}

/*================================================================*/
/* end of compare.c */
