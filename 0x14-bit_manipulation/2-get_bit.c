#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number given
 * @index: Index provided
 *
 * Return: Value of bit at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	int bit_value;

	if (index > 32)
	{
		return (-1);
	}

	bit = n >> index;
	bit_value = bit & 1;

	return (bit_value);
}
