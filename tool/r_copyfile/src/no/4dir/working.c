/*
 * working.c
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *dir_malloc_name_buf(void);
char *dir_malloc_name_buf()
{
	char *ptr;
	ptr = cbuf_malloc(MAX_DIR_LEN);
	return ptr;
}

void dir_free_name_buf(char *ptr);
void dir_free_name_buf(char *ptr)
{
	cbuf_free(ptr);
}

char *cdir_malloc_name_buf(void);
char *cdir_malloc_name_buf()
{
	char *ptr;
	ptr = cbuf_malloc(MAX_DIR_LEN);
	return ptr;
}

void cdir_free_name_buf(char *ptr);
void cdir_free_name_buf(char *ptr)
{
	cbuf_free(ptr);
}
/*================================================================*/
static char *dir_base_sour_name=NULL;
static int dir_base_sour_len;
char *cdir_get_base_sour_name(void);
char *cdir_get_base_sour_name()
{
	return dir_base_sour_name;
}

int cdir_get_base_sour_len(void);
int cdir_get_base_sour_len()
{
	return dir_base_sour_len;
}

int cdir_is_sour_file(char *sfname);
int cdir_is_sour_file(char *sfname)
{
	int ret;
	int len;
	len = os_strlen(sfname);
	if(len < (dir_base_sour_len))
		return 0;
	ret = cstr_cmp(sfname,dir_base_sour_name);
	if (ret == 0)
		return 1;
	return 0;
}

char *cdir_set_base_sour_name(char *name);
char *cdir_set_base_sour_name(char *name)
{
	int len;
	len = os_strlen(name);
	if(len >= MAX_DIR_LEN)
	{
		os_panic("DIR Too Long");
		return NULL;
	}
	dir_base_sour_len = len;
	if(dir_base_sour_name == NULL)
		dir_base_sour_name = dir_malloc_name_buf();
	if(dir_base_sour_name == NULL)
		return dir_base_sour_name;
	os_strcpy(dir_base_sour_name,name);
	return dir_base_sour_name;
}
int cdir_has_base_sour_path(char *name);
int cdir_has_base_sour_path(char *name)
{
	int ret;
	ret = cstr_cmp(name, dir_base_sour_name);
	if(ret==0)
		return 1;
	else
		return 0;
}


void cdir_copy_base_sour_path(char *name);
void cdir_copy_base_sour_path(char *name)
{
	cstr_copy_to_1(name, dir_base_sour_name);
}

/*================================================================*/
static char *dir_base_dest_name=NULL;
static int dir_base_dest_len;
char *cdir_get_base_dest_name(void);
char *cdir_get_base_dest_name()
{
	return dir_base_dest_name;
}


int cdir_get_base_dest_len(void);
int cdir_get_base_dest_len()
{
	return dir_base_dest_len;
}

char *cdir_set_base_dest_name(char *name);
char *cdir_set_base_dest_name(char *name)
{
	int len;
	len = os_strlen(name);
	if(len >= MAX_DIR_LEN)
	{
		os_panic("DIR Too Long");
		return NULL;
	}
	dir_base_dest_len = len;
	if(dir_base_dest_name == NULL)
		dir_base_dest_name = dir_malloc_name_buf();
	if(dir_base_dest_name == NULL)
		return dir_base_dest_name;
	os_strcpy(dir_base_dest_name,name);
	return dir_base_dest_name;
}

/*================================================================*/
static char *dir_work_sour_name=NULL;
static int dir_work_sour_len;
char *cdir_get_work_sour_name(void);
char *cdir_get_work_sour_name()
{
	return dir_work_sour_name;
}
int cdir_get_work_sour_len(void);
int cdir_get_work_sour_len()
{
	return dir_work_sour_len;
}

char *cdir_set_work_sour_name(char *name);
char *cdir_set_work_sour_name(char *name)
{
	int len;
	int ret;

	len = os_strlen(name);
	dir_work_sour_len = len;
	if(len >= MAX_DIR_LEN)
	{
		os_panic("DIR Too Long");
		return NULL;
	}
	if(dir_work_sour_name == NULL)
		dir_work_sour_name = dir_malloc_name_buf();
	if(dir_work_sour_name == NULL)
		return dir_work_sour_name;

	ret = cdir_is_sour_file(name);
	if(ret)
	{
		dir_work_sour_len = len;
		os_strcpy(dir_work_sour_name,name);
//		os_printf("new work sour dir:%s \n",dir_work_sour_name);
	}
	else
	{
		dir_work_sour_len = dir_base_sour_len;
		os_strcpy(dir_work_sour_name,dir_base_sour_name);
		os_alarm("wrong new work sour dir:%s \n",name);
	}
	return dir_work_sour_name;
}

