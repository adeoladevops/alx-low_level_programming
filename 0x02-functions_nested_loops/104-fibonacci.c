#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long w, x, y, z;
	unsigned long a, b;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	w = fib1 / 10000000000;
	y = fib2 / 10000000000;
	x = fib1 % 10000000000;
	z = fib2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		a = w + y;
		b = x + z;
		if (x + z > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (count != 98)
			printf(", ");

		w = y;
		w = z;
		x = a;
		z = b;
	}
	printf("\n");
	return (0);
}
