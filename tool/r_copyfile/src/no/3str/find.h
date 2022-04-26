/*
 * find.h
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#ifndef SRC_NO_3STR_FIND_H_
#define SRC_NO_3STR_FIND_H_

/*================================================================*/
extern int cstr_find(char *lstr,char *sstr);
extern int nstr_find(char *lstr,char *sstr,int n);
extern int cstr_find_tail(char *lstr,char *sstr);
extern int nstr_find_tail(char *lstr,char *sstr,int n);
extern int cstr_find_all(char *lstr,char *sstr);
extern int nstr_find_all(char *lstr,char *sstr,int n);

extern int cstr_find_whole_word(char *lstr,char *sstr);
extern int nstr_find_whole_word(char *lstr,char *sstr,int n);
/*================================================================*/
#endif /* SRC_NO_3STR_FIND_H_ */
