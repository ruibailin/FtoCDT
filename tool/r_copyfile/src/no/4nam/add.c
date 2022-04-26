/*
 * add.c
 *
 *  Created on: May 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *name_add_root_into_path(char *root, char *path);
char *name_add_root_into_path(char *root, char *path)
{
	int i;

	i = cstr_find(path,root);
	if(i >= 0)						//path name already include root
		return path;

	i = os_strlen(root);
	if(root[i-1] != DIR_SPERATOR)
	{
		cstr_append(root,"/");
	}

	if(path[0] == DIR_SPERATOR)
	{
		cstr_cut(path,1);
	}
	cstr_before(path,root);

	i = os_strlen(path);
	if(path[i-1] != DIR_SPERATOR)
	{
		cstr_append(path,"/");
	}
	return path;
}


char *name_add_root_with_path(char *root, char *path);
char *name_add_root_with_path(char *root, char *path)
{
	if(path[0] == DIR_SPERATOR)
		cstr_append(root,path+1);
	else
		cstr_append(root,path);
	return root;
}


char *name_add_root_into_file(char *root, char *file);
char *name_add_root_into_file(char *root, char *file)
{
	int i;

	i = cstr_find(file,root);
	if(i >= 0)						//file name already include root
		return file;

	i = os_strlen(root);
	if(root[i-1] != DIR_SPERATOR)
	{
		cstr_append(root,"/");
	}

	if(file[0] == DIR_SPERATOR)
	{
		cstr_cut(file,1);
	}
	cstr_before(file,root);

	return file;
}

char *name_add_root_with_file(char *root, char *file);
char *name_add_root_with_file(char *root, char *file)
{
	if(file[0] == DIR_SPERATOR)
		cstr_append(root,file+1);
	else
		cstr_append(root,file);
	return root;
}
/*================================================================*/
/* end of add.c */
