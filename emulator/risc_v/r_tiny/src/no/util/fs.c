
/*------------------------------------
 * fs.c
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

#include "0ctr.h"
/*================================================================*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>
#include <stdarg.h>

#include "cutils.h"
#include "fs.h"

FSFile *fs_dup(FSDevice *fs, FSFile *f)
{
    FSQID qid;
    fs->fs_walk(fs, &f, &qid, f, 0, NULL);
    return f;
}

FSFile *fs_walk_path1(FSDevice *fs, FSFile *f, const char *path,
                      char **pname)
{
    const char *p;
    char *name;
    FSFile *f1;
    FSQID qid;
    int len, ret;
    BOOL is_last, is_first;

    if (path[0] == '/')
        path++;

    is_first = TRUE;
    for(;;) {
        p = strchr(path, '/');
        if (!p) {
            name = (char *)path;
            if (pname) {
                *pname = name;
                if (is_first) {
                    ret = fs->fs_walk(fs, &f, &qid, f, 0, NULL);
                    if (ret < 0)
                        f = NULL;
                }
                return f;
            }
            is_last = TRUE;
        } else {
            len = p - path;
            name = malloc(len + 1);
            memcpy(name, path, len);
            name[len] = '\0';
            is_last = FALSE;
        }
        ret = fs->fs_walk(fs, &f1, &qid, f, 1, &name);
        if (!is_last)
            free(name);
        if (!is_first)
            fs->fs_delete(fs, f);
        f = f1;
        is_first = FALSE;
        if (ret <= 0) {
            fs->fs_delete(fs, f);
            f = NULL;
            break;
        } else if (is_last) {
            break;
        }
        path = p + 1;
    }
    return f;
}

FSFile *fs_walk_path(FSDevice *fs, FSFile *f, const char *path)
{
    return fs_walk_path1(fs, f, path, NULL);
}

void fs_end(FSDevice *fs)
{
    fs->fs_end(fs);
    free(fs);
}


/*================================================================*/
/* end of fs.c */
