#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Parameter taken
 * Return: Length of a string
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}

	return (i);
}
