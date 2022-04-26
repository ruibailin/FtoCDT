/*
 * fifo.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if FIFO_CHAR_BUF
/*================================================================*/
static	char fifo_buffer[MAX_FIFO_SIZE];
static  char *buf_pointer[MAX_FIFO_DEPTH];
static  int  pointer_index=0;

int record_max_index=0;
/*================================================================*/
void buf_init_fifo_buf()
{
	pointer_index=0;
	buf_pointer[0]=&fifo_buffer[0];
}

char *buf_alloc_fifo_buf(int size);
char *buf_alloc_fifo_buf(int size)
{
	char *cur;
	int used;


	cur = buf_pointer[pointer_index];

	used = cur-buf_pointer[0];

	used &= ~0x3;		//remove flag of delay free

	size &= ~0x3;
	size += 4;

	if((MAX_FIFO_SIZE-1) < (used+size) )
	{
		os_panic("FIFO BUFFER IS SMALL! %d, %d \n",used,size);
		return (char *)0L;
	}

	if((MAX_FIFO_DEPTH-1) < (pointer_index+1) )
	{
		os_panic("FIFO BUFFER DEPTH IS SMALL!  %d \n",pointer_index);
		return (char *)0L;
	}

	pointer_index++;

	if(pointer_index > record_max_index)
		record_max_index = pointer_index;
	buf_pointer[pointer_index]= cur+size;
	return cur;
}

/*================================================================*/
static int find_buf_ptr(char *ptr);
static int find_buf_ptr(char *ptr)
{
	int i;

	for(i=0;i<pointer_index;i++)
	{
		if(ptr != buf_pointer[i])
			continue;
		buf_pointer[i] = (char *)((long)buf_pointer[i]|0x01L);			//mark for free later
//		os_printf("Delay to free buf ptr!  %d  %d\n",i,pointer_index);
		return 1;
	}
	os_alarm("Invalid Buffer pointer!  %d \n",pointer_index);
	return 0;
}

static int free_buf_ptr(void);
static int free_buf_ptr()
{
	int num;

	num = 0;
	while(1)
	{
		if( ((long)buf_pointer[pointer_index-1] & 0x01L) ==0)
			break;
		buf_pointer[pointer_index-1] = (char *)((long)buf_pointer[pointer_index-1] & (~0x01L));
		buf_pointer[pointer_index]=(char *)0L;  //find mark to free
		pointer_index --;
//		os_printf("Free to delay buf ptr!  %d \n",pointer_index);
		num++;
	}
	return num;
}

int buf_free_fifo_buf(char *ptr);
int buf_free_fifo_buf(char *ptr)
{
	char *cur;
	int ret;

	cur = buf_pointer[pointer_index-1];
	if(cur != ptr)
	{
		ret = find_buf_ptr(ptr);
		return ret;
	}
	buf_pointer[pointer_index]=(char *)0L;
	pointer_index --;
	ret = free_buf_ptr();
	return ret;
}

/*================================================================*/
#endif
/* end of fifo.c */
