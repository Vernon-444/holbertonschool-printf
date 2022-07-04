/* This is a header file for the recreation of printf*/
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h> /* includes write func */


typedef struct printer
{
	char *specifier;
	int (*printfunction)(va_list arg);
} printer_t;


void _printf(char* format, ...); /* prototype provided */



#endif
