 #include "main.h"

/**
 *  _puts - Print characters
 *  @str: pointer to character(s) to be printed
 *  Return: 0 always
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}

	putchar('\n');

}
