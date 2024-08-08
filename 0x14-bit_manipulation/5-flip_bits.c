#include "main.h"

/**
 * flip_bits - Returns number of bits to flip to get from one number to another
 * @n: Intial number to move from
 * @m: Finnal number to geet to
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numbits;
	unsigned long int result;

	numbits = 0;
	result = n ^ m;
	while (result > 0)
	{
		numbits = numbits + (result & 1);
		result = result >> 1;
	}

	return (numbits);
}