int cdir_has_work_sour_path(char *name);
int cdir_has_work_sour_path(char *name)
{
	int ret;
	ret = cstr_cmp(name, dir_work_sour_name);
	if(ret==0)
		return 1;
	else
		return 0;
}

void cdir_copy_work_sour_path(char *name);
void cdir_copy_work_sour_path(char *name)
{
	cstr_copy_to_1(name, dir_work_sour_name);
}


static char *dir_work_dest_name=NULL;
static int dir_work_dest_len;
char *cdir_get_work_dest_name(void);
char *cdir_get_work_dest_name()
{
	return dir_work_dest_name;
}

int cdir_get_work_dest_len(void);
int cdir_get_work_dest_len()
{
	return dir_work_dest_len;
}

char *cdir_set_work_dest_name(char *name);
char *cdir_set_work_dest_name(char *name)
{
	int len;
	len = os_strlen(name);
	dir_work_dest_len = len;
	if(len >= MAX_DIR_LEN)
	{
		os_panic("DIR Too Long");
		return NULL;
	}
	if(dir_work_dest_name == NULL)
		dir_work_dest_name = dir_malloc_name_buf();
	if(dir_work_dest_name == NULL)
		return dir_work_dest_name;
	os_strcpy(dir_work_dest_name,name);
	os_printf("new work dest dir:%s \n",dir_work_dest_name);
	return dir_work_dest_name;
}

/*================================================================*/
char *cdir_make_sour_file_fname(char *fname, char *sname);
char *cdir_make_sour_file_fname(char *fname, char *sname)
{
	int ret;

	ret = cstr_cmp(sname,dir_base_sour_name);
	if(ret == 0)				//no need change;
	{
		os_strcpy(fname, sname);
		return fname;
	}
	os_strcpy(fname, dir_work_sour_name);

	cdir_rel_to_ful(fname, sname);
	cdir_del_dash_dot(fname);
//	os_printf("work source file:%s --> %s \n",sname,fname);
	return fname;
}

char *cdir_make_sour_dir_fname(char *fname, char *sname);
char *cdir_make_sour_dir_fname(char *fname, char *sname)
{
	int len;
	len = cstr_cmp(sname,dir_base_sour_name);
	if(len == 0)
	{
		os_strcpy(fname, sname);
		return fname;						//already full name,don't make.
	}
	os_strcpy(fname, dir_work_sour_name);
	cdir_rel_to_ful(fname, sname);
	len = os_strlen(fname);
	if(fname[len-1] != '/')
	{
		fname[len] = '\0';
		fname[len-1] = '/';
	}
	cdir_del_dash_dot(fname);
//	os_printf("work source dir:%s --> %s \n",sname,fname);
	return fname;
}


char *cdir_make_dest_work_dir(char *exe_lib);
char *cdir_make_dest_work_dir(char *exe_lib)
{
	char *ful;
	if(dir_work_dest_name == NULL)
		dir_work_dest_name = dir_malloc_name_buf();
	if(dir_work_dest_name == NULL)
		return dir_work_dest_name;

	ful = dir_malloc_name_buf();
	os_strcpy(ful, dir_base_dest_name);
	cdir_ful_to_abs(ful);
	cdir_rel_to_ful(ful, "/src/");
	cdir_rel_to_ful(ful, exe_lib);
	cdir_ful_to_abs(ful);
	cdir_rel_to_ful(ful, "/src/no/");
	cdir_ful_to_abs(ful);
	cdir_set_work_dest_name(ful);
	cbuf_free(ful);

//	os_printf("work dest dir:%s \n",ful);
	return dir_work_dest_name;
}

char *cdir_change_sour_to_dest(char *sfname,char *dfname);
char *cdir_change_sour_to_dest(char *sfname,char *dfname)
{
	char *s;
	os_strcpy(dfname,dir_work_dest_name);
	s = &sfname[dir_base_sour_len];
	cdir_rel_to_ful(dfname, s);
//	os_printf("file:%s --> %s \n",sfname,dfname);
	return dfname;
}
/*================================================================*/
/* end of working.c */
