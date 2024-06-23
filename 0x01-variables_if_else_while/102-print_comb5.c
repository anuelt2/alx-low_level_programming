#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pair1;
	int pair2;

	for (pair1 = 0; pair1 <= 99; pair1++)
	{
		for (pair2 = pair1 + 1; pair2 <= 99; pair2++)
		{
			putchar((pair1 / 10) + '0');
			putchar((pair1 % 10) + '0');
			putchar(' ');
			putchar((pair2 / 10) + '0');
			putchar((pair2 % 10) + '0');

			if (pair1 != 98 || pair2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
