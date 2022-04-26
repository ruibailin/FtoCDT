/*
 * char.c
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
/*================================================================*/
#include "2chr.h"

static char goto_buf[]="gcc  -I. -I../..     -I./.. -I./../..   -I./../liblzma     -I./fst -I./../../contrib/rtlbrowse -g -O2   -MT evcd2vcd.o -MD -MP -MF .deps/evcd2vcd.Tpo -c -o evcd2vcd.o evcd2vcd.c";
static void test_goto(void);
static void test_goto()
{
	char *p;
	int i,j;
	p = goto_buf;
	j=0;
	while(1)
	{
		i = os_strlen(p);
		if(i == 0)
			break;
		p = char_goto_first_c(p,' ');
		os_printf("%d:%s\n",j,p);
		p = char_goto_first_no_c(p,' ');
		os_printf("%d:%s\n",j,p);
		j++;
	}


	p = goto_buf+120;
	j++;
	p = char_goto_last_c(p,' ');
	os_printf("%d:%s\n",j,p);
	j++;
	p = char_goto_last_no_c(p,' ');
	os_printf("%d:%s\n",j,p);
	j++;
	p = char_goto_last_c(p,' ');
	os_printf("%d:%s\n",j,p);
	j++;
	p = char_goto_last_no_c(p,' ');
	os_printf("%d:%s\n",j,p);

	p = goto_buf+120;
	j++;
	p = char_goto_last_c(p,' ');
	os_printf("%d:%s\n",j,p);
	j++;
	p = char_goto_last_c(p,' ');
	os_printf("%d:%s\n",j,p);

	p = goto_buf+120;
	j++;
	p = char_goto_last_no_c(p,' ');
	os_printf("%d:%s\n",j,p);
	j++;
	p = char_goto_last_no_c(p,' ');
	os_printf("%d:%s\n",j,p);

	p = goto_buf;
	j++;
	while(1)
	{
		i = os_strlen(p);
		if(i == 0)
			break;
		p = char_goto_c_string(p,' ');
		os_printf("%d:%s\n",j,p);
		p = char_goto_no_c_string(p,' ');
		os_printf("%d:%s\n",j,p);
		j++;
	}
}

static void test_find(void);
static void test_find()
{
	char *p;
	int i,j;

	p = goto_buf;
	while(1)
	{
		i = os_strlen(p);
		if(i == 0)
			break;
		p += char_find_first_no_c(p,' ');
		j = char_find_no_c_len(p,' ');
		os_printf("%d:%s\n",j,p);

		p += char_find_first_c(p,' ');
		j = char_find_c_len(p,' ');
		os_printf("%d:%s\n",j,p);
	}

	while(1)
	{
		i = os_strlen(p);
		if(i == 0)
			break;
		p += char_find_first_no_c(p,' ');
		j = char_find_c_len(p,' ');
		os_printf("%d:%s\n",j,p);

		p += char_find_first_c(p,' ');
		j = char_find_no_c_len(p,' ');
		os_printf("%d:%s\n",j,p);
	}
}

extern char *char_copy_c_string(char *d, char *s,char f);
extern char *char_copy_no_c_string(char *d, char *s,char f);

static char copy_buf[40];
static void test_copy(void);
static void test_copy()
{
	char *p;
	int i,j;

	p = goto_buf;
	j=0;
	while(1)
	{
		i = os_strlen(p);
		if(i == 0)
			break;
		p = char_copy_c_string(copy_buf,p,' ');
		os_printf("%d:%s\n",j,p);
		j++;
		p = char_copy_no_c_string(copy_buf,p,' ');
		os_printf("%d:%s\n",j,p);
		j++;
	}
}


static char str[]="0123456789qwertyuiop";
static void test_string(void);
static void test_string()
{
	int ret;
	char c;
	ret = char_find(str,'8');
	ret = char_find_tail(str, 'o');

	c = char_get_char(str,4);
	char_copy_no_c_string(copy_buf,str,c);
	c = char_set_char(str,4, 'p');
	char_copy_no_c_string(copy_buf,str,c);
}

static void test_group(void);
static void test_group()
{
	int ret;
	char c;
	ret = char_is_digit('8');
	ret = char_is_digit('c');
}

void test_char()
{
	test_goto();
	test_find();
	test_copy();
	test_string();
	test_group();
}
/*================================================================*/
#endif
/* end of char.c */
