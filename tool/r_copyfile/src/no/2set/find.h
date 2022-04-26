/*
 * find.h
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */

#ifndef SRC_NO_2SET_FIND_H_
#define SRC_NO_2SET_FIND_H_
/*================================================================*/
extern int cset_find_first_s(char *str,char *set);
extern int cset_find_first_no_s(char *str,char *set);
extern int cset_find_s_len(char *str,char *set);
extern int cset_find_no_s_len(char *str,char *set,char f);

extern int cset_find_first(char *str, char *set);
extern int cset_find_second(char *str, char *set);
extern int cset_find_last(char *str, char *set);
/*================================================================*/
#endif /* SRC_NO_2SET_FIND_H_ */
