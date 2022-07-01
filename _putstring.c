#include "main.h"

/**
 * _putstring - prints string
 *
 * @s: string to be printed
 */

int _putstring(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	_putstring(++s);
}
