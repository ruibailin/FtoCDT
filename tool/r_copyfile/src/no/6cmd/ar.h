/*
 * ar.h
 *
 *  Created on: May 13, 2021
 *      Author: steve
 */

#ifndef SRC_NO_6CMD_AR_H_
#define SRC_NO_6CMD_AR_H_
/*================================================================*/
extern char *ccmd_ar_get_project_name(char *cmd,char *name);
extern int ccmd_ar_get_dest_work_dir(char *cmd);

extern int ccmd_is_ar(char *cmd);
extern void ccmd_ar(char *cmd);
extern void ccmd_attr(char *cmd);
extern int ccmd_find_ar_line(void *fp,int start_line);
/*================================================================*/
#endif /* SRC_NO_6CMD_AR_H_ */
