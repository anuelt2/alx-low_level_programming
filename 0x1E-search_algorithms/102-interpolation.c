#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: First index where @value is located, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (value == array[pos])
		{
			return (pos);
		}
		else if (value < array[pos])
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}

	return (-1);
}
