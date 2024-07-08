#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Locates a character in a string
 * @s: First parameter
 * @c: Second parameter
 * Return: First occurrence of c in the string or NULL if c not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
