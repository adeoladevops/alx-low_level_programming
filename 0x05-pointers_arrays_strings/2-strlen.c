#include "main.h"

/**
 *  _strlen - return length of characters
 *  @s: character to check
 *  Return: 0 always
 */

int _strlen(char *s)
{
	 int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);

}
