#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: Pointer to the first element fo the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: Index where @value is located, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, min, max, mid;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	min = 0;
	max = size - 1;
	while (min <= max)
	{
		mid = min + (max - min) / 2;
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			if (i < max)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}

		if (value == array[mid])
		{
			return (mid);
		}
		if (value < array[mid])
		{
			max = mid - 1;
		}
		else
		{
			min = mid + 1;
		}
	}

	return (-1);
}
