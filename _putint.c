#include "main.h"

/**
 * _intorder - determines size of int
 *
 * @num: input num to be sized
 *
 * Return: magnitude of num
 */

int _intorder(int num)
{
	int order = 1;

	while ((num / order) != 0)
	{
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

int _putint(int num)
{
	int order;
	int count  = 0;

	order  = _intorder(num);

	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}

	while (order >= 1)
	{
		_putchar((num / order) + '0');
		num = num % order;
		order = order / 10;
		count++;
	}

	return (count);

}

