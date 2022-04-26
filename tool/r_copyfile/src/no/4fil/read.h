/*
 * read.h
 *
 *  Created on: Apr 18, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4FIL_READ_H_
#define SRC_NO_4FIL_READ_H_
/*================================================================*/
extern char *cfil_malloc_read_buf(void);
extern void cfil_free_read_buf(char *ptr);

extern char *cfil_read_text_line(void *fp, char *line);
/*================================================================*/
#endif /* SRC_NO_4FIL_READ_H_ */
