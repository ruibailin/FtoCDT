/*
 * absolute.h
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4DIR_ABSOLUTE_H_
#define SRC_NO_4DIR_ABSOLUTE_H_
/*================================================================*/
extern int cdir_is_abs_dir(char *abs);
extern int cdir_is_user_dir(char *dir);
extern int cdir_get_t_levels(char *abs);
extern int cdir_get_l_name(char *abs,int level,char *name);
extern int cdir_make_abs_dir(char *abs);
/*================================================================*/
#endif /* SRC_NO_4DIR_ABSOLUTE_H_ */
