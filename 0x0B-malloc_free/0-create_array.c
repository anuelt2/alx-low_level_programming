#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes with specific char
 * @size: First parameter
 * @c: second parameter
 * Return: Pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
