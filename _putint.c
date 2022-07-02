#include "main.h"
/**
 * intlen - gets length of int, used to perform itoa
 *
 * @num: int to get length of
 *
 * Return: length of int, called len
 */
int intlen(int num)
{
	int order = 1000000000, count;

	while ((num / order) != 0)
	{
		count++;
		order = order / 10;
	}
	return(count);
}


/**
 * _putint - prints integers fed int from mods d & i
 *
 * @n: num fed from printf
 *
 * Return: int of num of chars written
 */

int _putint(int n)
{
        int i = 0, len;
	char *str;
	bool neg = false;

	/* Check for negatives */
	if (n < 0)
	{
		n = -n;
		neg = true;
	}

	/*Get len of int*/
	len = intlen(n);
	str = malloc(count * sizeof(char));

	/* write ints into */
        if (neg == true)
	{
		_putcahr('-');
		i++;
	}
	
}
