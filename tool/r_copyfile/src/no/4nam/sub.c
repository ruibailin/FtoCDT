/*
 * sub.c
 *
 *  Created on: May 17, 2021
 *      Author: steve
 */


#include "0ctr.h"
/*================================================================*/
char *name_sub_root_from_path(char *root, char *path);
char *name_sub_root_from_path(char *root, char *path)
{
	int i;

	i = cstr_find(path,root);
	if(i < 0)						//path name dosen't include root
		return path;

	i = os_strlen(root);
	cstr_cut(path,i-1);				//save '/'
	return path;
}

char *name_cut_root_from_file(char *root, char *file);
char *name_cut_root_from_file(char *root, char *file)
{
	int i;

	i = cstr_find(file,root);
	if(i < 0)						//path name dosen't include root
		return file;

	i = os_strlen(root);
	cstr_cut(file,i);				//save '/'
	return file;
}

/*================================================================*/
/* end of sub.c */
