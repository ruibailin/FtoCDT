/**
 * @file memory.h
 * @author Mickael Albisser + Moctar Ba
 * @brief Interpreter commands
 */

#ifndef _FUNCTIONS
#define _FUNCTIONS


int loadcmd(interpreteur inter, memory mem);
int dispcmd(interpreteur inter, memory mem);
int setcmd(interpreteur inter, memory mem);
int debugcmd(interpreteur inter);
int assertcmd(interpreteur inter, memory mem);
int resumecmd(interpreteur inter);
int disasmcmd(interpreteur inter, memory mem);
int runcmd(interpreteur inter, memory mem);
int stepcmd(interpreteur inter, memory mem);
int breakcmd(interpreteur inter, memory mem);

#endif
