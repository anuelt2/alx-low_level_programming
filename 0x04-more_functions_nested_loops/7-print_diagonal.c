#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Parameter provided
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i - 1; j > 0; j--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
