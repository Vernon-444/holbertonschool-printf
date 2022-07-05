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
	char *stringy;
	int count = 0;

	stringy = va_arg(s, char *);
	if (stringy == NULL)
		stringy = "(null)";

	while (*stringy != '\0')
	{
		_putchar(*stringy);
		stringy++;
		count++;
	}
	return (count);
}
