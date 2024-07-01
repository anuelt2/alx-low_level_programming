#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Parameter taken
 * Return: Void
 */

void puts_half(char *str)
{
	int half;
	int index = 0;

	while (str[index] != '\0')
		index++;
	half = index / 2;
	for (index = half; index < half * 2; index++)
		_putchar(str[index]);
	_putchar('\n');
}
