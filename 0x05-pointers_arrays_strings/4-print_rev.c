#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Parameter taken
 * Return: Void
 */

void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	for (count = count; count >= 0; count--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
