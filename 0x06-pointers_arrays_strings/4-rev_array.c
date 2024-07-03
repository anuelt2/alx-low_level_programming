#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: First parameter
 * @n: Second parameter
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;

	while (i < n / 2)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
		i++;
	}
}
