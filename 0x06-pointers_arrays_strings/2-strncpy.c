#include "main.h"

/**
 *_strncpy - copy a string
 *
 * @src: string source
 * @dest: destination string
 * @n: size
 *
 * Return: pointer string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';

	}

	return (dest);

}
