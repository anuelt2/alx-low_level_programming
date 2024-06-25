#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const int num1 = 3;
	const int num2 = 5;
	const int num3 = 1024;
	int i;

	for (i = num1; i < num3; i++)
	{
		if (i % num1 == 0 || i % num2 == 0)
			printf("%d, ", i);
	}
	printf("\n");
	return (0);
}
