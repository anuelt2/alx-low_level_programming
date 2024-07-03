#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for 101-crakme program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum;
	char n;

	sum = 0;

	srand(time(0));

	while (sum <= 2645)
	{
		n = rand() % 128;
		sum = sum + n;
		putchar(n);
	}
	putchar(2772 - sum);

	return (0);
}
