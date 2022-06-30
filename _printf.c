#include "main.h"

/**
 * _printf - prints everything
 *
 * @format: ...
 */

int _printf(const char *format, ...)
{
	char *string;
	unsigned int i;
	char *s;
	va_list list;

	va_start(arg, format);

	
