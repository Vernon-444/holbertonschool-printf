#include "main.h"
#include <stdlib.h>

/**
 * _plzpickaprinter - returns the right function for a given _printf specifier
 *
 * @format: const character from format string that is hopefully a specifier
 *
 * Return: function pointer to specific printer that takes a va_list argument
 * and returns an int after printing, or we just return NULL if we want to
 * pretend that the specifier wasn't meaningful or that we didn't hear it
 */
static int (*_plzpickaprinter(const char *format))(va_list)
{

	printer_t structarray[] = {
		{"c", _printchar},
		{"s", _putstring},
		{"i", _putint},
		{"d", _putint},
		{NULL, NULL}
	};
	int structarrayindex;

	structarrayindex = 0;
	while (structarray[structarrayindex])
	{
		if (*structarray[structarrayindex].specifier == *format)
			return (structarray[structarrayindex].printfunction);
		structarrayindex++;
	}
	return (structarray[structarrayindex].printfunction);
}
