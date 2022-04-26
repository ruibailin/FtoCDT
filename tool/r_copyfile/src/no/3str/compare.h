/*
 * cmp.h
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#ifndef SRC_NO_3STR_CMP_H_
#define SRC_NO_3STR_CMP_H_

/*================================================================*/
extern int cstr_equal(char *s1,char *s2);
extern int cstr_cmp(char *s1,char *s2);
extern int nstr_cmp(char *s1,char *s2,int n);
extern int cstr_cmp_offset(char *s1,int offset,char *s2);
extern int nstr_cmp_offset(char *s1,int offset,char *s2,int n);
extern int cstr_cmp_tail(char *s1,char *s2);
extern int nstr_cmp_tail(char *s1,char *s2,int n);
extern int cstr_cmp_tail_offset(char *s1,int offset,char *s2);
extern int nstr_cmp_tail_offset(char *s1,int offset,char *s2,int n);
/*================================================================*/
#endif /* SRC_NO_3STR_CMP_H_ */
