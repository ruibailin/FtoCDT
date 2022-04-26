/*
 * basic.h
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */

#ifndef SRC_NO_5LIS_BASIC_H_
#define SRC_NO_5LIS_BASIC_H_
/*================================================================*/
extern void list_ini_list(void);
extern int list_new_list(void);
extern void list_free_list(int list);

extern int list_alloc_list_node(int list);
extern int list_free_list_node(int list);
extern int list_free_this_node(int node);
extern int list_get_next(int list);

extern char *list_get_name(int node);
extern void list_set_name(int node,char *name);
/*================================================================*/
#endif /* SRC_NO_5LIS_BASIC_H_ */
