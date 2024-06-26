#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fib_1, fib_2, fibo, sum;

	fib_1 = 1;
	fib_2 = 2;
	fibo = 0;
	sum = 0;

	for (i = 0; i <= 49; i++)
	{
		if ((fib_2 % 2 == 0) && (fib_2 <= 4000000))
		{
			sum = sum + fib_2;
		}
		fibo = fib_1 + fib_2;
		fib_1 = fib_2;
		fib_2 = fibo;
	}
	printf("%ld\n", sum);
	return (0);
}
