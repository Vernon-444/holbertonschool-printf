/* This is a header file for the recreation of printf*/
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h> /* includes write func */
#include <stddef.h>

typedef struct printer
{
	char *specifier;
	int (*printfunction)(va_list arg);
} printer_t;


int _printf(char* format, ...);
int (*_plzpickaprinter(char picky))(va_list);
int _intorder(int numby);
int _putchar(char c);
int _printchar(va_list c);
int _putstring(va_list s);
int _putint(va_list num);

#endif
