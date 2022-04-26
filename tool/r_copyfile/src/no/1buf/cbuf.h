/*
 * cbuf.h
 *
 *  Created on: Apr 14, 2021
 *      Author: steve
 */

#ifndef SRC_NO_1BUF_CBUF_H_
#define SRC_NO_1BUF_CBUF_H_

/*================================================================*/
extern void cbuf_init();
extern char *cbuf_malloc(int size);
extern int cbuf_free(char *ptr);
/*================================================================*/
#endif /* SRC_NO_1BUF_CBUF_H_ */
