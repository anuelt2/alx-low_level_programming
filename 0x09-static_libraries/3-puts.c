#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @s: Parameter taken
 * Return: Void
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
