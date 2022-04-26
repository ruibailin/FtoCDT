/*
 * cbuf.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
#include "1buf.h"
/*================================================================*/
void test_cbuf();
void test_cbuf()
{
	char *ptr[30];
	int i,ret;

	cbuf_init();
	for(i=0;i<30;i++)
	{
		ptr[i]=cbuf_malloc(i+4);
		if(ptr[i]==NULL)
			os_print("malloc wrong\n");
		if((i&3)==0)
		{
			ret=cbuf_free(ptr[i]);
			if(ret == 0)
				os_print("free wrong\n");
			ptr[i]=cbuf_malloc(i*4);
			if(ptr[i]==NULL)
				os_print("malloc wrong\n");
		}
	}

	ret=cbuf_free(ptr[8]);
	if(ret == 0)
		os_print("free wrong in 8\n");

	for(i=0;i<30;i++)
	{
		ret=cbuf_free(ptr[30-i-1]);
		if(ret == 0)
			os_print("free wrong\n");
		if((i&3)==0)
		{
			ptr[30-i-1]=cbuf_malloc(i*4);
			if(ptr[i]==NULL)
				os_print("malloc wrong\n");
			ret=cbuf_free(ptr[30-i-1]);
			if(ret == 0)
				os_print("free wrong\n");
		}
	}
}
/*================================================================*/
#endif
/* end of cbuf.c */
