#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Parameter provided
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			for (j = i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
