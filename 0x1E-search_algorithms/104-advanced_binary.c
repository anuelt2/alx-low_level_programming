#include "search_algos.h"

/**
 * adv_bin_helper - Searches for the first occurrence of a value in a sorted
 * array of integers using an advanced Binary search algorithm with recursion
 * @array: Pointer to the first element in the array to search in
 * @value: The value to search for
 * @min: Lower index of subarray to search
 * @max: Upper index of subarray to search
 *
 * Return: Index where @value is located, -1 otherwise
 */

int adv_bin_helper(int *array, int value, size_t min, size_t max)
{
	size_t i, mid;

	if (min > max)
	{
		return (-1);
	}

	mid = min + (max - min) / 2;

	printf("Searching in array: ");

	for (i = min; i <= max; i++)
	{
		if (i < max)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (value == array[mid] && (mid == min || array[mid - 1] != value))
	{
		return (mid);
	}

	if (value <= array[mid])
	{
		max = mid;
		return (adv_bin_helper(array, value, min, max));
	}

	min = mid + 1;
	return (adv_bin_helper(array, value, min, max));
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted
 * array of integers using an advanced Binary search algorithm with recursion
 * @array: Pointer to the first element in the array to search in
 * @size: Number of elements in @array
 * @value: The value to search for
 *
 * Return: Index where @value is located, -1 otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t min, max;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	min = 0;
	max = size - 1;

	return (adv_bin_helper(array, value, min, max));
}
