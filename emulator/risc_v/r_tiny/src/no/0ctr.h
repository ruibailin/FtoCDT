
/*------------------------------------
 * 0ctr.h
 * Create:  2021-01-31
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 *
 *
 *
 *
 *------------------------------------
 */

#ifndef NO_0CTR_H_
#define NO_0CTR_H_
/*================================================================*/
#define CONFIG_VERSION	"2018-09-23"
#define CONFIG_SDL		1
#define CONFIG_INT128	1
#define	CONFIG_X86EMU	1

#ifdef CONFIG_INT128
#define CONFIG_RISCV_MAX_XLEN 128
#else
#define CONFIG_RISCV_MAX_XLEN 64
#endif


#undef 	CONFIG_WIN32
#if CONFIG_WIN32
#undef CONFIG_FS_NET
#endif
#undef CONFIG_SLIRP

#define _FILE_OFFSET_BITS 	64
#define _LARGEFILE_SOURCE	1
#define MAX_XLEN 			32
#define _GNU_SOURCE

/*================================================================*/
#endif
/* end of 0ctr.h */
