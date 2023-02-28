#include "main.h"

/**
 *  print_rev - Print characters
 *  @s: pointer to character(s) to be printed
 *  Return: string
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a--;
	}

	_putchar('\n');

}
