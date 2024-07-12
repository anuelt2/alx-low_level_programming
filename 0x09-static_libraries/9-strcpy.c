#include "main.h"

/**
 * _strcpy - Copies string from one location to another
 * @dest: First parameter
 * @src: Second parameter
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (*(src + i) != '\0')
		i++;

	for (j = 0; j < i; j++)
		dest[j] = src[j];

	dest[i] = '\0';

	return (dest);
}
