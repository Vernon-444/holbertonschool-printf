
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
	int count = 0;

	if (s == NULL)
		s = "(nil)";

	while (*s != '\0')
	{
		_putchar(*s);
		count++;
	}
	return (count);
}
