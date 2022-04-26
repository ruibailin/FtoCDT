/*
 * find.h
 *
 *  Created on: Apr 29, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4FIL_FIND_H_
#define SRC_NO_4FIL_FIND_H_
/*================================================================*/
extern int cfil_find_next_one_or_two(void *fp,char *find1,char *find2);
extern int cfil_find_one_or_two(void *fp,char *find1,char *find2);

extern int cfil_find_next_order(void *fp,char *first,char *second);
extern int cfil_find_order_strings(void *fp,char *first,char *second);

extern int cfil_find_next_two(void *fp,char *find1,char *find2);
extern int cfil_find_two_strings(void *fp,char *find1,char *find2);

extern int cfil_find_next_one(void *fp,char *find);
extern int cfil_find_one_string(void *fp,char *find);
/*================================================================*/
#endif /* SRC_NO_4FIL_FIND_H_ */
