#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: First parameter
 * @src: Second parameter
 * @n: Third parameter
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
