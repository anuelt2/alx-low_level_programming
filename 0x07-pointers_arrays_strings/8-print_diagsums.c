#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: First parameter
 * @size: Second parameter
 * Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1_sum;
	int diag2_sum;

	diag1_sum = 0;
	diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum = diag1_sum + *(a + i);
		a = a + size;
	}
	a = a - size;

	for (i = 0; i < size; i++)
	{
		diag2_sum = diag2_sum + *(a + i);
		a = a - size;
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
