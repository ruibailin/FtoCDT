/*
 * cstr.c
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
#include "3str.h"
/*================================================================*/
extern int cstr_cmp(char *s1,char *s2);
extern int cstr_cmp_offset(char *s1,int offset,char *s2);
extern int cstr_cmp_tail(char *s1,char *s2);
extern int cstr_cmp_tail_offset(char *s1,int offset,char *s2);

static char ss1[]="adb1234567890adb1234567890adb1234567890";
static char ss2[]="adb";
static char ss33[]="adb";
static int test_cmp(void);
static int test_cmp(void)
{
	int ret;
	ret=cstr_equal(ss2,ss33);
	ret=cstr_cmp(ss1,ss2);
	ret=cstr_cmp_offset(ss1,12,ss2);
	ret=cstr_cmp_tail(ss2,ss1);
	ret=cstr_cmp_tail_offset(ss1,12,ss2);
	return ret;
}

/*================================================================*/
int cstr_cut(char *s1,int num);
int cstr_cut_offset(char *s1,int offset,int num);
int cstr_cut_tail(char *s1,int num);

static int test_cut(void);
static int test_cut(void)
{
	int ret;
	ret=cstr_cut(ss1,3);
	ret=cstr_cut_offset(ss1,3, 3);
	ret=cstr_cut_tail(ss1,12);
	return ret;
}
/*================================================================*/
extern int cstr_find(char *lstr,char *sstr);
extern int cstr_find_all(char *lstr,char *sstr);
static int test_find(void);
static int test_find()
{
	int ret;
	ret=cstr_find(ss1,ss2);
	ret=cstr_find_all(ss1,ss2);
	return ret;
}
/*================================================================*/
extern int cstr_delete(char *lstr,char *sstr);
extern int cstr_delete_all(char *lstr,char *sstr);
static int test_delete(void);
static int test_delete()
{
	int ret;
	ret=cstr_delete(ss1,ss2);
	ret=cstr_delete_all(ss1,ss2);
	return ret;
}
/*================================================================*/
extern void cstr_append(char *s1,char *s2);
extern void cstr_insert(char *s1,int offset,char *s2);
static char buf[128];
static void test_append(void);
static void test_append()
{
	buf[0]='\0';
	cstr_append(buf,ss1);
	cstr_append(buf,ss2);
	cstr_before(buf,ss2);
	cstr_delete(buf,ss2);
	cstr_insert(buf,4,ss2);
	cstr_insert(buf,13,ss2);
}


/*================================================================*/
extern int cstr_replace(char *lstr,char *ced, char *ce);
extern int cstr_replace_all(char *lstr,char *ced, char *ce);

static char ss3[]="tem";
static int test_replace(void);
static int test_replace()
{
	int ret;

	ret=cstr_replace(buf,ss2,ss3);
	ret=cstr_replace_all(buf,ss2,ss3);
	return ret;
}
/*================================================================*/
void test_cstr(void);
void test_cstr()
{

	test_cmp();
	test_cut();
	test_find();
	test_delete();
	test_append();
	test_replace();
}

/*================================================================*/
#endif
/* end of cstr.c */
