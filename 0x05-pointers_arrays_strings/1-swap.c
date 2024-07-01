#include "main.h"

/**
 * swap_int - Swaps values of two integers
 * @a: First parameter
 * @b: Second parameter
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int *c;
	int y = 0;

	c = &y;

	*c = *a;
	*a = *b;
	*b = *c;
}
