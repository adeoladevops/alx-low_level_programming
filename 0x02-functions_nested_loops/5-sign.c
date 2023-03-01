#include "main.h"

/**
 * print_sign - Prints the sign of any number.
 * @n: any number whose sign will be printed..
 *
 * Return: 1 when n > '0',
 *	0 when n == '0',
 *	-1 when n < '0'.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
