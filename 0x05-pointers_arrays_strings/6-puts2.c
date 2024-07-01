#include "main.h"

/**
 * puts2 - Prints evry other character of a string
 * @str: Parameter taken
 * Return: Void
 */

void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0)
			_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
