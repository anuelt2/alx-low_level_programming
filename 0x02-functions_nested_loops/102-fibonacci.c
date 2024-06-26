#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long fibo[50];

	fibo[0] = 1;
	fibo[1] = 2;

	for (i = 0; i <= 49; i++)
	{
		fibo[i + 2] = fibo[i]  + fibo[i + 1];
		printf("%ld, ", fibo[i]);
	}
	printf("\n");
	return (0);
}
