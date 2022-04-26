/*
 * gcc_cc.h
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */

#ifndef SRC_NO_6CMD_GCC_CC_H_
#define SRC_NO_6CMD_GCC_CC_H_
/*================================================================*/
extern int ccmd_gcc_cc_get_user_inc_dir_list(char *cmd,int obj_list,int inc_dir_list);
extern int ccmd_gcc_cc_get_sys_inc_dir_list(char *cmd,int obj_list,int inc_dir_list);
extern int ccmd_gcc_cc_get_def_macro_list(char *cmd,int obj_list,int def_list);
extern int ccmd_gcc_cc_find_c_file(char *cmd,int obj_list);
extern int ccmd_gcc_cc_find_d_file(char *cmd,int obj_list,char *d_fname);
/*================================================================*/
#endif /* SRC_NO_6CMD_GCC_CC_H_ */
