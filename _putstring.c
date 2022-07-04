#include "main.h"
#include <stdarg.h>

/**
 *  _putstring - prints a string input
 *
 * @s: string to be printed
 *
 * Return: num of chars printed
 */

int _putstring(va_list s)
{
	int count = 0;

	if (s == NULL)
		s = "(nil)";

	while (*s != '\0')
	{
		_printchar(s);
		count++;
	}
	return (count);
}
