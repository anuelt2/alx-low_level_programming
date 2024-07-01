#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: Parameter taken
 * Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
