/* This is a header file for the recreation of printf*/
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h> /* includes write func */


typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;


void _printf(char* format, ...); /* prototype provided */


int _putchar(char c);
int _putint(int c);
int _putstring(char *c);



#endif
