#include "main.h"

/**
 * _intorder - determines size of int
 *
 * @numby: input num to be sized
 *
 * Return: magnitude of num
 */

int _intorder(int numby)
{
	int order = 1;

	while ((numby / order) != 0)
	{
		if (order == 1000000000 && (numby / order) != 0)
		{
			return (order);
		}
		order = order * 10;
	}

	return (order / 10);
}



/**
 * _putint - prints out input integer
 *
 * @num: number (integer) to be printed
 *
 * Return: number of ints printed as chars
 */

int _putint(va_list num)
{
	int thenumber, order, result, count = 0;

	thenumber = va_arg(num, int);

	order  = _intorder(thenumber);

	if (thenumber < 0)
	{
		_putchar('-');
		count++;
	}

	while (order >= 1)
	{
		result = numby / order;

		if (result < 0)
		{
			result = -result;
		}
		_putchar(result + '0');
		thenumber = thenumber % order;
		order = order / 10;
		count++;
	}

	return (count);

}
