
/*------------------------------------
 * cutils.c
 * Create:  2021-03-05
 * Author:  Steve Rui
 *------------------------------------
 * Record:
 *
 *
 *
 *
 *------------------------------------
 */

#include "../0ctr.h"

/*================================================================*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>
#include <stdarg.h>
#include <sys/time.h>
#include <ctype.h>

#include "cutils.h"

void *mallocz(size_t size)
{
    void *ptr;
    ptr = malloc(size);
    if (!ptr)
        return NULL;
    memset(ptr, 0, size);
    return ptr;
}

void pstrcpy(char *buf, int buf_size, const char *str)
{
    int c;
    char *q = buf;

    if (buf_size <= 0)
        return;

    for(;;) {
        c = *str++;
        if (c == 0 || q >= buf + buf_size - 1)
            break;
        *q++ = c;
    }
    *q = '\0';
}

char *pstrcat(char *buf, int buf_size, const char *s)
{
    int len;
    len = strlen(buf);
    if (len < buf_size)
        pstrcpy(buf + len, buf_size - len, s);
    return buf;
}

int strstart(const char *str, const char *val, const char **ptr)
{
    const char *p, *q;
    p = str;
    q = val;
    while (*q != '\0') {
        if (*p != *q)
            return 0;
        p++;
        q++;
    }
    if (ptr)
        *ptr = p;
    return 1;
}

void dbuf_init(DynBuf *s)
{
    memset(s, 0, sizeof(*s));
}

void dbuf_write(DynBuf *s, size_t offset, const uint8_t *data, size_t len)
{
    size_t end, new_size;
    new_size = end = offset + len;
    if (new_size > s->allocated_size) {
        new_size = max_int(new_size, s->allocated_size * 3 / 2);
        s->buf = realloc(s->buf, new_size);
        s->allocated_size = new_size;
    }
    memcpy(s->buf + offset, data, len);
    if (end > s->size)
        s->size = end;
}

void dbuf_putc(DynBuf *s, uint8_t c)
{
    dbuf_write(s, s->size, &c, 1);
}

void dbuf_putstr(DynBuf *s, const char *str)
{
    dbuf_write(s, s->size, (const uint8_t *)str, strlen(str));
}

void dbuf_free(DynBuf *s)
{
    free(s->buf);
    memset(s, 0, sizeof(*s));
}

/*================================================================*/
/* end of cutils.c */
