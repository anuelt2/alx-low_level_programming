#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to number provided
 * @index: Index given
 *
 * Return: 1 for success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
	{
		return (-1);
	}

	bit = bit << index;
	*n = (*n | bit);

	return (1);
}
