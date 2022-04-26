/*
 * string.h
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */

#ifndef SRC_NO_2CHR_STRING_H_
#define SRC_NO_2CHR_STRING_H_

/*================================================================*/
extern int char_find(char *str,char f);
extern int char_find_last(char *str,int offset,char f);
extern int char_find_next(char *str,int offset,char f);
extern int char_find_tail(char *str,char f);

extern char char_get_char(char *str,int pos);
extern char char_set_char(char *str,int pos,char s);
/*================================================================*/
#endif /* SRC_NO_2CHR_STRING_H_ */
