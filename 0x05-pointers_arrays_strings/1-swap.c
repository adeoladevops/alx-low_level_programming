#include "main.h"

/**
 * swap_int - swap two int
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
