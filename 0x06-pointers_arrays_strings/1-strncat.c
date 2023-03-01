#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source of string
 * @dest: destination of the string
 * @n: size
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[i + x] = src[x];

	}

	dest[i + x] = '\0';

	return (dest);
}
