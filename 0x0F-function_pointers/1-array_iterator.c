#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - Executes a function given as parameter on element of array
 * @array: First parameter
 * @size: Second parameter
 * @action: Third parameter
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
