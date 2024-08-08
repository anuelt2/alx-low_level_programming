#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Number provided
 * @index: Index given
 *
 * Return: 1 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 64)
	{
		return (-1);
	}

	bit = ~(1 << index);
	*n = *n & bit;

	return (1);
}
