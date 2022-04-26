/*
 * 0ctr.h
 *
 *  Created on: Apr 13, 2021
 *      Author: steve
 */

#ifndef SRC_NO_1BUF_0CTR_H_
#define SRC_NO_1BUF_0CTR_H_
#include "../0ctr.h"
/*================================================================*/
#define FIFO_CHAR_BUF 			1
#define MAX_FIFO_SIZE			512*1024
#define MAX_FIFO_DEPTH			2048

#define RANDOM_CHAR_BUF			0
#define MAX_RANDOM_SIZE			1024*1024
#define MAX_RANDOM_NUM			128

#include "../../os/2exp.h"

#ifndef NULL
#define NULL (char *)0L
#endif
/*================================================================*/
#endif /* SRC_NO_1BUF_0CTR_H_ */
