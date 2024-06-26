#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib1;
	unsigned long fib2;
	unsigned long fib;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 2; i <= 96; i++)
	{
		fib = fib2;
		fib2 += fib1;
		fib1 = fib;

		if (i <= 96)
			printf("%lu, ", fib2);
	}
	printf("%lu\n", fib2 + fib1);

	return (0);
}
