#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First parameter
 * @s2: Second parameter
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
			break;
		i++;
	}

	return (*(s1 + i) - *(s2 + i));
}
