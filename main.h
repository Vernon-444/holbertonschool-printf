#ifndef MAIN_H
#define MAIN_H

/* This is a header file for the printf recreation project */

#include <stdarg.h>
#include <unistd.h> /* includes write func */
#include <stddef.h>



/**
 * struct printer - struct w/ pointer to functions to print various data types
 *
 * @specifier: comparison tool to determine data type
 * @printfunction: - pointer to function to putchar specific data type
 * printer_t - variable to use
 *
 * Description: Takes a char from string format and compares it to determine
 * what data type it is so that they can be converted to to chars to be printed
 * using putchar variants.
 */


typedef struct printer
{
	char *specifier;
	int (*printfunction)(va_list arg);
} printer_t;


int _printf(char *format, ...);
int (*_plzpickaprinter(char picky))(va_list);
int _intorder(int numby);
int _putchar(char c);
int _printchar(va_list c);
int _putstring(va_list s);
int _putint(va_list num);

#endif
