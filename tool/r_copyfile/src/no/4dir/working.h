/*
 * working.h
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4DIR_WORKING_H_
#define SRC_NO_4DIR_WORKING_H_
/*================================================================*/
extern char *dir_malloc_name_buf(void);
extern void dir_free_name_buf(char *ptr);
extern char *cdir_malloc_name_buf(void);
extern void cdir_free_name_buf(char *ptr);

extern int cdir_is_sour_file(char *sfname);

extern int cdir_get_base_sour_len(void);
extern char *cdir_get_base_sour_name(void);
extern char *cdir_set_base_sour_name(char *name);
extern int cdir_has_base_sour_path(char *name);
extern void cdir_copy_base_sour_path(char *name);

extern int cdir_get_base_dest_len(void);
extern char *cdir_get_base_dest_name(void);
extern char *cdir_set_base_dest_name(char *name);


extern int cdir_get_work_sour_len(void);
extern char *cdir_get_work_sour_name(void);
extern char *cdir_set_work_sour_name(char *name);
extern int cdir_has_work_sour_path(char *name);
extern void cdir_copy_work_sour_path(char *name);

extern int cdir_get_work_dest_len(void);
extern char *cdir_get_work_dest_name(void);
extern char *cdir_set_work_dest_name(char *name);

extern char *cdir_make_sour_file_fname(char *fname, char *sname);
extern char *cdir_make_sour_dir_fname(char *fname, char *sname);
extern char *cdir_make_dest_work_dir(char *exe_lib);
extern char *cdir_change_sour_to_dest(char *sfname,char *dfname);
/*================================================================*/
#endif /* SRC_NO_4DIR_WORKING_H_ */
