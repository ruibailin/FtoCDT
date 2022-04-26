/*
 * copy.c
 *
 *  Created on: Apr 16, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "read.h"
/*================================================================*/
int cfil_copy_text_file(char *sn,char *dn);
int cfil_copy_text_file(char *sn,char *dn)
{
	char *str,*line;
	void *sf,*df;
	int num;

//	os_printf("copy: %s to %s \n",sn,dn);
//	return 0;

	df = os_fopen(dn, "w");
	if (df == NULL)
    {
    	os_debug("Open dest %s Wrong!\n",dn);
    	return -1;
    }

    sf = os_fopen(sn, "r");
    if (sf == NULL)
    {
    	os_debug("Open sour %s Wrong!\n",sn);
    	os_fputs(df,sn);
        os_fclose(df);
    	return -1;
    }


    num =0;
    while (1)
    {
    	if(os_feof(sf))
    		break;
        line = cbuf_malloc(MIN_LINE_CHAR);
        str =  cfil_read_text_line(sf, line);
        if (str == NULL)
            break;
        os_fputs(df,str);
        num ++;
        cbuf_free(line);
    }

    os_fclose(sf);
    os_fclose(df);
    return num;
}


int cfil_copy_sour_file(char *sn);
int cfil_copy_sour_file(char *sn)
{
	char *dn;
	int ret;

	ret = os_find_file(sn);
	if( ret == 0)
	{
		os_printf("%s no exists, can't copy!\n",sn);
		return -1;
	}
	dn = cdir_malloc_name_buf();
	cdir_change_sour_to_dest(sn,dn);
	ret = cdir_make_abs_dir(dn);
	ret = os_find_file(dn);
	if( ret == 0)
		ret = cfil_copy_text_file(sn,dn);
//	else
//		os_printf("%s exists, no replace\n",dn);
	cdir_free_name_buf(dn);
    return ret;
}
/*================================================================*/
/* end of copy.c */
