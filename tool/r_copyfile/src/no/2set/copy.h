/*
 * copy.h
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */

#ifndef SRC_NO_2SET_COPY_H_
#define SRC_NO_2SET_COPY_H_
/*================================================================*/
extern char *cset_copy_s_string(char *d, char *s,char *set);
extern char *cset_copy_no_s_string(char *d, char *s,char *set);

extern int cset_cpy(char *d, char *s, char *ignore_set,char *stop_set);
extern int cset_get_word_len(char *s, int pos,char *stop_set);
extern int cset_cpy_word(char *d, char *s, int pos,char *ignore_set,char *stop_set);
/*================================================================*/
#endif /* SRC_NO_2SET_COPY_H_ */
