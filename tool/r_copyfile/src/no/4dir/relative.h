/*
 * relative.h
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4DIR_RELATIVE_H_
#define SRC_NO_4DIR_RELATIVE_H_

/*================================================================*/
extern int cdir_is_rel_dir(char *dir);
extern int cdir_del_dash_dot(char *dir);
extern int cdir_ful_to_abs(char *dir);
extern int cdir_rel_to_ful(char *ful, char *rel);
/*================================================================*/
#endif /* SRC_NO_4DIR_RELATIVE_H_ */
