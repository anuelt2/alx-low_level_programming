#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: First parameter
 * @accept: Second parameter
 * Return: Number of bytes from origininal segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
			{
				j++;
				break;
			}
			else if (*(accept + j) == '\0')
				return (j + 1);
			j++;
		}
		i++;
	}
	return (j + 1);
}
