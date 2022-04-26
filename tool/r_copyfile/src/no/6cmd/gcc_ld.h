/*
 * gcc_ld.h
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */

#ifndef SRC_NO_6CMD_GCC_LD_H_
#define SRC_NO_6CMD_GCC_LD_H_
/*================================================================*/
extern char *ccmd_gcc_ld_get_project_name(char *cmd,char *name);
extern int ccmd_gcc_ld_get_dest_work_dir(char *cmd);

extern int ccmd_gcc_ld_get_obj_list(char *cmd);
extern int ccmd_gcc_ld_get_lib_file_list(char *cmd,int lib_file_list);
extern int ccmd_gcc_ld_get_lib_dir_list(char *cmd,int lib_dir_list);
/*================================================================*/
#endif /* SRC_NO_6CMD_GCC_LD_H_ */
