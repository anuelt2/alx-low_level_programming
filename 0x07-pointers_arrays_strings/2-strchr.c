#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @s: First parameter
 * @c: Second parameter
 * Return: First occurrence of c in the string or NULL if c not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return (NULL);
}
