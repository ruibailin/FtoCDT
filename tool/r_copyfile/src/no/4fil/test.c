/*
 * test.c
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
/*================================================================*/
#include "4fil.h"
static char sf[]="/home/steve/code/code/board/make_gtk.txt";
static char df[]="/home/steve/code/code/emulator/tool/r_gtkwave/tmp/old/k.txt";

static void test_read(char *sn)
{
	char *str,*line;
	void *fp;
	int pos;
	int num;

    fp = os_fopen(sn, "r");
    if (fp == NULL)
    {
    	os_printf("something is wrong again!\n");
        os_fclose(df);
    	return;
    }


    line = cbuf_malloc(MAX_LINE_CHAR);

    cfil_goto_text_line(fp,20);
    str =  cfil_read_text_line(fp, line);
    os_printf("Read: %s\n",str);

    cfil_goto_text_line(fp,20);
    str =  cfil_read_text_line(fp, line);
    os_printf("Read: %s\n",str);

    cfil_goto_text_line(fp,21);
    str =  cfil_read_text_line(fp, line);
    os_printf("Read: %s\n",str);

    cfil_goto_text_line(fp,21);
    str =  cfil_read_text_line(fp, line);
    os_printf("Read: %s\n",str);

    cfil_goto_text_line(fp,20);
    str =  cfil_read_text_line(fp, line);
    os_printf("Read: %s\n",str);

    cfil_goto_text_line(fp,20);
    str =  cfil_read_text_line(fp, line);
    os_printf("Read: %s\n",str);

    cbuf_free(line);
    os_fclose(fp);
}

void test_file()
{
	int ret;
	test_read(sf);
	ret = cfil_copy_text_file(sf,df);
}
/*================================================================*/
#endif
/* end of test.c */
