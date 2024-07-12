#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: First parameter
 * @b: Second parameter
 * @n: Third parameter
 * Return: Memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
