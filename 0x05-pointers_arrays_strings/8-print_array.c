#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of an array
 * @a: First parameter
 * @n: Second parameter
 * Return: Void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
