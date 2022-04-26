/*
 * fifo.h
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#ifndef SRC_NO_1BUF_FIFO_H_
#define SRC_NO_1BUF_FIFO_H_
#include "1imp.h"
/*================================================================*/
extern void buf_init_fifo_buf();
extern char *buf_alloc_fifo_buf(int size);
extern int buf_free_fifo_buf(char *ptr);
/*================================================================*/
#endif /* SRC_NO_1BUF_FIFO_H_ */
