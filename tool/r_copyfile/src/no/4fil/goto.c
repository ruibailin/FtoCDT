/*
 * goto.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"

#include "read.h"
/*================================================================*/
//return: goto the address successfully,if = line,
int cfil_goto_text_line(void *fp,int line);
int cfil_goto_text_line(void *fp,int line)
{
	char *str,*buf;
	int num;

    num =0;
    os_fseek_set(fp,0);

    buf = cbuf_malloc(MIN_LINE_CHAR);
    while (1)
     {
         if(num == line)
         {
             cbuf_free(buf);
             break;
         }
         if(os_feof(fp))
         {
             cbuf_free(buf);
             return -1;
         }
         str =  cfil_read_text_line(fp, buf);
         buf = str;
         if (str == NULL)
             return -1;
         num ++;
     }
    return num;
}


int cfil_goto_next_line(void *fp,int line);
int cfil_goto_next_line(void *fp,int line)
{
	char *str,*buf;
	int num;

    num =0;
    buf = cbuf_malloc(MIN_LINE_CHAR);
    while (1)
     {
         if(num == line)
         {
             cbuf_free(buf);
             break;
         }
         if(os_feof(fp))
         {
             cbuf_free(buf);
             return -1;
         }
         str =  cfil_read_text_line(fp, buf);
         buf = str;
         if (str == NULL)
             return -1;
         num ++;
     }
     return num;
}
/*================================================================*/
/* end of goto.c */
