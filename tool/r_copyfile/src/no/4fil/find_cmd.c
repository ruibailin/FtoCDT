/*
 * find_cmd.c
 *
 *  Created on: Apr 29, 2021
 *      Author: steve
 */


#include "0ctr.h"
#include "read.h"
/*================================================================*/
//find cmd command line which has string find1 or string find2
int cfil_cmd_next_one_or_two(void *fp,char *cmd,char *find1,char *find2);
int cfil_cmd_next_one_or_two(void *fp,char *cmd,char *find1,char *find2)
{
	int cur_pos;

	char *str,*buf;
	int num,ret;

    buf = cbuf_malloc(MIN_LINE_CHAR);
    num =0;
    while (1)
    {
        if(os_feof(fp))
        {
            cbuf_free(buf);
            return -1;
        }

		cur_pos = os_ftell(fp);
        str =  cfil_read_text_line(fp, buf);
        buf = str;
        if (str == NULL)
            return -1;

        ret = cstr_cmp(str,cmd);
        if(ret != 0)
        {
        	num++;
        	continue;
        }
        else
        	str += os_strlen(cmd);

        ret=cstr_find_whole_word(str,find1);
        if(ret >= 0)
        {
    		os_fseek_set(fp,cur_pos);		//restore for read again
            cbuf_free(buf);
            break;
        }
        ret=cstr_find(str,find2);
        if(ret<0)
        {
    		os_fseek_set(fp,cur_pos);		//restore for read again
            cbuf_free(buf);
            break;
        }
        num ++;
        continue;
    }
    return num;
}

//return: goto the address successfully,if = line,
int cfil_cmd_one_or_two(void *fp,char *cmd,char *find1,char *find2);
int cfil_cmd_one_or_two(void *fp,char *cmd,char *find1,char *find2)
{
	int num;

	os_fseek_set(fp,0);
	num = cfil_cmd_next_one_or_two(fp,cmd,find1,find2);

    return num;
}
/*================================================================*/
//find cmd command line which has string first followed by string second
int cfil_cmd_next_order(void *fp,char *cmd,char *first,char *second);
int cfil_cmd_next_order(void *fp,char *cmd,char *find1,char *find2)
{
	int cur_pos;

	char *str,*buf;
	int num,ret;

    buf = cbuf_malloc(MIN_LINE_CHAR);
    num =0;
    while (1)
    {
        if(os_feof(fp))
        {
            cbuf_free(buf);
            return -1;
        }

		cur_pos = os_ftell(fp);
        str =  cfil_read_text_line(fp, buf);
        buf = str;
        if (str == NULL)
            return -1;

        ret = cstr_cmp(str,cmd);
        if(ret != 0)
        {
        	num++;
        	continue;
        }
        else
        	str += os_strlen(cmd);

        ret=cstr_find_whole_word(str,find1);
        if(ret<0)
        {
            num ++;
            continue;
        }

        str += ret;
        str += os_strlen(find1);

        ret=cstr_find(str,find2);
        if(ret<0)
        {
            num ++;
            continue;
        }

        else
        {
    		os_fseek_set(fp,cur_pos);		//restore for read again
            cbuf_free(buf);
            break;
        }
    }
    return num;
}

//return: goto the address successfully,if = line,
int cfil_cmd_order_strings(void *fp,char *cmd,char *first,char *second);
int cfil_cmd_order_strings(void *fp,char *cmd,char *first,char *second)
{
	int num;

	os_fseek_set(fp,0);
	num = cfil_cmd_next_order(fp,cmd,first,second);

    return num;
}
/*================================================================*/
//find cmd command line which has strings find1 and find2
int cfil_cmd_next_two(void *fp,char *cmd,char *find1,char *find2);
int cfil_cmd_next_two(void *fp,char *cmd,char *find1,char *find2)
{
	int cur_pos;

	char *str,*buf;
	int num,ret;

    buf = cbuf_malloc(MIN_LINE_CHAR);
    num =0;
    while (1)
    {
        if(os_feof(fp))
        {
            cbuf_free(buf);
            return -1;
        }

		cur_pos = os_ftell(fp);
        str =  cfil_read_text_line(fp, buf);
        buf = str;
        if (str == NULL)
            return -1;

        ret = cstr_cmp(str,cmd);
        if(ret != 0)
        {
        	num++;
        	continue;
        }
        else
        	str += os_strlen(cmd);

        ret=cstr_find_whole_word(str,find1);
        if(ret<0)
        {
            num ++;
            continue;
        }

        ret=cstr_find(str,find2);
        if(ret<0)
        {
            num ++;
            continue;
        }
        else
        {
    		os_fseek_set(fp,cur_pos);		//restore for read again
            cbuf_free(buf);
            break;
        }
    }
    return num;
}

//return: goto the line successfully,if found,
int cfil_cmd_two_strings(void *fp,char *cmd,char *find1,char *find2);
int cfil_cmd_two_strings(void *fp,char *cmd,char *find1,char *find2)
{
	int num;

	os_fseek_set(fp,0);
	num = cfil_cmd_next_two(fp,cmd,find1,find2);

    return num;
}
/*================================================================*/
//find cmd command line which has string find
int cfil_cmd_next_one(void *fp,char *cmd,char *find);
int cfil_cmd_next_one(void *fp,char *cmd,char *find)
{
	int cur_pos;

	char *str,*buf;
	int num,ret;

    buf = cbuf_malloc(MIN_LINE_CHAR);
    num =0;
    while (1)
    {
        if(os_feof(fp))
        {
            cbuf_free(buf);
            return -1;
        }

		cur_pos = os_ftell(fp);
        str =  cfil_read_text_line(fp, buf);
        buf = str;
        if (str == NULL)
            return -1;

        ret = cstr_cmp(str,cmd);
        if(ret != 0)
        {
        	num++;
        	continue;
        }
        else
        	str += os_strlen(cmd);

        ret=cstr_find_whole_word(str,find);
        if(ret<0)
        {
            num ++;
            continue;
        }
        else
        {
    		os_fseek_set(fp,cur_pos);		//restore for read again
            cbuf_free(buf);
            break;
        }
    }
    return num;
}

//return: goto the line successfully,if found,
int cfil_cmd_one_string(void *fp,char *cmd,char *find);
int cfil_cmd_one_string(void *fp,char *cmd,char *find)
{
	int num;

	os_fseek_set(fp,0);
	num = cfil_cmd_next_one(fp,cmd,find);

    return num;
}

/*================================================================*/
/* end of find_cmd.c */
