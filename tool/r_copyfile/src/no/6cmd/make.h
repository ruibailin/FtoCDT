/*
 * make.h
 *
 *  Created on: Apr 20, 2021
 *      Author: steve
 */

#ifndef SRC_NO_6CMD_MAKE_H_
#define SRC_NO_6CMD_MAKE_H_
/*================================================================*/
extern void ccmd_make_dir(char *cmd);
extern void ccmd_make_sub_dir(char *cmd);
extern void ccmd_mv(char *cmd);

extern void ccmd_make_get_sour_work_dir(char *fp,int line);
/*================================================================*/
#endif /* SRC_NO_6CMD_MAKE_H_ */
