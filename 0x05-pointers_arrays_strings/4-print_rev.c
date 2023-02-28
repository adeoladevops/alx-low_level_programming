#include "main.h"

/**
 *  print_rev - Print characters in reverse
 *  @s: string to be printed
 *  Return: string
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	for (int i = b - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
