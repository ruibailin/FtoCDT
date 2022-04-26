/*
 * gcc.h
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */

#ifndef SRC_NO_6CMD_GCC_H_
#define SRC_NO_6CMD_GCC_H_
/*================================================================*/
extern int ccmd_is_gcc(char *cmd);
extern int ccmd_is_gcc_cc(char *cmd);
extern int ccmd_is_gcc_ld(char *cmd);

extern int ccmd_find_gcc_cc_line(void *fp,int start_line);
extern int ccmd_find_gcc_ld_line(void *fp,int start_line);

extern void ccmd_gcc_cc(char *cmd,int obj_list);
extern void ccmd_gcc_ld(char *cmd);
extern void ccmd_gcc(char *cmd,int obj_list);
/*================================================================*/
#endif /* SRC_NO_6CMD_GCC_H_ */
