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

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}

	_putchar('\n');

}
