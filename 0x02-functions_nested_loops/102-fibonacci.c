#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fibo_1;
	long fibo_2;
	long fibo;

	fibo_1 = 1;
	fibo_2 = 2;

	for (i = 2; i <= 50; i++)
	{
		fibo = fibo_2;
		fibo_2 += fibo_1;
		fibo_1 = fibo;
		if (i <= 50)
			printf("%ld, ", fibo_2);
	}
	printf("%ld\n", fibo_2);
	return (0);
}
