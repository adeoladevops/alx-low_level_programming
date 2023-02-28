#include "main.h"

/**
 *  rev_string - Print characters in reverse
 *  @s: string to be printed
 *  Return: string
 */
void rev_string(char *s)
{
	int i = 0, x, y;

	char a;

	while (s[i] != '\0')
	{
		i++;
	}
	y = i - 1

	for (x = 0, y >= 0 && x < y; y--, x++)
	{
		a = s[x];
		s[x] = s[y];
		s[y] = a;
	}

}
