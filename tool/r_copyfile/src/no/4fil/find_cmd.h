/*
 * find_cmd.h
 *
 *  Created on: Apr 29, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4FIL_FIND_CMD_H_
#define SRC_NO_4FIL_FIND_CMD_H_
/*================================================================*/
extern int cfil_cmd_next_one_or_two(void *fp,char *cmd,char *find1,char *find2);
extern int cfil_cmd_one_or_two(void *fp,char *cmd,char *find1,char *find2);

extern int cfil_cmd_next_order(void *fp,char *cmd,char *first,char *second);
extern int cfil_cmd_order_strings(void *fp,char *cmd,char *first,char *second);

extern int cfil_cmd_next_two(void *fp,char *cmd,char *find1,char *find2);
extern int cfil_cmd_two_strings(void *fp,char *cmd,char *find1,char *find2);

extern int cfil_cmd_next_one(void *fp,char *cmd,char *find);
extern int cfil_cmd_one_string(void *fp,char *cmd,char *find);
/*================================================================*/
#endif /* SRC_NO_4FIL_FIND_CMD_H_ */
