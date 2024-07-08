#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: First parameter
 * @accept: Second parameter
 * Return: Number of bytes from origininal segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int length;

	length = 0;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(accept + j) == *(s + i))
			{
				length++;
				break;
			}
			else if (*(accept + j + 1) == '\0')
				return (length);
		}
	}
	return (length);
}
