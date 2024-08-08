#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: Pointer to a tsring of 0 and 1 chars
 *
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci;

	if (b == NULL)
	{
		return (0);
	}

	deci = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		deci = deci * 2 + (*b - '0');
		b++;
	}
	return (deci);
}
