#include "main.h"

/**
 * print_line - Draws straight line in the terminal
 * @n: Parameter taken
 * Return: Void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			_putchar('_');
			i++;
		}
		else
			_putchar('\n');
	}
	_putchar('\n');
}
