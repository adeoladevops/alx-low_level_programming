 #include "main.h"

/**
 *  _puts - Print characters
 *  @str: pointer to character(s) to be printed
 *  Return: string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');

}
