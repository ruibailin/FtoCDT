/*
 * test.c
 *
 *  Created on: Apr 22, 2021
 *      Author: steve
 */


#include "0ctr.h"
#if UNIT_TEST
#include "6cmd.h"
/*================================================================*/
static void test_line(void * fp,int obj_list);
static void test_line(void * fp,int obj_list)
{
	char *line;
	line = cfil_malloc_read_buf();

	while(1)
	{
		line = cfil_read_text_line(fp, line);
		if(line == NULL)
			return;
		cmd_parse_line(line,obj_list);
	}
	cfil_free_read_buf(line);
}

static void test_gcc(void * fp);
static void test_gcc(void * fp)
{
	int cc_line, ld_line;

	cc_line =0;
	while(1)
	{
		cc_line = ccmd_find_gcc_cc_line(fp, cc_line);
		if(cc_line < 0 )
			break;
		os_printf("cc line is %d \n",cc_line);
		cc_line ++;
		ld_line = ccmd_find_gcc_ld_line(fp, cc_line);
		if(ld_line < 0 )
			break;
		os_printf("ld line is %d \n",ld_line);
		cc_line = ld_line;
		cc_line ++;
	}
}


static char cc_cmd1[]="gcc  -I. -I../..     -I./.. -I./../..   -I./../liblzma     -I./fst -I./../../contrib/rtlbrowse -g -O2   -MT evcd2vcd.o -MD -MP -MF .deps/evcd2vcd.d -c -o evcd2vcd.o evcd2vcd.c";
static char cc_cmd2[]="gcc  -I. -I../..     -I../.. -I../../src -DAAAAAAA -DBBBBB -I../../src/helpers -pthread -DCCCCCCCCC -I/usr/include/gtk-2.0 -DBBBBB -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16   -I./../../src/liblzma  -I./../../src/helpers/fst      -g -O2   -MT definehash.o -MD -MP -MF .deps/definehash.Tpo -c -o definehash.o definehash.c";
static char d_file[]="/home/steve/code/code/board/gtkwave-3.3.108/src/helpers/.deps/fastlz.Po";
static void test_gcc_cc(void);
static void test_gcc_cc(void)
{
	int list;
	list = 0;
	list = ccmd_gcc_cc_get_user_inc_dir_list(cc_cmd1,list,list);
	list_print_name(list);
	list_clr_record(list);

	list = 0;
	list = ccmd_gcc_cc_get_user_inc_dir_list(cc_cmd1,list,list);
	list = ccmd_gcc_cc_get_user_inc_dir_list(cc_cmd2,list,list);
	list_print_name(list);

	list_clr_record(list);

	list = 0;
	list = ccmd_gcc_cc_get_def_macro_list(cc_cmd2,list,list);
	list_print_name(list);
	list_clr_record(list);

	list = 0;
	list = ccmd_gcc_cc_get_sys_inc_dir_list(cc_cmd2,list,list);
	list_print_name(list);
	list_clr_record(list);
}

static char ld_cmd1[]="g++ -I./.. -I./helpers  -pthread -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -I./liblzma    -I./helpers/fst   -I/usr/include/tcl8.6 -I/usr/include/tcl8.6       -I./cocoa -pthread -I/usr/include/gtk-unix-print-2.0 -I/usr/include/gtk-2.0 -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16  -g -O2   -o gtkwave evcd2vcd.o fsdb_wrapper_api.o globals.o ae2.o analyzer.o baseconvert.o bitvec.o bsearch.o busy.o clipping.o color.o currenttime.o debug.o discardbuttons.o edgebuttons.o entry.o extload.o fetchbuttons.o fgetdynamic.o file.o fonts.o fst.o gconf.o getopt.o getopt1.o ghw.o ghwlib.o hierpack.o jrb.o help.o lxt2_read.o lxt_write.o vzt_read.o hiersearch.o interp.o logfile.o lx2.o lxt.o main.o markerbox.o menu.o mouseover.o mouseover_sigs.o pagebuttons.o pipeio.o pixmaps.o print.o ptranslate.o rc.o regex.o renderopt.o rgb.o savefile.o search.o shiftbuttons.o showchange.o signalwindow.o simplereq.o splash.o status.o strace.o symbol.o tcl_commands.o tcl_helper.o tcl_np.o tcl_support_commands.o timeentry.o translate.o tree.o treesearch.o tree_component.o ttranslate.o vcd.o vcd_keywords.o vcd_partial.o vcd_recoder.o vcd_saver.o vlist.o vzt.o wavewindow.o zoombuttons.o ./cocoa/libgtkwmacintegration.a  -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype ./liblzma/libgwlzma.a -llzma -lz -lbz2 ./helpers/fst/libfst.a  -L/usr/lib/x86_64-linux-gnu -ltcl8.6 -L/usr/lib/x86_64-linux-gnu -ltk8.6     -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype  -lnsl -lpthread -lm -ldl";
static void test_gcc_ld(void);
static void test_gcc_ld(void)
{
	int list;
	char *d_name;
	ccmd_gcc_ld_get_dest_work_dir(ld_cmd1);

	list = ccmd_gcc_ld_get_obj_list(ld_cmd1);
	ccmd_gcc_cc_find_c_file(cc_cmd1, list);
	d_name = dir_malloc_name_buf();
	ccmd_gcc_cc_find_d_file(cc_cmd1, list,d_name);
	dir_free_name_buf(d_name);
	list_print_name(list);
	list_clr_record(list);

	list = 0;
	list = ccmd_gcc_ld_get_lib_file_list(ld_cmd1,list);
	list_print_name(list);
	list_clr_record(list);

	list = 0;
	list = ccmd_gcc_ld_get_lib_dir_list(ld_cmd1,list);
	list_print_name(list);
	list_clr_record(list);

}

static void test_make(void *fp);
static void test_make(void *fp)
{
	int line;
	line = ccmd_find_gcc_ld_line(fp, 0);
	ccmd_make_get_sour_work_dir(fp,line+3);
}

void test_cmd(int argc, char **argv)
{
	void *fp;
	int obj;

	fp = os_fopen(argv[1],"r");
	if(fp == NULL)
	{
		os_print("no make output file\n");
		return;
	}

	obj = 0;
	test_line(fp,obj);
	test_gcc(fp);
	test_gcc_cc();
	test_gcc_ld();
	test_make(fp);

	os_fclose(fp);
}
/*================================================================*/
#endif
/* end of test.c */
