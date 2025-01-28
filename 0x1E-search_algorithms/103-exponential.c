#include "search_algos.h"

/**
 * _binary_search - Searches for a value in a sorted array of integers
 * using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 * @min: Lower index of subarray to search
 * @max: Upper index of subarray to search
 *
 * Return: First index where @value is located
 */

int _binary_search(int *array, size_t size, int value, size_t min, size_t max)
{
	size_t i, mid;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", min, max);
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

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using Exponential search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: First index where @value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, min, max;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	i = 0;
	if (value == array[i])
	{
		return (i);
	}
	i = 1;
	while (value >= array[i] || i < size)
	{
		if (value == array[i])
		{
			return (i);
		}
		else if (value < array[i])
		{
			min = i / 2;
			max = i;

			return (_binary_search(array, size, value, min, max));
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;

		if (i >= size)
		{
			min = i / 2;
			max = size - 1;

			return (_binary_search(array, size, value, min, max));
		}
	}

	return (-1);
}
