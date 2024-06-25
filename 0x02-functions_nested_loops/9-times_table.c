#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: Void
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = j * i;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (k < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
