#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(src + i) != '\0')
		i++;
	if (n > i)
	{
		while (j < i && *(src + j) != '\0')
		{
			dest[j] = *(src + j);
			j++;
		}
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	else
	{
		while (j < n)
		{
			dest[j] = *(src + j);
			j++;
		}
	}

	return (dest);
}
