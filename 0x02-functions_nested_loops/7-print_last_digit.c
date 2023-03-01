#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to test
 *
 * Return: the last digit of any number.
 */

int print_last_digit(int n)
{
	int a = n % 10;

	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);
}
