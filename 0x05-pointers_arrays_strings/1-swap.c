#include "main.h"

/**
 * swap_int - swap two int
 * a
 * b
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
