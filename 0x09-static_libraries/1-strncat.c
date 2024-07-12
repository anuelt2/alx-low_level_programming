#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n && *(src + j) != '\0')
	{
		dest[i + j] = *(src + j);
		j++;
	}
	dest[i + j] = '\0';

	return (dest);
}
