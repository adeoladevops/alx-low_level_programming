#include "main.h"

/**
 *  rev_string - Print characters in reverse
 *  @s: string to be printed
 *  Return: string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}


