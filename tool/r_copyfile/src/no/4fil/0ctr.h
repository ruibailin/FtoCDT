/*
 * 0ctr.h
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */

#ifndef SRC_NO_4FIL_0CTR_H_
#define SRC_NO_4FIL_0CTR_H_
#include "../0ctr.h"
/*================================================================*/
#include "../../os/2exp.h"

#include "../1buf/1buf.h"
#include "../2chr/2chr.h"
#include "../2set/2set.h"
#include "../3str/3str.h"
#include "../4dir/4dir.h"

#ifndef NULL
#define NULL (char *)0L
#endif

#define		MIN_LINE_CHAR	256
#define 	MAX_LINE_CHAR	256*100
#define     MAX_READ_TIME	(MAX_LINE_CHAR/MIN_LINE_CHAR)
/*================================================================*/
#endif /* SRC_NO_4FIL_0CTR_H_ */
