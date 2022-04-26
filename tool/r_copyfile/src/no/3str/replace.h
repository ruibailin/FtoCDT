/*
 * replace.h
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#ifndef SRC_NO_3STR_REPLACE_H_
#define SRC_NO_3STR_REPLACE_H_

/*================================================================*/
extern int cstr_replace(char *lstr,char *ced, char *ce);
extern int cstr_replace_all(char *lstr,char *ced, char *ce);
extern int nstr_replace(char *lstr,char *ced, int n,char *ce);
extern int nstr_replace_all(char *lstr,char *ced, int n, char *ce);
/*================================================================*/
#endif /* SRC_NO_3STR_REPLACE_H_ */
