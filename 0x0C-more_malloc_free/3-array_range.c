#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First parameter
 * @max: Second parameter
 * Return: Pointer to array
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int size;
	unsigned int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(size * sizeof(*array));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
