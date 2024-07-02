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

	if (i == (n - 1))
		printf("%d\n", *a);
	else
	{
		while (i < n - 1)
		{
			printf("%d, ", *(a + i));
			i++;
		}
		printf("%d\n", *(a + (n - 1)));
	}
}
