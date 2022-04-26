/*
 * batch.h
 *
 *  Created on: Apr 17, 2021
 *      Author: steve
 */

#ifndef SRC_NO_5LIS_BATCH_H_
#define SRC_NO_5LIS_BATCH_H_

/*================================================================*/
extern void list_save_name(int list, char *save);
extern int list_search_name(int list, char *fname);
extern void list_print_name(int list);
extern void list_copy_file(int list);
extern void list_clr_record(int list);
extern int list_add_record(int list,char *name);
extern char *list_find_head_file(int dir_list,char *h_sname,char *h_fname);
/*================================================================*/
#endif /* SRC_NO_5LIS_BATCH_H_ */
