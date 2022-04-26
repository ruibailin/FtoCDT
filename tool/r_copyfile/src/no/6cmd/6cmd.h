/*
 * 6cmd.h
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */

#ifndef SRC_NO_6CMD_6CMD_H_
#define SRC_NO_6CMD_6CMD_H_
/*================================================================*/

#include "ar.h"

extern void ccmd_cat(char *cmd);
extern void ccmd_cp(char *cmd);

#include "gcc.h"
#include "gcc_cc.h"
#include "gcc_ld.h"
#include "line.h"
#include "make.h"


extern void ccmd_ranlib(char *cmd);
extern void ccmd_rm(char *cmd);

extern void ccmd_shell(char *cmd);
/*================================================================*/
#endif /* SRC_NO_6CMD_6CMD_H_ */
