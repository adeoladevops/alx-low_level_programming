#include "main.h"

/**
 *  * print_alphabet_x10 - Prints alphabet 10 times in lowercase.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
