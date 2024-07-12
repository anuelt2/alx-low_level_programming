#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: First parameter
 * @accept: Second parameter
 * Return: Pointer to the byte s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(accept + j) == *(s + i))
				return (s + i);
		}
	}
	return (NULL);
}
