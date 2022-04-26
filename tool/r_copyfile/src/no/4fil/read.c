/*
 * read.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *cfil_malloc_read_buf(void);
char *cfil_malloc_read_buf()
{
	char *ptr;
	ptr = cbuf_malloc(MIN_LINE_CHAR*1);
	return ptr;
}

void cfil_free_read_buf(char *ptr);
void cfil_free_read_buf(char *ptr)
{
	cbuf_free(ptr);
}
/*================================================================*/
static int cur_num=1;
char *cfil_read_text_line(void *fp, char *line);
char *cfil_read_text_line(void *fp, char *line)
{
	int cur_pos;
	int num;		//read times
	char *str;

	num = 1;
	while(1)
	{
		cur_pos = os_ftell(fp);
		str = os_fgets(fp,line, MIN_LINE_CHAR*num);
		if(str == NULL)
		{
			cbuf_free(line);
			return NULL;
		}
		if(os_strlen(str) < MIN_LINE_CHAR*num-1)
		{
			if( cur_num < num)
				cur_num = num;
			return str;
		}
		num ++;
		if(num == MAX_READ_TIME)
	    {
			cbuf_free(line);
	    	os_alarm("line too long ,or not text file!\n");
	    	return NULL;
	    }
		os_fseek_set(fp,cur_pos);		//read again
		cbuf_free(line);
		line = cbuf_malloc(MIN_LINE_CHAR*num);
	}
	return str;
}

/*================================================================*/
/* end of read.c */
