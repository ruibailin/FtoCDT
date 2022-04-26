/*
 * ins.h
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#ifndef SRC_NO_3STR_INS_H_
#define SRC_NO_3STR_INS_H_

/*================================================================*/
extern void cstr_append(char *s1,char *s2);
extern void cstr_before(char *s1,char *s2);
extern void cstr_insert(char *s1,int offset,char *s2);
extern void nstr_append(char *s1,char *s2,int n);
extern void nstr_before(char *s1,char *s2,int n);
extern void nstr_insert(char *s1,int offset,char *s2,int n);
/*================================================================*/
#endif /* SRC_NO_3STR_INS_H_ */
