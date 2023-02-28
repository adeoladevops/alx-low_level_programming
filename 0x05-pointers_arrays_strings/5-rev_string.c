#include "main.h"

/**
 *  rev_string - Print characters in reverse
 *  @s: string to be printed
 *  Return: string
 */
void rev_string(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	char temp;

	while (s < end)
	{
		temp = *s;
		*s = *end;
		*end = temp;
		s++;
		end--;
	}

}
