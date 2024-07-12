#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: Parameter taken
 * Return: Length of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
