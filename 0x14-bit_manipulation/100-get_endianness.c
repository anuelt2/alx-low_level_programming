#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 or big endian, 1 for little endian
 */

int get_endianness(void)
{
	int n;
	char *s;

	n = 1;
	s = (char *)&n;

	return (*s);
}
