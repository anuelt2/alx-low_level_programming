#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib1, fib2, fib, fib11, fib12, fib21, fib22;

	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu", fib1, fib2);
	for (i = 3; i <= 91; i++)
	{
		fib = fib2;
		fib2 = fib2 + fib1;
		fib1 = fib;
		if (i <= 91)
			printf(", %lu", fib2);
	}
	fib11 = fib1 / 1000000000;
	fib12 = fib1 % 1000000000;
	fib21 = fib2 / 1000000000;
	fib22 = fib2 % 1000000000;
	for (i = 92; i <= 98; i++)
	{
		fib21 = fib21 + fib11;
		fib11 = fib21 - fib11;
		fib22 = fib22 + fib12;
		fib12 = fib22 - fib12;
		printf(", %lu", fib21 + (fib22 / 1000000000));
		printf("%lu", fib22 % 1000000000);
	}
	printf("\n");
	return (0);
}
