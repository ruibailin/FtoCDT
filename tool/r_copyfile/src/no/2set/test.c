/*
 * cset.c
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */


#include "0ctr.h"

#if UNIT_TEST
/*================================================================*/

static char d[]="asd-[89]fgh jasdj: [qw :e r";
static char s[]="asdf";
static char ignore_set[]="-[0123456789]";
static char stop_set[]=": ";
static char dd[40];

void test_cset()
{
	int ret;
	ret = cset_cmp(d,s,ignore_set,stop_set);
	ret = cset_cpy(dd,d,ignore_set,stop_set);
	ret = cset_delete(d,stop_set);
	ret = cset_delete_all(d,ignore_set);
	ret = cset_find_first(d,stop_set);
	ret = cset_find_second(d,stop_set);
	ret = cset_find_last(d,stop_set);
	ret = cset_replace_one(dd,"as",'*');
	ret = cset_replace_one(ignore_set,"[]",'{');
	ret = cset_replace_all(dd,"[]: ",'*');

}

/*================================================================*/
#endif
/* end of cset.c */
