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

	printf("%ld, %ld, ", fibo_1, fibo_2);

	for (i = 2; i <= 49; i++)
	{
		fibo = fibo_2;
		fibo_2 += fibo_1;
		fibo_1 = fibo;
		if (i <= 49)
			printf("%ld, ", fibo_2);
	}
	printf("\n");
	return (0);
}
