
#include "main.h"

/**
 *  _putstring - prints a string input
 *
 * @s: string to be printed
 *
 * Return: num of chars printed
 */

int _putstring(char *s)
{
	if (*s == NULL)
		*s = "(nil)";

	while (*s != '\0')
	{
		_putchar(*s);
		*s++;
		count++;
	}
	return (count);
}
