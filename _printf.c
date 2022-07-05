#include "main.h"

/**
 * _printf - prints anything at all
 *
 * @format: format string
 *
 * Return: how many bytes it prints to standard output
 */
int _printf(char *format, ...)
{
	va_list args;
	unsigned int index = 0;
	int outputlength = 0;
	int (*getprinty)(va_list);

	va_start(args, format);
	while (format[index])
	{
		while (format[index] != '%' && format[index] != '\0')
		{
			_putchar(format[index]);
			index++;
			outputlength++;
		}
		if (format[index] == '%')
		{
			if (format[index + 1] == '%')
			{
				_putchar('%');
				index += 2;
				outputlength++;
				continue;
			}
			else if (format[index + 1] == '\0')
				return (-1); /* how do we include spurious trailing warning?*/
			getprinty = _plzpickaprinter(format[index + 1]);
			if (getprinty != NULL)
			{
				outputlength += getprinty(args);
				index += 2;
			}
			else if (getprinty == NULL)
			{
				_putchar('%');
				index++;
				outputlength++;
			}
		}
	}
	va_end(args);
	return (outputlength);
}
