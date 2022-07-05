#include <unistd.h>
#include <stdarg.h>

/**
 * _printchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printchar(va_list c)
{
	char thecharacter;

	thecharacter = va_arg(c, int);
	if (thecharacter = NULL)
		return (0);
	return (write(1, &thecharacter, 1));
}
