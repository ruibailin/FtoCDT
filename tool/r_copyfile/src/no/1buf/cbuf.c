/*
 * cbuf.c
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
#include "fifo.h"

static int need_init=0;
void cbuf_init();
void cbuf_init()
{
	need_init=0x1234;
	buf_init_fifo_buf();
}

char *cbuf_malloc(int size);
char *cbuf_malloc(int size)
{
	if(need_init == 0)
		cbuf_init();
	return buf_alloc_fifo_buf(size);
}

int cbuf_free(char *ptr);
int cbuf_free(char *ptr)
{
	return buf_free_fifo_buf(ptr);
}

/*================================================================*/
/* end of cbuf.c */
