#include "search_algos.h"

/**
 * block_search - Searches for a value in a block of an array using the
 * Linear search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @value: The value to search for
 * @min: The lower index of the block of @array to search
 * @max: The upper index of the block of @array to search
 *
 * Return: First index where @value is located, -1 otherwise
 */

int block_search(int *array, size_t size, int value, size_t min, size_t max)
{
	size_t i;

	printf("Value found between indexes [%ld] and [%ld]\n", min, max);
	for (i = min; i <= max; i++)
	{
		if (i >= size)
		{
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: First index where @value is located, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t mark, jump;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	mark = 0;
	jump = (size_t)sqrt(size);
	while (mark < size)
	{
		if (value <= array[mark])
		{
			return (block_search(array, size, value, mark - jump, mark));
		}
		printf("Value checked array[%ld] = [%d]\n", mark, array[mark]);
		mark = mark + jump;
		if (mark >= size)
		{
			return (block_search(array, size, value, mark - jump, mark));
		}
	}

	return (-1);
}
